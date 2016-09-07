//
//  SSBucket.h
//  CouponAuthorSDK
//
//  Created by Jacob Ginsparg on 7/9/15.
//  Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSAdvertiser.h"

/**
 A bucket is a collection of SSCoupons
 */
@interface SSBucket : NSObject

@property (nonatomic, readonly) int bucketId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *utmMedium;
@property (nonatomic, readonly) NSString *utmSource;

@property (nonatomic, readonly) SSAdvertiser *advertiser;

/**
 Array of SSCoupons
 */
@property (nonatomic, readonly) NSArray  *coupons;

@end
