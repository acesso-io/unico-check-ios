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

#import "ErrorBio.h"
#import "iAcessoBioBuilder.h"
#import "AcessoBioManagerDelegate.h"
#import "AcessoBioSelfieDelegate.h"
#import "AcessoBioDocumentDelegate.h"
#import "UnicoCheckThemesDelegate.h"
#import "AcessoBioThemeDelegate.h"

#import <CoreLocation/CoreLocation.h>

@class UnicoSetup;
@class UnicoConfigDelegate;
@class UnicoSetupData;
@class SDKConfigResponseDTOAdapter;
@class UnicoJsonLoad;
@class UnicoConfigDataSourceManager;
@class UnicoFaceCameraViewController;
@class UnicoDocumentCameraViewController;
@class DocumentInsertView;
@class UnicoCheckThemes;
@protocol SensorsWorker;
@protocol UnicoSetupProtocol;
@class GeolocationDTO;
@class UnicoCheckLivenessAdapter;

typedef NS_ENUM(NSInteger, LanguageOrigin) {
    Native,
    Flutter,
    ReactNative
};

typedef NS_ENUM(NSInteger, CameraType) {
    Selfie,
    Document
};

@interface UnicoCheck:NSObject <UnicoCheckThemesDelegate, CLLocationManagerDelegate> {

    id<SensorsWorker>_Nonnull sensorsWorker;

    CLLocationManager *locationManager;

    UIViewController *viewController;
    UIViewController *presentedViewController;

    UnicoFaceCameraViewController *faceCameraViewController;
    UnicoDocumentCameraViewController *documentCameraViewController;

    NSString *versionRelease;

    BOOL isFacematchProcess;

    NSString *base64Facematch;

    UIImage *imageIconPopupError;

    double defaultTimeoutSession;
    double minimumTimeoutSession;

    BOOL hasImplementationError;

    id<UnicoSetupProtocol> unicoSetup;
    SDKConfigResponseDTOAdapter *sdkTokenResponse;

    CameraType cameraType;
    DocumentEnums documentType;

    void(^completionHandlerSetupConfig)(ErrorBio *_Nullable error);

    NSDate *dateCaptureBegin;
    NSDate *dateCaptureEnd;

    GeolocationDTO *geolocation;
    UnicoSetupData *setupData;
    UnicoCheckLivenessAdapter *_Nullable liveness;
}

#pragma mark - Protocols

@property (nonatomic, weak) id<AcessoBioManagerDelegate>_Nullable acessoBioDelegate;
@property (nonatomic, weak) id<AcessoBioSelfieDelegate>_Nullable selfieDelegate;
@property (nonatomic, weak) id<AcessoBioDocumentDelegate>_Nullable documentDelegate;

#pragma mark - Constructor

- (id _Nullable)initWithViewController:(id _Nullable)view
                             delegates:(id<AcessoBioManagerDelegate>_Nullable)delegate
                         sensorsWorker:(id<SensorsWorker>_Nullable)sensorsWorker;

#pragma mark - Language Origin

- (void)setLanguageOrigin:(LanguageOrigin)origin release:(NSString *_Nullable)release;
@property (readonly) LanguageOrigin language;

#pragma mark - Custom

@property (nonatomic, weak) id<AcessoBioThemeDelegate>_Nullable theme;
- (void)setAutoCapture:(BOOL)isEnabled;
- (void)setSmartFrame:(BOOL)isEnabled;
@property (readonly) BOOL isAutoCapture;
@property (readonly) BOOL isSmartCamera;
@property (nonatomic, assign) LocaleTypes localeTypes;

#pragma mark - Config

- (void)setupConfigToOpenCamera:(NSString *_Nullable)jsonConfigName bundle:(NSBundle *_Nullable)bundle completion:(void(^_Nullable)(ErrorBio *_Nullable error))completionHandler;
- (void)setupConfigToOpenCamera:(AcessoBioConfigDataSource *_Nullable)configDataSource completion:(void(^_Nullable)(ErrorBio *_Nullable error))completionHandler;

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

- (void)openCameraDocuments:(DocumentEnums)documentType delegate:(id<AcessoBioDocumentDelegate>_Nullable)delegate;

#pragma mark - Callbacks
#pragma mark Selfie

- (void)onSuccessSelfie:(NSString *_Nullable)base64;
- (void)onErrorSelfie:(ErrorBio *_Nullable)error;

#pragma mark Document

- (void)onSuccessDocument:(NSString *_Nonnull)base64;
- (void)onErrorDocument:(ErrorBio *_Nullable)error;

#pragma mark - ErrorBio

- (void)onErrorAcessoBioManager:(ErrorBio *_Nonnull)error;

@end
