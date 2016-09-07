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

- (void)didReceiveBucket:(SSBucket *)bucket;

- (void)didReceiveBucketById:(SSBucket *)bucket;

- (void)didReceiveCouponById:(SSCoupon *)coupon;

- (void)didReceiveCouponByBarcodeValue:(SSCoupon *)coupon;

- (void)didFailWithError:(NSError *)error;

@end

#endif /* CouponAuthorDelegate_h */
