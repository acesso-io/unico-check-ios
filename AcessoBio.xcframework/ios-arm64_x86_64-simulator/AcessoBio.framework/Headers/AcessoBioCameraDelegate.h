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

@end

#endif /* AcessoBioCamera_h */
