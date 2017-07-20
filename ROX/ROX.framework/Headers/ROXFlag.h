//
//  ROXFlag.h
//  ROX
//
//  Created by Elad Cohen on 3/19/17.
//  Copyright © 2017 DeDoCo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ROXFlag : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSString* name;

- (void)enabled:(void (^)(void))codeBlock;
- (void)disabled:(void (^)(void))codeBlock;
- (void)enabled:(void (^)(void))enabledCodeBlock disabled:(void (^)(void))disabledCodeBlock;
- (void)forceValue:(BOOL)value;

@end
