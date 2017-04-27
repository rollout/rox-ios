//
//  ROX SDK version 0.4.1, Build 376
//
//  Copyright (c) 2014 ROX.io. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "ROXOptions.h"
#import "ROXFlag.h"
#import "ROXTargetGroup.h"
#import "ROXExperiment.h"

@interface ROX : NSObject

+(void)setupWithKey:(NSString *)roxKey;
+(void)setupWithKey:(NSString *)roxKey options:(ROXOptions *)options;
+(BOOL)roxDisabled;

+ (UIViewController*)featuresViewController;
+ (BOOL)isTestDevice;

+(void) setUserStringProperty:(NSString*)value forKey:(NSString*)key;
+(void) setUserComputedStringProperty:(NSString* (^)())block forKey:(NSString*)key;

+(void) setUserBooleanProperty:(BOOL)value forKey:(NSString*)key;
+(void) setUserComputedBooleanProperty:(BOOL (^)())block forKey:(NSString*)key;

+(void) setUserIntProperty:(int)value forKey:(NSString*)key;
+(void) setUserComputedIntProperty:(int (^)())block forKey:(NSString*)key;

+(void) setUserDoubleProperty:(double)value forKey:(NSString*)key;
+(void) setUserComputedDoubleProperty:(double (^)())block forKey:(NSString*)key;

+(BOOL) isInTargetGroup:(NSString*)name;
+(NSArray<ROXTargetGroup *>*) targetGroups;

+(NSArray<ROXExperiment *>*) experiments;

@end

