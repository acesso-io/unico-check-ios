//
//  CameraBio.h
//  CaptureAcesso
//
//  Created by Matheus Domingos on 13/05/19.
//  Created by unico idtech. All rights reserved.
//
@import Foundation;
@import UIKit;

#if __has_include(<Sentry/Sentry.h>)
#import <Sentry/Sentry.h>
#endif

#if __has_include(<FaceTecSDK/FaceTecSDK.h>)
#import <FaceTecSDK/FaceTecSDK.h>
#endif

#if __has_include(<FaceTecSDK/FaceTecPublicApi.h>)
#import <FaceTecSDK/FaceTecPublicApi.h>
#endif

#import "ErrorBio.h"
#import "iAcessoBioBuilder.h"
#import "AcessoBioManagerDelegate.h"
#import "AcessoBioSelfieDelegate.h"
#import "AcessoBioDocumentDelegate.h"
#import "UnicoCheckThemesDelegate.h"
#import "UnicoCheckMapCallbacks.h"
#import "AcessoBioThemeDelegate.h"

@class UnicoSetup;
@class UnicoConfigDelegate;
@class UnicoSetupData;
@class SDKTokenResponseDTO;
@class UnicoFacetec;
@class UnicoJsonLoad;
@class UnicoConfigDataSourceManager;
@class CameraFaceView;
@class DocumentInsertView;
@class UnicoCheckThemes;

typedef NS_ENUM(NSInteger, LanguageOrigin) {
    Native,
    Flutter,
    ReactNative
};

@interface UnicoCheck : NSObject <UnicoCheckThemesDelegate> {

    UIViewController *viewController;
    
    CameraFaceView *cView;
    DocumentInsertView *dView;
    
    NSString *versionRelease;
    
    BOOL isFacematchProcess;
    
    NSString * base64Facematch;
    
    UIImage *imageIconPopupError;
    
    double defaultTimeoutSession;
    
    BOOL hasImplementationError;
    
    BOOL facetecHasIncluded;
#if __has_include(<FaceTecSDK/FaceTecSDK.h>)
    id<FaceTecSessionResult> _Nonnull latestSessionResult;
#endif
    
    UnicoSetupData * unicoSetupData;
    SDKTokenResponseDTO * sdkTokenResponse;
    
    UnicoFacetec *unicoFacetec;
    BOOL isFacetecFlow;
    
    UnicoCheckMapCallbacks *mapCallbacks;
    
    void (^completionHandlerSetupConfig)(ErrorBio * _Nullable error);
    
}
#pragma mark - Protocos (interface in Java/Kotlin)
@property (nonatomic, weak) id <AcessoBioManagerDelegate> _Nullable acessoBioDelegate;
@property (nonatomic, weak) id <AcessoBioSelfieDelegate> _Nullable selfieDelegate;
@property (nonatomic, weak) id <AcessoBioDocumentDelegate> _Nullable documentDelegate;

#pragma mark - Instance
- (id _Nullable )initWithViewController:(id _Nullable )view delegates:(id<AcessoBioCameraDelegate>_Nullable)delegate;

#pragma mark - Language Origin

- (void)setLanguageOrigin: (LanguageOrigin)origin release: (NSString*_Nullable)release;
@property (readonly) LanguageOrigin language;

#pragma mark - Custom

@property (nonatomic, weak) id <AcessoBioThemeDelegate> _Nullable theme;

- (void)setAutoCapture:(BOOL)isEnabled;
- (void)setSmartFrame:(BOOL)isEnabled;

@property (readonly) BOOL isAutoCapture;
@property (readonly) BOOL isSmartCamera;

#pragma mark - Config

- (void)setupConfigToOpenCamera:(NSString *_Nullable)jsonConfigName bundle: (NSBundle *_Nullable)bundle completion:(void(^_Nullable)(ErrorBio * _Nullable error))completionHandler;
- (void)setupConfigToOpenCamera:(AcessoBioConfigDataSource *_Nullable)configDataSource completion:(void(^_Nullable)(ErrorBio * _Nullable error))completionHandler;

#pragma mark - CloseCamera Manually

- (void)userClosedCameraManually;

#pragma mark - Timeouts

@property (readonly) double secondsTimeoutSession;
- (void)setTimeoutSession: (double)seconds;

- (void)systemClosedCameraTimeoutSession;
- (void)systemClosedCameraTimeoutFaceInference;

#pragma mark - Camera

#pragma mark Selfie
- (void)openCameraSelfie:(id<AcessoBioSelfieDelegate>_Nullable)delegate;
#pragma mark Documents
- (void)openCameraDocuments : (DocumentEnums) documentType delegate:(id<AcessoBioDocumentDelegate>_Nullable)delegate;

#pragma mark - Callbacks

#pragma mark Selfie
- (void)onSuccessSelfie:(NSString *_Nullable)base64;
- (void)onErrorSelfie:(ErrorBio *_Nullable)error;
#pragma mark Document
- (void)onSuccessDocument: (NSString *_Nonnull)base64;
- (void)onErrorDocument:(ErrorBio *_Nullable)error;

#pragma mark - ErrorBio

- (void)onErrorAcessoBioManager:(ErrorBio *_Nonnull)error;

#pragma mark - FaceTec
#if __has_include(<FaceTecSDK/FaceTecSDK.h>)
- (void)setLatestSessionResult : (id<FaceTecSessionResult> _Nonnull) sessionResult;
#endif
- (void)onComplete;

@end

