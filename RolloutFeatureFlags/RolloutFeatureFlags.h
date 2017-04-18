
#import <Foundation/Foundation.h>
#import <Rollout/ROX.h>

#define RolloutFeatureFlags [RolloutFeatureFlagsClass sharedInstance]

// This class will hold your ROX's feature flags
@interface RolloutFeatureFlagsClass : NSObject

+(instancetype)sharedInstance;

/*
 * Put your feature flags here: 
 
 e.g. 
 Define here:
     @property (nonatomic, assign) ROXFlag* myFeatureName;
 
 Use:
    [RolloutFeatureFlags.myFeatureName enabled:^{
        // enabled code here
    }];
 */

@end


