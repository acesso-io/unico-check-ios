//
//  AcessoBioDelegate.h
//  AcessoBio
//
//  Created by Matheus Domingos on 29/07/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef AcessoBioManagerDelegate_h
#define AcessoBioManagerDelegate_h
#import "ErrorBio.h"

/**
 A protocol for delegates of the AcessoBioManager.

 This protocol defines methods that the delegate should implement to receive notifications about different events during AcessoBioManager operations.
 */
@protocol AcessoBioManagerDelegate

/**
 Called when an error occurs during the AcessoBioManager operation.

 @param error An instance of ErrorBio containing information about the error.
 */
- (void)onErrorAcessoBioManager: (ErrorBio *)error;

@required
/**
 Called when the user manually closes the camera.

 This method is required, and implementing classes can use it to handle events when the user manually closes the camera during the AcessoBioManager operation.
 */
- (void)onUserClosedCameraManually;

/**
 Called when the system closes the camera due to a timeout during the session.

 This method is required, and implementing classes can use it to handle events when the system automatically closes the camera due to a timeout during the AcessoBioManager session.
 */
- (void)onSystemClosedCameraTimeoutSession;

/**
 Called when the system changes the type of camera timeout during face inference.

 This method is required, and implementing classes can use it to handle events when the system changes the type of camera timeout during face inference in the AcessoBioManager operation.
 */
- (void)onSystemChangedTypeCameraTimeoutFaceInference;


@end
#endif /* AcessoBioDelegate_h */
