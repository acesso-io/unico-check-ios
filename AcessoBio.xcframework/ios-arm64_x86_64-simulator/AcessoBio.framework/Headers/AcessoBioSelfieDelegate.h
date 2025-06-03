//
//  AcessoBioSelfieDelegate.h
//  AcessoBio
//
//  Created by Matheus Domingos on 30/07/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef AcessoBioSelfieDelegate_h
#define AcessoBioSelfieDelegate_h
@class SelfieResult;
@class CaptureResult;
@class SuccessResult;

#import "ErrorBio.h"

@protocol AcessoBioSelfieDelegate

- (void)onSuccessSelfie: (SelfieResult *)result;
- (void)onErrorSelfie:(ErrorBio *)errorBio;

@optional
- (void)onSuccess:(SuccessResult *)successResult;

@end
#endif /* iAcessoBioSelfie_h */
