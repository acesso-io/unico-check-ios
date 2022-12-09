//
//  DeviceInfo.h
//  DeviceInfo
//
//  Created by Gabriel Martins on 24/09/21.
//  Copyright (c) 2021 Makrosystems. All rights reserved.


#import <Foundation/Foundation.h>

/* ********************************************************************** */
/*                           System Deteciton                             */
/* ********************************************************************** */

/**
 Returns whether was detected evidence of Jailbreak in the device
 
 @param error Object indicating failure during detection process
 
 @return Boolean indicating whether Jailbreak was found
 */
BOOL HavenInfoJailbreakDetected(NSError** error);

/**
 Returns whether was detected evidence of application being run on Simulator
 
 @param error Object indicating failure during detection process
 
 @return Boolean indicating whether application is runnig on Simulator
 */
BOOL HavenInfoSimulatorDetected(NSError** error);

/**
 Returns whether was detected evidence of debugger attached to the application
 
 @param error Object indicating failure during detection process
 
 @return Boolean indicating whether debugger is attached to the application
 */
BOOL HavenInfoDebuggerDetected(NSError** error);
