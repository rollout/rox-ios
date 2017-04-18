//
//  ROXErrors.h
//  ROX
//
//  Created by Sergey Ilyevsky on 9/8/14.
//  Copyright (c) 2014 DeDoCo. All rights reserved.
//

#import <Foundation/Foundation.h>


#ifdef ROXErrors_importingFromDotM
#define _RE(value) NSString *const ROXErrors_##value = @#value;
#else
#define _RE(value) FOUNDATION_EXPORT NSString *const ROXErrors_##value;
#endif

_RE(ROXClient_appKeyMismatch)
_RE(ROXClient_caughtExceptionInPostRecognition)

_RE(ROX_caughtExceptionDuringInitialization)
_RE(ROXSharedInstances_caughtExceptionDuringInitialization)

_RE(ROXNetwork_404)
_RE(ROXNetwork_unknownError)
_RE(ROXNetwork_timeout)
_RE(ROXNetwork_jsonParsing)
_RE(ROXNetwork_emptyResult)
_RE(ROXNetwork_exceptionInsideAsyncNetworkRequest)
_RE(ROXNetwork_signatureWasNotVerified)

_RE(ROXMethodSwizzler_swizzlingFailed)

_RE(ROXDynamicMethodCaller_unsupported)
_RE(ROXDynamicMethodCaller_interfaceCreationFailed)
_RE(ROXDynamicMethodCaller_unexpectedEncoding)

_RE(ROXJSBoxFactory_couldNotCreateJSBoxFromEncodedValue)

_RE(ROXSwiftTweakCreator_couldNotGetSelector)

_RE(ROXSwiftFFITypeFactory_couldNotResolveFFIType)
_RE(ROXSwiftFFIPrimitiveType_couldNotReplaceType)


@protocol ROXDeviceProperties;

#ifdef DEBUG
FOUNDATION_EXPORT BOOL ROXErrors_doNotThrowException;
#endif

@protocol ROXErrors
-(void)reportError:(NSString*)error details:(NSDictionary*)details;
-(void)generateError:(NSString*)error details:(NSDictionary*)details;
-(void)reportException:(id)exception asError:(NSString*)error;
-(BOOL)assert:(BOOL)condition error:(NSString*)error details:(NSDictionary*)details;
@end

@interface ROXErrors : NSObject<ROXErrors>

- (instancetype)initWithDeviceProperties:(id <ROXDeviceProperties>)deviceProperties;

@property (nonatomic, readonly) NSString *errorsURL;

@end

#undef _RE

