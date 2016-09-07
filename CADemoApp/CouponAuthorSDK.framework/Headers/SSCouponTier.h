//
//  SSCouponTier.h
//  CouponAuthorSDK
//
//  Created by Jacob Ginsparg on 7/10/15.
//  Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 This represents a discount tier for an SSCoupon
 */
@interface SSCouponTier : NSObject

    /**
    */
    @property (nonatomic, readonly) NSString *faceValue;

    /**
    */
    @property (nonatomic, readonly) NSString *promoCode;

    /**
    */
    @property (nonatomic, readonly) NSString *onlinePromoCode;

    /**
    */
    @property (nonatomic, readonly) NSString *onlineRedemptionInstructions;


    /**
    */
    @property (nonatomic, readonly) NSURL 	 *onlineStoreUrl;

    /**
    */
    @property (nonatomic, readonly) NSURL 	 *barcodeImage;

   /**
    */
    @property (nonatomic, readonly) NSString *barcodeValue;

@end
