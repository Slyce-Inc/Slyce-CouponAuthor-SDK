//
// Created by Eli Gassert on 9/9/15.
// Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>



@protocol SSCameraViewDelegate <NSObject>
@optional
- (void)didDetectBarcode:(NSString *)barcodeValue;
@end


@interface SSCameraViewController : UIViewController

@property (nonatomic) id delegate;

- (IBAction)flipCamera:(id)sender;

- (IBAction)snap:(id)sender;

- (IBAction)closeScanView:(id)sender;

- (IBAction)cancel:(id)sender;

-(void) resumeCapture;

@end
