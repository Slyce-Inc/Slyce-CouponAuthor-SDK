//
//  SSCoupon.h
//  CouponAuthorSDK
//
//  Created by Jacob Ginsparg on 6/29/15.
//  Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSAdvertiser.h"

/**
 This model contains all the information for a Coupon Author coupon
 */
@interface SSCoupon : NSObject
    /**
     Unique identifier for this coupon
     */
    @property (nonatomic, readonly) NSInteger couponId;
    /**
     */
    @property (nonatomic, readonly) NSString *headline;
    /**
     */
    @property (nonatomic, readonly) NSString *couponDescription;
    /**
     Array of SSCouponTiers
     */
    @property (nonatomic, readonly) NSArray	 *tiers;
    /**
     */
    @property (nonatomic, readonly) NSDate	 *startDate;
    /**
     */
    @property (nonatomic, readonly) NSDate	 *expirationDate;
    /**
     */
    @property (nonatomic, readonly) NSString *rules;
    /**
     */
    @property (nonatomic, readonly) NSString *terms;

    /**
    */
    @property (nonatomic, readonly) NSURL *passbookUrl;


    /**
     Dictionary of NSURLs for the product images, with keys "original" and "thumb"
     */
    @property (nonatomic, readonly) NSDictionary	 *productImages;
    /**
     Dictionary of NSURLs for the coupon images, with keys "original" and "thumb"
     */
    @property (nonatomic, readonly) NSDictionary  *couponImages;

    /**
     */
    @property (nonatomic, readonly) NSURL *redeemUrl;

    /**
     */
    @property (nonatomic, readonly) BOOL imageRedemptionMobile;

    /**
     */
    @property (nonatomic, readonly) BOOL imageRedemptionDesktop;

    /**
     */
    @property (nonatomic, readonly) BOOL singleUse;

    @property (nonatomic, readonly) SSAdvertiser *advertiser;


/*!
 *  @brief trackCouponImpression - Allows you to track impressions of relevant coupons back to the Coupon Author system.
 */
-(void)trackCouponImpression;


@end
