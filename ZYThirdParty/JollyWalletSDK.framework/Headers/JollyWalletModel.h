//
//  JollyPayModel.h
//  JollyPaySDK
//
//  Created by Jolly on 2018/7/4.
//  Copyright © 2018年 JollyCorp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JollyWalletModel : NSObject

@property (nonatomic, copy) NSString *version;                      // SDK 版本号
@property (nonatomic, copy) NSString *partnerId;                    // 商户 ID
@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *bizContent;                   // 业务数据窜
@property (nonatomic, copy) NSString *sign;                         // 签名
@property (nonatomic, copy) NSString *signType;                     // 签名类型，默认 RSA
@property (nonatomic, copy) NSString *language;                     // SDK 语言环境，默认 EN
@property (nonatomic, copy) NSString *currency;                     // SDK 当前业务的币种
@property (nonatomic, copy) NSString *companyOrPersonal;            // 集成SDK方身份标记位，B-对公 C-对私，默认为C


- (BOOL)isValid;

@end
