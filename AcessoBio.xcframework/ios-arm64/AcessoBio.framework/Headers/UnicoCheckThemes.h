//
//  UnicoCheckThemes.h
//  AcessoBio
//
//  Created by Beatriz Monteiro Mendes de Paula on 24/11/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//



@import Foundation;
@import UIKit;
#import "AcessoBioThemeDelegate.h"
@class UnicoCheck;
@protocol UnicoCheckThemesDelegate;

@interface UnicoCheckThemes : NSObject{
    UnicoCheck* unicoCheckTheme;
}

-(id)initWithAcessoBioTheme:(id<AcessoBioThemeDelegate>)theme delegate:(id<UnicoCheckThemesDelegate>)delegate;

@property (nonatomic, weak) id <UnicoCheckThemesDelegate> delegate;

@property (nonatomic, strong) UIColor *colorSilhoutteNeutral;
@property (nonatomic, strong) UIColor *colorSilhoutteSuccess;
@property (nonatomic, strong) UIColor *colorSilhoutteError;

@property (nonatomic, strong) UIColor *colorBackground;

@property (nonatomic, strong) UIColor *colorBackgroundBoxStatus;
@property (nonatomic, strong) UIColor *colorTextBoxStatus;

@property (nonatomic, strong) UIColor *colorBackgroundPopupError;
@property (nonatomic, strong) UIColor *colorTextPopupError;
@property (nonatomic, strong) UIColor *colorBackgroundButtonPopupError;
@property (nonatomic, strong) UIColor *colorTextButtonPopupError;

@property (nonatomic, strong) UIColor *colorBottomDocumentBackground;
@property (nonatomic, strong) UIColor *colorBottomDocumentText;

@property (nonatomic, strong) UIColor *colorButtonIcon;
@property (nonatomic, strong) UIColor *colorButtonBackground;

@property (nonatomic, strong) UIImage *imageIconPopupError;

@end




