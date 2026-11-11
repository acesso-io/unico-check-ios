//
//  DocumentCameraDelegate.h
//  AcessoBio
//
//  Created by Matheus Domingos on 02/08/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef DocumentCameraDelegate_h
#define DocumentCameraDelegate_h

__attribute__((deprecated("Document capture was discontinued. Fails immediately with error 73905 (ERROR_DOCUMENT_CAMERA) and will be removed in a future version.")))
@protocol DocumentCameraDelegate

- (void)onCameraReadyDocument: (id <AcessoBioCameraOpenerDelegate>)cameraOpener;
- (void)onCameraFailedDocument:(ErrorPrepare *)message;


@end
#endif /* DocumentCameraDelegate_h */
