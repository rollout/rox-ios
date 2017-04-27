#import <Foundation/Foundation.h>
#import "ROXFlags.h"

@implementation ROXFlagsClass

+ (instancetype)sharedInstance {
    static ROXFlagsClass *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[ROXFlagsClass alloc] init];
    });
    return sharedInstance;
}

@end
