//
//  DeviceProfiling.h
//  DeviceProfiling
//
//  Created by Gabriel Martins.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DeviceProfilingEnviromentType) {
    DeviceProfilingEnviromentTypeProd,
    DeviceProfilingEnviromentTypeUAT
};


@interface DeviceProfiling : NSObject

///A String version of SDK
@property (class, nonatomic, assign, readonly) NSString* version;

#pragma mark New Instances
- (instancetype) initWithEnviroment: (DeviceProfilingEnviromentType) env;

#pragma mark Sync calls
///Initiate SDK.
- (NSString*) InitSDK: (NSError**)error NS_SWIFT_NOTHROW;
///Initiate SDK and start data collect (async call).
- (NSString*) InitSDK: (BOOL) collectNow error: (NSError**)error NS_SWIFT_NOTHROW;

///Collect data with SDK and sends to backend.
- (NSString*) Collect: (NSError**)error NS_SWIFT_NOTHROW;
///Collect data with SDK and sends to backend waiting until all events done.
- (NSString*) Collect: (BOOL) waitTermination error: (NSError**)error NS_SWIFT_NOTHROW;

#pragma mark Async calls
///Initiate SDK.
- (void) InitSDKAsync: (void (^)(NSString*, NSError*)) completionHandler NS_SWIFT_DISABLE_ASYNC;
///Initiate SDK and collect (async call).
- (void) InitSDKAsync: (BOOL) collectNow completionHandler:(void (^)(NSString*, NSError*)) completionHandler NS_SWIFT_DISABLE_ASYNC;

///Collect data with SDK and sends to backend.
- (void) CollectAsync: (void (^)(NSString*, NSError*)) completionHandler NS_SWIFT_DISABLE_ASYNC;
///Collect data with SDK and sends to backend waiting until all events done.
- (void) CollectAsync: (BOOL) waitTermination completionHandler:(void (^)(NSString*, NSError*)) completionHandler NS_SWIFT_DISABLE_ASYNC;

@end
