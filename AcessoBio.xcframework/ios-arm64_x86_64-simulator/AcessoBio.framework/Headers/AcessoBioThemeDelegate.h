//
//  iAcessoBioTheme.h
//  AcessoBio
//
//  Created by Matheus Domingos on 30/07/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef AcessoBioThemeDelegate_h
#define AcessoBioThemeDelegate_h

@protocol AcessoBioThemeDelegate

- (id) getColorBackground;
- (id) getColorBoxMessage;
- (id) getColorTextMessage;
- (id) getColorBackgroundTakePictureButton;
- (id) getColorIconTakePictureButton;
- (id) getColorSilhouetteSuccess;
- (id) getColorSilhouetteError;
- (id) getColorSilhouetteNeutral;

@optional

- (id) getProgressBarColor;
- (id) getCancelButtonIconColor;

// Document capture was discontinued: kept optional so existing implementations keep compiling.
- (id) getColorBackgroundBottomDocument __attribute__((deprecated("Document capture was discontinued. This colour is no longer read by the SDK and will be removed in a future version.")));
- (id) getColorTextBottomDocument __attribute__((deprecated("Document capture was discontinued. This colour is no longer read by the SDK and will be removed in a future version.")));

@end

#endif /* iAcessoBioTheme_h */
