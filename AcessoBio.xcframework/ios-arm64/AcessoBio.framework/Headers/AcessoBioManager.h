//
//  CameraBio.h
//  CaptureAcesso
//
//  Created by Matheus Domingos on 13/05/19.
//  Created by unico idtech. All rights reserved.
//
@import Foundation;
@import UIKit;
@class UnicoCheck;
@class UnicoCheckThemes;
@protocol Factories;

#import "iAcessoBioBuilder.h"
#import "AcessoBioThemeDelegate.h"
#import "AcessoBioCameraImpl.h"

@interface AcessoBioManager : NSObject <iAcessoBioBuilder> {
    UnicoCheck *core;
    UnicoCheckThemes *unicoTheme;
}

- (id)initWithViewController:(id)view;
- (id)initWithViewController:(id)view delegate:(id)delegate;

/**
 Release resources related to <em>liveness for selfie camera</em>.
 Initialize <em>must</em>  be called again by the application before invoking any SDK operations.
 This function may be called with caution.
 */
- (void)deinitializeLiveness;

@end

