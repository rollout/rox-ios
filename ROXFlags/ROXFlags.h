#import <Foundation/Foundation.h>
#import <ROX/ROX.h>

#define ROXFlags [ROXFlagsClass sharedInstance]

// This class will hold your ROX feature flags
@interface ROXFlagsClass : NSObject

+ (instancetype)sharedInstance;

/*
 * Put your feature flags here: 
 
 e.g. 
 Define here:
     @property (nonatomic, assign) ROXFlag* myFeatureName;
 
 Use:
    [ROXFlags.myFeatureName enabled:^{
        // enabled code here
    }];
 */

@end


