//
//  CouponAuthorSDK.h
//  CouponAuthorSDK
//
//  Created by Jacob Ginsparg on 7/8/15.
//  Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SSBucket.h"
#import "SSCoupon.h"
#import "SSCouponTier.h"
#import "SSAdvertiser.h"
#import "SSMatchedCouponImageDetails.h"
#import "SSCameraViewController.h"
#import "CouponAuthorDelegate.h"
#import <CouponAuthorSDK/CouponAuthorDelegate.h>

/**
 This is the main class through which you can communicate with the Coupon Author SDK.
 */
@interface CouponAuthorSDK : NSObject


/*!
 *  @method
 *
 *  @brief Initializes and returns a singleton instance of the SDK.
 *
 *  @return a shared CouponAuthorSDK instance.
 *
 */

+ (id)sharedInstance;


/*!
 *  @property
 *  @brief The CouponAuthor delegate will be notified of the results.
 */
@property (nonatomic, weak) id<CouponAuthorDelegate> delegate;


/**
 You must call initWithApiKey before you can use the API.

 Add a call to this method in your **didFinishLaunchingWithOptions:** method of your AppDelegate.
 
 @param apiKey The api key. 

 */
- (BOOL) initWithApiKey:(NSString *)apiKey;


/**
 Returns bucket of coupons for a given bucket Id
 
 @param bucketId The bucket id

 */
-(void)getBucketWithId:(int)bucketId;

/**
 Returns coupon for a given coupon Id
 
 @param couponId The coupon id
 
 */
-(void)getCouponWithId:(int)couponId;


/**
 Returns coupons for a given user email
 
 @param email The user email
 
 */
-(void)getCouponsWithEmail:(NSString *)email;


/**
 Returns coupon for a given barcode value and user email
 
 @param barcodeValue The barcode value
 @param email The user email (optional).

 */
-(void)getCouponWithBarcodeValue:(NSString *)barcodeValue andEmail:(NSString *)email;

@end
