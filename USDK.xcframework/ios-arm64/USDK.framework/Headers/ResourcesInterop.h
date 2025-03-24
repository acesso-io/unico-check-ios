//
//  ResourcesInterop.h
//
//  Created by Ilya Postanogov on 02.05.2024.
//  Copyright © 2024 Oz Forensics. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <USDK/USDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface ResourcesInterop : NSObject

+ (BOOL)sdkResourcesModuleAvailable;
+ (BOOL)sdkOnDeviceResourcesModuleAvailable;

- (instancetype)init;
- (NSBundle *)sdkResourceBundle;
- (NSBundle *)sdkOnDeviceResourceBundle;

@end

NS_ASSUME_NONNULL_END

