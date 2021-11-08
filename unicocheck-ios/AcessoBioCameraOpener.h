//
//  AcessoBioSelfie.h
//  AcessoBio
//
//  Created by Matheus Domingos on 30/07/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

@import Foundation;
#import "AcessoBioCameraOpenerDelegate.h"
@class UnicoCheck;
NS_ASSUME_NONNULL_BEGIN

@interface AcessoBioCameraOpener : NSObject <AcessoBioCameraOpenerDelegate> {
    UnicoCheck *core;
}

- (id)initWithUnicoCheck:(UnicoCheck *)unicoCheck;

@end

NS_ASSUME_NONNULL_END
