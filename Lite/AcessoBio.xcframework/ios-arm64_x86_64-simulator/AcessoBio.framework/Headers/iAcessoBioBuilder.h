//
//  IAcessoBioBuilder.h
//  AcessoBio
//
//  Created by Matheus Domingos on 29/07/21.
//  Copyright © 2021 Matheus Domingos Acesso. All rights reserved.
//

#ifndef iAcessoBioBuilder_h
#define iAcessoBioBuilder_h
#import "AcessoBioCameraDelegate.h"
#import "AcessoBioThemeDelegate.h"

typedef NS_ENUM(NSInteger, LocaleTypes) {
    EN_US, ES_ES, ES_MX, PT_BR,
};

typedef NS_ENUM(NSInteger, EnvironmentEnum) {
    UAT,
    PROD,
    DEV
};

@protocol iAcessoBioBuilder

- (id<iAcessoBioBuilder>) setTheme: (id<AcessoBioThemeDelegate>)theme;
- (id<iAcessoBioBuilder>) setAutoCapture: (BOOL)isEnabled;
- (id<iAcessoBioBuilder>) setSmartFrame: (BOOL)isEnabled;
- (id<iAcessoBioBuilder>) setTimeoutSession: (double)timeoutInSeconds;
- (id<iAcessoBioBuilder>) setLocale:(LocaleTypes)localeTypes;
- (id<iAcessoBioBuilder>) setEnvironment:(EnvironmentEnum)environment;
- (id<AcessoBioCameraDelegate>) build;

@end
#endif /* IAcessoBioBuilder_h */
