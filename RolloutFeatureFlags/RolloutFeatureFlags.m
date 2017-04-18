#import <Foundation/Foundation.h>
#import "RolloutFeatureFlags.h"

@implementation RolloutFeatureFlagsClass

+(instancetype)sharedInstance {
    static RolloutFeatureFlagsClass *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[RolloutFeatureFlagsClass alloc] init];
    });
    return sharedInstance;
}

@end
