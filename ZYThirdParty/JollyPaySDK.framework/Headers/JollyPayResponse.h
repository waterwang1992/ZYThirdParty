//
//  JollyPayResponse.h
//  JollyPaySDK
//
//  Created by bach on 2018/7/18.
//  Copyright © 2018年 JollyCorp. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, JPResultCode) {
    JPResultCodeSuccess,                    // 支付结果 - 支付成功
    JPResultCodePending,                    // 支付结果 - 支付处理中
    JPResultCodeFailed,                     // 支付结果 - 支付失败
    JPResultCodeRefreshCouponInfo,          // 刷新红包
};

@interface JollyPayResponse : NSObject

@property (nonatomic, assign) JPResultCode code;
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSString *orderNo;
@property (nonatomic, copy) NSString *tradeNo;

+ (instancetype)packWithMessages:(NSString *)msg;

+ (instancetype)packWithErrorCode:(NSString *)code messages:(NSString *)msg;

@end
