//
//  CameraBio.h
//  CaptureAcesso
//
//  Created by Matheus Domingos on 13/05/19.
//  Created by unico idtech. All rights reserved.
//
@import Foundation;
@import UIKit;
#import "UnicoCheck.h"
#import "AcessoBioThemeDelegate.h"

@interface AcessoBioManager : NSObject <iAcessoBioBuilder> {
    UnicoCheck *core;
}

- (id)initWithViewController:(id)view;
- (id)initWithViewController :(id)view delegate:(id)delegate;


@end

