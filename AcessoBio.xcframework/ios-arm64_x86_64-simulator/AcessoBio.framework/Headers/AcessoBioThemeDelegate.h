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
- (id) getColorBackgroundBottomDocument;
- (id) getColorTextBottomDocument;
- (id) getColorSilhouetteSuccess;
- (id) getColorSilhouetteError;
- (id) getColorSilhouetteNeutral;

@optional

- (id) getProgressBarColor;
- (id) getCancelButtonIconColor;

@end

#endif /* iAcessoBioTheme_h */
