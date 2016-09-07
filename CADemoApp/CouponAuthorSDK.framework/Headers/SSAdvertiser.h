//
// Created by Eli Gassert on 9/17/15.
// Copyright (c) 2015 Slyce, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SSAdvertiser : NSObject
    @property (nonatomic, readonly) int advertiserId;
    @property (nonatomic, readonly) NSString *name;
    @property (nonatomic, readonly) NSURL *banner;
    @property (nonatomic, readonly) NSURL *squareLogo;
@end