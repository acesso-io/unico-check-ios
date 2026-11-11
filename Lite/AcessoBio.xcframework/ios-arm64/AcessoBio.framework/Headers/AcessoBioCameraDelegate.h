//
//  AcessoBioCamera.h
//  AcessoBio
//
//  Created by Matheus Domingos on 30/07/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef AcessoBioCameraDelegate_h
#define AcessoBioCameraDelegate_h

#import "SelfieCameraDelegate.h"
#import "DocumentCameraDelegate.h"
#import "AcessoBioCameraOpener.h"
@protocol AcessoBioConfigDataSource;

@protocol AcessoBioCameraDelegate

- (void)prepareSelfieCamera: (id <SelfieCameraDelegate>)delegate jsonConfigName: (NSString *)jsonConfigName;
- (void)prepareSelfieCamera: (id <SelfieCameraDelegate>)delegate jsonConfigName: (NSString *)jsonConfigName bundle:(NSBundle *)bundle;
- (void)prepareSelfieCamera: (id <SelfieCameraDelegate>)delegate config: (id <AcessoBioConfigDataSource>)config;

- (void)prepareDocumentCamera: (id <DocumentCameraDelegate>)delegate jsonConfigName: (NSString *)jsonConfigName __attribute__((deprecated("Document capture was discontinued. Fails immediately with error 73905 (ERROR_DOCUMENT_CAMERA) and will be removed in a future version.")));
- (void)prepareDocumentCamera: (id <DocumentCameraDelegate>)delegate jsonConfigName: (NSString *)jsonConfigName bundle:(NSBundle *)bundle __attribute__((deprecated("Document capture was discontinued. Fails immediately with error 73905 (ERROR_DOCUMENT_CAMERA) and will be removed in a future version.")));
- (void)prepareDocumentCamera: (id <DocumentCameraDelegate>)delegate config: (id <AcessoBioConfigDataSource>)config __attribute__((deprecated("Document capture was discontinued. Fails immediately with error 73905 (ERROR_DOCUMENT_CAMERA) and will be removed in a future version.")));

/// Prepares the SDK and opens the selfie capture using only the webAppToken (no sdkKey configured in the app).
/// The sdkKey is resolved by the backend from the token. Results and errors (prepare or capture) arrive on the delegate.
/// This is the only entry point of the capture lite edition (SPM product unicocheck-ios-spm-lite).
- (void)prepareAndOpenSelfieCamera:(id <AcessoBioSelfieDelegate>)delegate
                       webAppToken:(NSString *)webAppToken
    NS_SWIFT_NAME(prepareAndOpenSelfieCamera(_:webAppToken:));

@end

#endif /* AcessoBioCamera_h */
