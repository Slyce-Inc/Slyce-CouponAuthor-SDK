//
//  ViewController.m
//  CADemoApp
//
//  Created by HADI MRIH on 06/09/2016.
//  Copyright © 2016 Slyce. All rights reserved.
//

#import "ViewController.h"
#import <CouponAuthorSDK/CouponAuthorSDK.h>

@interface ViewController () <CouponAuthorDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    CouponAuthorSDK *CA = [CouponAuthorSDK sharedInstance];
    CA.delegate = self;
    
    [CA getBucketWithId:279]; // Your Bucket Id
    
    [CA getCouponWithId:1658];
    
    [CA getCouponsWithEmail:@"user@gmail.com"];
    
    [CA getCouponWithBarcodeValue:@"1110002073014" andEmail:nil];
    
    [CA getCouponWithBarcodeValue:@"1110002073014" andEmail:@"user@gmail.com"];
    

    
    // Do any additional setup after loading the view, typically from a nib.
}

#pragma mark -
#pragma mark CouponAuthorDelegate

-(void) didReceiveBucketById:(SSBucket *)bucket
{
    NSLog(@"didReceiveBucketById bucket %@",bucket);
}

-(void) didReceiveCouponById:(SSCoupon *)coupon
{
    NSLog(@"didReceiveCouponById coupon %@",coupon);
}

-(void) didReceiveCouponByBarcodeValue:(SSCoupon *)coupon
{
    NSLog(@"didReceiveCouponByBarcodeValue coupon %@",coupon);
}

-(void) didReceiveCouponByEmail:(NSArray *)coupons
{
    NSLog(@"didReceiveCouponByEmail coupons %@",coupons);
}

-(void) didFailWithError:(NSError *)error
{
    NSLog(@"error %@",error);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
