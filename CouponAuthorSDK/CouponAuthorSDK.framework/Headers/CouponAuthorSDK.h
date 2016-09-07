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

// FYI this doesn't show up in the appledoc TODO

/** @enum SSRedemptionType */
enum SSRedemptionType {
    /** Redemption via the SnipSnap app */
    SSSnipSnapRedemption = 0,
    /** Redemption via Apple Wallet (fka Passbook) */
    SSPassbookRedemption = 1,
    /** Redemption via Google Wallet */
    SSGoogleWalletRedemption = 2,
    /** Redemption via barcode scan on device */
    SSBarcodeRedemption = 3
};
typedef NSInteger SSRedemptionType;



/*!
 *  @method
 *
 *  @brief Initializes and returns a singleton instance of the SDK.
 *
 *  @return a shared SFSlyce instance.
 *
 */

+ (id)sharedInstance;


/*!
 *  @property
 *  @brief The CouponAuthor delegate that will be notified of the results.
 */
@property (nonatomic, weak) id<CouponAuthorDelegate> delegate;


/**
 You must call initWithApiKey before you can use the API.

 Add a call to this method in your **didFinishLaunchingWithOptions:** method of your AppDelegate.
 */
- (BOOL) initWithApiKey:(NSString *)apiKey;

/**
 Returns the a bucket of coupons for a given source and medium

 @param source The source for these coupons
 @param medium The medium for these coupons
 */
-(void)getBucketWithSource:(NSString *)source andMedium:(NSString *)medium;

-(void)getBucketWithId:(int)bucketId;

-(void)getCouponWithId:(int)couponId;

-(void)getCouponWithBarcodeValue:(NSString *)barcodeValue;


/**
 Method to call when a user sees the coupon with the given Id

 This event will be tracked under the given source and medium
 
 @param couponId the coupon id that was shown. This should come from an SSCoupon instance.
 @param source The source to track this event for
 @param medium The medium to track this event for
 */
//+(void)trackImpressionForCouponWithId:(NSInteger)couponId Source:(NSString *)source Medium:(NSString *)medium;

/**
 Method to call to track impressions for an entire bucket

 @param source The source to track these events for
 @param medium The medium to track these events for
 */
//+(void)trackImpressionsInBucketWithSource:(NSString *)source andMedium:(NSString *)medium;

/**
 Method to call when a user taps the coupon with the given Id

 @param couponId the coupon id that was viewed. This should come from an SSCoupon instance.
 @param source The source to track this event for
 @param medium The medium to track this event for
 */
//+(void)trackViewForCouponWithId:(NSInteger)couponId Source:(NSString *)source Medium:(NSString *)medium;

/**
 Method to call when a user snips a coupon to SnipSnap, Apple Wallet, or Google Wallet

 @param couponId the coupon id that was viewed. This should come from an SSCoupon instance.
 @param redemptionType the type of redemption completed by the user.
 @param source The source to track this event for.
 @param medium The medium to track this event for.
 */
//+(void)trackRedemptionForCouponWithId:(NSInteger)couponId ofType:(SSRedemptionType)redemptionType Source:(NSString *)source Medium:(NSString *)medium;


@end
