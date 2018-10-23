//
//  JollyPayManager.h
//  JollyPaySDK
//
//  Created by xumin on 2018/6/28.
//  Copyright © 2018年 JollyCorp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JollyPayModel.h"
#import "JollyPayResponse.h"

// 支付方式码
extern NSString* const JPPayMethodCodeSADAD;                // SADAD 支付
extern NSString* const JPPayMethodCodeBANKCARD;             // 银行卡支付
extern NSString* const JPPayMethodCodeBALANCE;              // 余额支付
extern NSString* const JPPayMethodCodeQUICK;                // 一键支付
extern NSString* const JPPayMethodCodePAYPAL;               // PAYPAL 支付
extern NSString* const JPPayMethodCodeCOD;                  // COD 支付
extern NSString* const JPPayMethodCodeAPPLEPAY;             // Apple Pay 支付

extern NSString* const JPPayMethodCodeDOKU_WALLET;          // doku钱包支付（线上支付）
extern NSString* const JPPayMethodCodeDOKU_PL_ATM;          // dokuATM支付（线下支付）
extern NSString* const JPPayMethodCodeDOKU_ALFAMART;        // doku小商超（线下支付）
extern NSString* const JPPayMethodCodeDOKU_INDOMARET;       // doku小商超（线下支付）

typedef void(^JPResultBlock)(JollyPayResponse *response);

@interface JollyPayManager : NSObject

@property (nonatomic, strong, readonly) JollyPayModel *model;
@property (nonatomic, copy) JPResultBlock resultBlock;

@property (nonatomic, assign, readonly) BOOL isHasOwnCheckout;      // 是否集成收银台主页

+ (instancetype)sharedManager;

/**
 *  初始化 JollyPay SDK
 *  @param viewController           当前视图控制器
 *  @param model                    JollyPayModel 初始化参数
 */
- (void)initJollyPayManager:(UIViewController *)viewController withPayModel:(JollyPayModel *)model;

/**
 *  退出 JollyPay SDK
 *  @param viewController           当前视图控制器
 *  @param handleBlock              退出后回调函数
 */
- (void)exitSDK:(UIViewController *)viewController handleBlock:(void (^ __nullable)(void))handleBlock;

/**
 *  退出 JollyPay SDK
 *  @param viewController           当前视图控制器
 *  @param afterDelay               延时时间
 *  @param handleBlock              退出后回调函数
 */
- (void)exitSDK:(UIViewController *)viewController afterDelay:(NSUInteger)afterDelay handleBlock:(void (^ __nullable)(void))handleBlock;

- (void)exitSDKWithReload:(UIViewController *)viewController;
- (void)exitSDKWithResult:(UIViewController *)viewController messages:(NSString *)messages;
- (void)exitSDKWithErrorCode:(NSString *)code viewController:(UIViewController *)viewController messages:(NSString *)messages;

@end


