//
//  ROX SDK version 0.0.1, Build 359
//
//  Copyright (c) 2014 ROX.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ROXOptions.h"
#import "ROXFlag.h"

@interface ROX : NSObject

+(void)setupWithKey:(NSString *)roxKey;
+(void)setupWithKey:(NSString *)roxKey options:(ROXOptions *)options;
+(BOOL)roxDisabled;
+(void)setRoxDisabled:(BOOL)value;

+(void)setupWithKey:(NSString *)roxKey developmentDevice: (BOOL)developmentDevice __attribute__ ((deprecated));
+(void)setupWithKey:(NSString *)roxKey developmentDevice:(BOOL)developmentDevice options:(ROXOptions*)options __attribute__ ((deprecated));

+(void) setupWithDebug: (BOOL) debug options:(ROXOptions*)options __attribute__ ((deprecated));
+(void) setupWithDebug: (BOOL) debug __attribute__ ((deprecated));

+ (UIViewController*)featuresViewController;
+ (BOOL)isTestDevice;

@end

