//
//  JollyPayModel.h
//  JollyPaySDK
//
//  Created by Jolly on 2018/7/4.
//  Copyright © 2018年 JollyCorp. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, JollyPaySDKScheme) {
    JollyPaySDKSchemeTest,              // 联调开发环境
    JollyPaySDKSchemeBeta,              // Beta 环境
    JollyPaySDKSchemeProduct,           // 生产环境
    JollyPaySDKSchemeInnerDev,          // 内部 - 开发环境
    JollyPaySDKSchemeInnerQA,           // 内部 - 测试环境
};

@interface JollyPayModel : NSObject

@property (nonatomic, copy) NSString *version;                      // SDK 版本号
@property (nonatomic, copy) NSString *partnerId;                    // 卖家标识
@property (nonatomic, copy) NSString *bizContent;                   // 业务数据窜
@property (nonatomic, copy) NSString *sign;                         // 签名
@property (nonatomic, copy) NSString *signType;                     // 签名类型，默认 RSA
@property (nonatomic, copy) NSString *language;                     // SDK 语言环境，默认 EN
@property (nonatomic, copy) NSString *companyOrPersonal;            // 集成SDK方身份标记位，B-对公 C-对私，默认为C
@property (nonatomic, copy) NSString *highRisk;                     // 是否高风险，Y-是 N-否，默认为N
@property (nonatomic, copy) NSString *bankcardNo;                   // 银行卡号
@property (nonatomic, copy) NSString *bankcardType;                 // 卡类型

@property (nonatomic, assign) JollyPaySDKScheme scheme;             // SDK Scheme

/* JollyPay SDK 网络请求地址 */
@property (nonatomic, copy, readonly) NSString *apiUrl;

- (BOOL)isValid;

@end
