//
//  UnicoCheckMapCallbacks.h
//  AcessoBio
//
//  Created by Matheus Domingos on 03/12/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#import <Foundation/Foundation.h>
@class UnicoCheck;
@class ErrorBio;

NS_ASSUME_NONNULL_BEGIN

@interface UnicoCheckMapCallbacks : NSObject {
    UnicoCheck *unicoCheck;
}

- (id)initWithUnicoCheck:(UnicoCheck *)pUnicoCheck;
- (void)onError: (ErrorBio *)errorBio;

@end

NS_ASSUME_NONNULL_END
