//
// Created by Eli Gassert on 9/17/15.
// Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SSMatchedCouponImageDetails : NSObject
    @property (nonatomic, readonly) int couponId;
    @property (nonatomic, readonly) int advertiserId;
    @property (nonatomic, readonly) NSString *advertiserName;
    @property (nonatomic, readonly) NSString *headline;
@end