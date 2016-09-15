//
//  CouponAuthorDelegate.h
//  CouponAuthorSDK
//
//  Created by HADI MRIH on 04/09/2016.
//  Copyright © 2016 Slyce, Inc. All rights reserved.
//

#ifndef CouponAuthorDelegate_h
#define CouponAuthorDelegate_h


@protocol CouponAuthorDelegate <NSObject>

@optional


/*!
 *  @brief Informs the CouponAuthorDelegate that the bucket has been retrieved
 *
 *  @param bucket `SSBucket`.
 */

- (void)didReceiveBucketById:(SSBucket *)bucket;

/*!
 *  @brief Informs the CouponAuthorDelegate that the coupon has been retrieved
 *
 *  @param coupon `SSCoupon`.
 */

- (void)didReceiveCouponById:(SSCoupon *)coupon;

/*!
 *  @brief Informs the CouponAuthorDelegate that the coupon has been retrieved
 *
 *  @param coupon `SSCoupon`.
 */

- (void)didReceiveCouponByBarcodeValue:(SSCoupon *)coupon;

/*!
 *  @brief Informs the CouponAuthorDelegate that an error has occured while trying to complete the request.
 *
 *  @param error the encountered matching error.
 *
 */

- (void)didFailWithError:(NSError *)error;

@end

#endif /* CouponAuthorDelegate_h */
