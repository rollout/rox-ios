//
//  ROXConfiguration.h
//  MoMe
//
//  Created by eyal keren on 3/9/14.
//  Copyright (c) 2014 eyal keren. All rights reserved.
//

#import <Foundation/Foundation.h>
@protocol ROXNetwork;
@protocol ROXDeviceProperties;
@protocol ROXErrors;

@class ROXFeatureFlagId;
@class ROXExperimentModel;

@interface ROXConfiguration : NSObject

@property (atomic) NSDictionary *conf;

- (instancetype)initWithDeviceProperties:(id <ROXDeviceProperties>)deviceProperties errors:(id<ROXErrors>)errors;
@end

