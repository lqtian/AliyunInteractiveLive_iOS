//
//  AlivcKey.h
//  AlivcAuth
//
//  Created by OjisanC on 2018/5/16.
//  Copyright © 2018年 Aliyun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AlivcKey : NSObject

/**
 Access Key
 */
@property (nonatomic, copy) NSString *accessKey;

/**
 Secret Key
 */
@property (nonatomic, copy) NSString *secretKey;

@end
