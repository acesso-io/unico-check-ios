#import <UIKit/UIKit.h>
#import "FaceTecPublicStringKeys.h"

/** Represents the resolution options for the returned Audit Trail Image(s) */
typedef NS_ENUM(NSInteger, FaceTecAuditTrailType) {
    /** Configures FaceTec SDK  to disable returning Audit Trail Images. */
    FaceTecAuditTrailTypeDisabled = 0,
    /** Configures FaceTec SDK to return the fullest resolution image possible. */
    FaceTecAuditTrailTypeFullResolution = 1,
    /** Configures FaceTec SDK to return images of height 640. */
    FaceTecAuditTrailTypeHeight640 = 2,
};

/** Represents the options for placement of the Cancel Button. */
typedef NS_ENUM(NSInteger, FaceTecCancelButtonLocation) {
    /** Cancel Button will appear in the top left. */
    FaceTecCancelButtonLocationTopLeft = 0,
    /** Cancel Button will appear in the top right. */
    FaceTecCancelButtonLocationTopRight = 1,
    /** Cancel Button will be disabled and hidden. */
    FaceTecCancelButtonLocationDisabled = 2,
    /** Cancel Button will be appear at the location and size specified by cancelButtonCustomization.customLocation. */
    FaceTecCancelButtonLocationCustom = 3,
};

/** Represents the options for the transition animation used when dismissing the Interface. */
typedef NS_ENUM(NSInteger, FaceTecExitAnimationStyle) {
    /** Default. Quick fade out. */
    FaceTecExitAnimationStyleNone = 0,
    /** Frame will fade out as oval and frame expand out quickly. */
    FaceTecExitAnimationStyleRippleOut = 1,
    /** Frame will slowly fade out as oval and frame slowly expand out.*/
    FaceTecExitAnimationStyleRippleOutSlow = 2,
};

typedef NS_ENUM(NSInteger, FaceTecSecurityWatermarkImage) {
    FaceTecSecurityWatermarkImageFaceTecZoom = 0,
    FaceTecSecurityWatermarkImageFaceTec = 1,
    FaceTecSecurityWatermarkImageFaceTecPoweredBy = 2,
};

/** For setting FaceTec Vocal Guidance mode. */
typedef NS_ENUM(NSInteger, FaceTecVocalGuidanceMode) {
    FaceTecVocalGuidanceModeNoVocalGuidance = 0,
    FaceTecVocalGuidanceModeMinimalVocalGuidance = 1,
    FaceTecVocalGuidanceModeFullVocalGuidance = 2,
};

/** Max Audit Trail Images To Return . By default one audit trail image will be returned*/
typedef NS_ENUM(NSInteger, FaceTecAuditTrailImagesToReturn) {
    FaceTecAuditTrailImagesToReturnOne = 0,
    FaceTecAuditTrailImagesToReturnUpToSix = 1
};

@protocol FaceTecSDKProtocol;

__attribute__((visibility("default")))
@interface FaceTec: NSObject
@property (nonatomic, class, readonly, strong) id <FaceTecSDKProtocol> _Nonnull sdk;
@end

@class NSDate;

/** Represents the possible state of camera permissions. */
typedef NS_ENUM(NSInteger, FaceTecCameraPermissionStatus) {
    /** The user has not yet been asked for permission to use the camera */
     FaceTecCameraPermissionStatusNotDetermined = 0,
    /** The user denied the app permission to use the camera or manually revoked the app’s camera permission.
     From this state, permission can only be modified by the user from System ‘Settings’ context. */
    FaceTecCameraPermissionStatusDenied = 1,
    /** The camera permission on this device has been disabled due to policy.
     From this state, permission can only be modified by the user from System ‘Settings’ context or contacting the system administrator. */
    FaceTecCameraPermissionStatusRestricted = 2,
    /** The user granted permission to use the camera. */
    FaceTecCameraPermissionStatusAuthorized = 3,
};

@class UIColor;
@class CAGradientLayer;
@class FaceTecGuidanceCustomization;
@class FaceTecOvalCustomization;
@class FaceTecFeedbackCustomization;
@class FaceTecCancelButtonCustomization;
@class FaceTecFrameCustomization;
@class FaceTecResultScreenCustomization;
@class FaceTecOverlayCustomization;
@class FaceTecIDScanCustomization;
@class FaceTecOCRConfirmationCustomization;
@class FaceTecVocalGuidanceCustomization;
@class FaceTecInitialLoadingAnimationCustomization;

@protocol FaceTecCustomAnimationDelegate;
/**
 Applications should implement this delegate to configure custom UIViews to display for specific interface animations.
 */
@protocol FaceTecCustomAnimationDelegate <NSObject>
/**
 Configure a custom UIView to display on the OCR Confirmation Screen's scroll indicator.
 This method will be called every time that the OCR Confirmation Screen is displayed.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: The scroll indicator animation is displayed indefinitely until user action, so the custom animation should be set to loop/repeat infinitely.
 If this returns nil, the default animation will be used.
 */
@optional
- (UIView * _Nullable)onCreateOCRConfirmationScrollIndicatorAnimationView NS_SWIFT_NAME(onCreateOCRConfirmationScrollIndicatorAnimationView());
/**
 Configure a custom UIView to display on the Securing Camera Screen for the animation during camera loading.
 This method will be called every time that the Securing Camera Screen is displayed.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: The activity indicator animation is displayed indefinitely during the server-side work, so the custom animation should be set to loop/repeat infinitely.
 If this returns nil, the default animation will be used.
 */
@optional
- (UIView * _Nullable)onCreateInitialLoadingAnimationView NS_SWIFT_NAME(onCreateInitialLoadingAnimationView());
/**
 Configure a custom UIView to display on the Result Screen for the activity indicator animation during server-side work.
 This method will be called every time that the Result Screen is displayed after completing the and/or ID Scan process.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: The activity indicator animation is displayed indefinitely during the server-side work, so the custom animation should be set to loop/repeat infinitely.
 If this retuns a UIView instance, the UIView supplied will be used instead of the default activity indicator animation or any rotating-image animation configured with FaceTecCustomization.FaceTecResultScreenCustomization.customActvityIndicatorImage.
 If this returns nil, FaceTecCustomization.FaceTecResultScreenCustomization.customActivityIndicatorImage will be used. If FaceTecCustomization.FaceTecResultScreenCustomization.customActivityIndicatorImage is nil, the default activity indicator animation will be used.
 */
@optional
- (UIView * _Nullable)onCreateNewResultScreenActivityIndicatorView NS_SWIFT_NAME(onCreateNewResultScreenActivityIndicatorView());
/**
 Configure a custom UIView to display on the Result Screen for success scenarios.
 This method will be called every time either FaceTecFaceScanResultCallback.onFaceScanResultProceedToNextStep() or FaceTecIDScanResultCallback.onIDScanResultProceedToNextStep() is called while the Result Screen is displayed after completing the and/or ID Scan process.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: By default, the result animation is displayed for 2 seconds, but can be configured within a range using the FaceTecResultScreenCustomization.resultAnimationDisplayTime API.  Custom animation timing should be configured accordingly.
 If this returns a UIView instance, the UIView supplied will be used instead of the default success animation or any success image configured with FaceTecResultScreenCustomization.resultAnimationSuccessBackgroundImage.
 If this returns nil, the default success animation will be used.
 */
@optional
- (UIView * _Nullable)onCreateNewResultScreenSuccessAnimationView NS_SWIFT_NAME(onCreateNewResultScreenSuccessAnimationView());
/**
 Configure a custom UIView to display on the Result Screen for unsuccess scenarios. Unsuccess result animations are only shown for unsuccessful Photo ID Match attempts.
 This method will be called every time FaceTecIDScanResultCallback.retry() is called while Result Screen is displayed after completing the ID Scan process.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: By default, the result animation is displayed for 2 seconds, but can be configured within a range using the FaceTecResultScreenCustomization.resultAnimationDisplayTime API.  Custom animation timing should be configured accordingly.
 If this returns a UIView instance, the UIView supplied will be used instead of the default unsuccess animation or any unsuccess image configured with FaceTecResultScreenCustomization.resultAnimationUnsuccessBackgroundImage.
 If this returns nil, the default unsuccess animation will be used.
 */
@optional
- (UIView * _Nullable)onCreateNewResultScreenUnsuccessAnimationView NS_SWIFT_NAME(onCreateNewResultScreenUnsuccessAnimationView());
/**
 Configure a custom UIView to display on the NFC Scan Screen for the status animation before the user starts to scan their NFC chip.
 This method will be called every time that NFC scanning is ready-to-start on the NFC Scan Screen.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: The NFC Starting animation is displayed indefinitely during the device-side work to scan the NFC chip, so the custom animation should be set to loop/repeat infinitely. If the animation ends before the NFC Starting animation is dismissed, the animation will be restarted.
 If this retuns a UIView instance, the UIView supplied will be used instead of the default internal UIView.
 If this returns nil, the default internal UIView will be used.
 */
@optional
- (UIView * _Nullable)onCreateNFCStartingAnimationView NS_SWIFT_NAME(onCreateNFCStartingAnimationView());
/**
 Configure a custom UIView to display on the NFC Scan Screen for the status animation while the user scan's their NFC chip.
 This method will be called every time that NFC scanning is in-progress on the NFC Scan Screen.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: The NFC Scanning animation is displayed indefinitely during the device-side work to scan the NFC chip, so the custom animation should be set to loop/repeat infinitely. If the animation ends before the NFC Scanning animation is dismissed, the animation will be restarted.
 If this retuns a UIView instance, the UIView supplied will be used instead of the default internal UIView.
 If this returns nil, the default internal UIView will be used.
 */
@optional
- (UIView * _Nullable)onCreateNFCScanningAnimationView NS_SWIFT_NAME(onCreateNFCScanningAnimationView());

/**
 Configure a custom UIView to display on the NFC Scan Screen for the status animation before the user starts to scan their NFC card chip.
 This is similar to onCreateNFCStartingAnimationView, which is used for Passport books instead of Passport/NFC cards
 */
@optional
- (UIView * _Nullable)onCreateNFCCardStartingAnimationView NS_SWIFT_NAME(onCreateNFCCardStartingAnimationView());

/**
 Configure a custom UIView to display on the NFC Scan Screen for the status animation while the user scan's their NFC card chip
 This is similar to onCreateNFCScanningAnimationView, which is used for Passport books instead of Passport/NFC cards
 */
@optional
- (UIView * _Nullable)onCreateNFCCardScanningAnimationView NS_SWIFT_NAME(onCreateNFCCardScanningAnimationView());

/**
 Configure a custom UIView to display on the NFC Scan Screen for the status animation after NFC Scan is skipped due to an error or user interaction.
 This method will be called if the NFC Scan is skipped due to an error or user interaction.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: By default, the result animation is displayed for 2 seconds, but can be configured within a range using the FaceTecIDScanCustomization.nfcScreenAnimationDisplayTime API.  Custom animation timing should be configured accordingly.
 If this retuns a UIView instance, the UIView supplied will be used instead of the default internal UIView.
 If this returns nil, the default internal UIView will be used.
 */
@optional
- (UIView * _Nullable)onCreateNFCSkipOrErrorAnimationView NS_SWIFT_NAME(onCreateNFCSkipOrErrorAnimationView());
/**
 Configure a custom UIView to display on the ID Scan Additional Review Screen.
 This method will be called when we show the ID Scan Additional Review Screen.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: By default, the result animation is displayed for 2 seconds, but can be configured within a range using the FaceTecIDScanCustomization.additionalReviewScreenAnimationDisplayTime API.  Custom animation timing should be configured accordingly.
 If this retuns a UIView instance, the UIView supplied will be used instead of the default internal UIView.
 If this returns nil, the default internal UIView will be used.
 */
@optional
- (UIView * _Nullable)onCreateAdditionalReviewScreenAnimationView NS_SWIFT_NAME(onCreateAdditionalReviewScreenAnimationView());
/**
 Configure a custom UIView to display on the ID Scan Feedback Screen.
 This method will be called when we show the ID Scan Feedback Screen.
 Sizing of the UIView's contents should be calculated relative to the UIView's bounds. Animations should be setup to start in the UIView's didMoveToSuperview method.
 Note: By default, the result animation is displayed for 2 seconds, but can be configured within a range using the FaceTecIDScanCustomization.idFeedbackScreenAnimationDisplayTime API.  Custom animation timing should be configured accordingly.
 If this retuns a UIView instance, the UIView supplied will be used instead of the default internal UIView.
 If this returns nil, the default internal UIView will be used.
 */
@optional
- (UIView * _Nullable)onCreateIDFeedbackScreenFlipIDToBackAnimationView NS_SWIFT_NAME(onCreateIDFeedbackScreenFlipIDToBackAnimationView());
@end

/**
 * Class used to customize the look and feel of the Interface.
 * FaceTec SDK ships with a default  theme but has a variety of variables that you can use to configure to your application's needs.
 * To customize the Interface, simply create an instance of FaceTecCustomization and set some, or all, of the variables.
 */
__attribute__((visibility("default")))
@interface FaceTecCustomization : NSObject

/** Customize the User OCR Confirmation Screen. */
@property (nonatomic, strong) FaceTecOCRConfirmationCustomization * _Nonnull ocrConfirmationCustomization;
/** Customize the Photo ID Match Screens. */
@property (nonatomic, strong) FaceTecIDScanCustomization * _Nonnull idScanCustomization;
/** Customize the Overlay, separating the Interface from the presenting application context. */
@property (nonatomic, strong) FaceTecOverlayCustomization * _Nonnull overlayCustomization;
/** Customize the New User Guidance and Retry Screens. */
@property (nonatomic, strong) FaceTecGuidanceCustomization * _Nonnull guidanceCustomization;
/** Customize the Result Screen. */
@property (nonatomic, strong) FaceTecResultScreenCustomization * _Nonnull resultScreenCustomization;
/** Customize the Oval and the Progress Spinner animations. */
@property (nonatomic, strong) FaceTecOvalCustomization * _Nonnull ovalCustomization;
/** Customize the Feedback Bar. */
@property (nonatomic, strong) FaceTecFeedbackCustomization * _Nonnull feedbackCustomization;
/** Customize the Cancel Button. */
@property (nonatomic, strong) FaceTecCancelButtonCustomization * _Nonnull cancelButtonCustomization;
/** Customize the Frame. */
@property (nonatomic, strong) FaceTecFrameCustomization * _Nonnull frameCustomization;
/** Customize the interface animations. */
@property (nonatomic, strong) id<FaceTecCustomAnimationDelegate> _Nullable customAnimationDelegate;
/** Customize the FaceTec Security Watermark Image by selecting from 1 of the 3 available FaceTec watermarks. */
@property (nonatomic) enum FaceTecSecurityWatermarkImage securityWatermarkImage;
/** Customize FaceTec Vocal Guidance feature like settings run mode or providing sound files.*/
@property (nonatomic, strong) FaceTecVocalGuidanceCustomization * _Nonnull vocalGuidanceCustomization;
/** Customize the Securing Camera Screen. */
@property (nonatomic, strong) FaceTecInitialLoadingAnimationCustomization * _Nonnull initialLoadingAnimationCustomization;

/**
 * Customize the transition out animation for an unsuccessful Session.
 * Default is FaceTecExitAnimationStyleNone.
 */
@property (nonatomic) enum FaceTecExitAnimationStyle exitAnimationUnsuccess;
/**
 * Customize the transition out animation for a successful Session.
 * Default is FaceTecExitAnimationStyleNone.
 */
@property (nonatomic) enum FaceTecExitAnimationStyle exitAnimationSuccess;

/**
 * This function allows special runtime control of the success message shown when the success animation occurs for a FaceScan.
 * Please note that you can also customize this string via the standard customization/localization methods provided.
 * Special runtime access is enabled to this text because the developer may wish to change this text depending on the mode of operation.
 * This method does not update the success message for an ID Scan. For runtime control over the result messages displayed for an ID Scan, use the method setIDScanResultScreenMessageOverrides.
 */
+ (void) setOverrideResultScreenSuccessMessage:(NSString * _Nonnull)value;
+ (NSString * _Nullable) overrideResultScreenSuccessMessage;

/**
 * This function allows special runtime control of the various possible result messages shown when the result animation occurs for an ID Scan Session.
 * Please note that you can also customize these strings via the standard customization/localization methods provided.
 */
+ (void) setIDScanResultScreenMessageOverridesForSuccessFrontSide:(NSString * _Nonnull)successFrontSide successFrontSideBackNext:(NSString * _Nonnull)successFrontSideBackNext successFrontSideNFCNext:(NSString * _Nonnull)successFrontSideNFCNext successBackSide:(NSString * _Nonnull)successBackSide successBackSideNFCNext:(NSString * _Nonnull)successBackSideNFCNext successPassport:(NSString * _Nonnull)successPassport successPassportNFCNext:(NSString * _Nonnull)successPassportNFCNext successUserConfirmation:(NSString * _Nonnull)successUserConfirmation successNFC:(NSString * _Nonnull)successNFC successAdditionalReview:(NSString * _Nonnull)successAdditionalReview retryFaceDidNotMatch:(NSString * _Nonnull)retryFaceDidNotMatch retryIDNotFullyVisible:(NSString * _Nonnull)retryIDNotFullyVisible retryOCRResultsNotGoodEnough:(NSString * _Nonnull)retryOCRResultsNotGoodEnough retryIDTypeNotSupported:(NSString * _Nonnull)retryIDTypeNotSupported skipOrErrorNFC:(NSString * _Nonnull)skipOrErrorNFC NS_SWIFT_NAME(setIDScanResultScreenMessageOverrides(successFrontSide:successFrontSideBackNext:successFrontSideNFCNext:successBackSide:successBackSideNFCNext:successPassport:successPassportNFCNext:successUserConfirmation:successNFC:successAdditionalReview:retryFaceDidNotMatch:retryIDNotFullyVisible:retryOCRResultsNotGoodEnough:retryIDTypeNotSupported:skipOrErrorNFC:));

/**
 * @deprecated - This API method is deprecated and will be removed in an upcoming release of the iOS SDK. Use the non-deprecated setIDScanResultScreenMessageOverrides API method instead.
 * This function allows special runtime control of the various possible result messages shown when the result animation occurs for an ID Scan Session.
 * Please note that you can also customize these strings via the standard customization/localization methods provided.
 */
+ (void) setIDScanResultScreenMessageOverridesForSuccessFrontSide:(NSString * _Nonnull)successFrontSide successFrontSideBackNext:(NSString * _Nonnull)successFrontSideBackNext successFrontSideNFCNext:(NSString * _Nonnull)successFrontSideNFCNext successBackSide:(NSString * _Nonnull)successBackSide successBackSideNFCNext:(NSString * _Nonnull)successBackSideNFCNext successPassport:(NSString * _Nonnull)successPassport successPassportNFCNext:(NSString * _Nonnull)successPassportNFCNext successUserConfirmation:(NSString * _Nonnull)successUserConfirmation successNFC:(NSString * _Nonnull)successNFC retryFaceDidNotMatch:(NSString * _Nonnull)retryFaceDidNotMatch retryIDNotFullyVisible:(NSString * _Nonnull)retryIDNotFullyVisible retryOCRResultsNotGoodEnough:(NSString * _Nonnull)retryOCRResultsNotGoodEnough retryIDTypeNotSupported:(NSString * _Nonnull)retryIDTypeNotSupported skipOrErrorNFC:(NSString * _Nonnull)skipOrErrorNFC NS_SWIFT_NAME(setIDScanResultScreenMessageOverrides(successFrontSide:successFrontSideBackNext:successFrontSideNFCNext:successBackSide:successBackSideNFCNext:successPassport:successPassportNFCNext:successUserConfirmation:successNFC:retryFaceDidNotMatch:retryIDNotFullyVisible:retryOCRResultsNotGoodEnough:retryIDTypeNotSupported:skipOrErrorNFC:)) DEPRECATED_MSG_ATTRIBUTE("This API method is deprecated and will be removed in an upcoming release of the iOS SDK. Use the non-deprecated setIDScanResultScreenMessageOverrides API method instead.");

+ (NSDictionary * _Nullable) idScanResultScreenMessageOverrides;

/**
 * This function allows special runtime control of the various possible upload messages shown when the Result Screen's upload progress content is shown for an ID Scan Session.
 * If this method is used, any values configured with FaceTecIDScanResultCallback.onIDScanUploadMessageOverride will be overridden with the applicable value configured with this method.
 * Please note that for proper behavior of these dynamic upload message values, it is required that there is appropriate use of FaceTecIDScanResultCallback.onIDScanUploadProgress to track the progress of the request body being uploaded to the Sever.
 */
+ (void) setIDScanUploadMessageOverridesForFrontSideUploadStarted:(NSString * _Nonnull)frontSideUploadStarted frontSideStillUploading:(NSString * _Nonnull)frontSideStillUploading frontSideUploadCompleteAwaitingResponse:(NSString * _Nonnull)frontSideUploadCompleteAwaitingResponse frontSideUploadCompleteAwaitingProcessing:(NSString * _Nonnull)frontSideUploadCompleteAwaitingProcessing backSideUploadStarted:(NSString * _Nonnull)backSideUploadStarted backSideStillUploading:(NSString * _Nonnull)backSideStillUploading backSideUploadCompleteAwaitingResponse:(NSString * _Nonnull)backSideUploadCompleteAwaitingResponse backSideUploadCompleteAwaitingProcessing:(NSString * _Nonnull)backSideUploadCompleteAwaitingProcessing userConfirmedInfoUploadStarted:(NSString * _Nonnull)userConfirmedInfoUploadStarted userConfirmedInfoStillUploading:(NSString * _Nonnull)userConfirmedInfoStillUploading userConfirmedInfoUploadCompleteAwaitingResponse:(NSString * _Nonnull)userConfirmedInfoUploadCompleteAwaitingResponse userConfirmedInfoUploadCompleteAwaitingProcessing:(NSString * _Nonnull)userConfirmedInfoUploadCompleteAwaitingProcessing nfcUploadStarted:(NSString *_Nonnull)nfcUploadStarted nfcStillUploading:(NSString *_Nonnull)nfcStillUploading nfcUploadCompleteAwaitingResponse:(NSString *_Nonnull)nfcUploadCompleteAwaitingResponse nfcUploadCompleteAwaitingProcessing:(NSString *_Nonnull)nfcUploadCompleteAwaitingProcessing skippedNFCUploadStarted:(NSString *_Nonnull)skippedNFCUploadStarted skippedNFCStillUploading:(NSString *_Nonnull)skippedNFCStillUploading skippedNFCUploadCompleteAwaitingResponse:(NSString *_Nonnull)skippedNFCUploadCompleteAwaitingResponse skippedNFCUploadCompleteAwaitingProcessing:(NSString *_Nonnull)skippedNFCUploadCompleteAwaitingProcessing NS_SWIFT_NAME(setIDScanUploadMessageOverrides(frontSideUploadStarted:frontSideStillUploading:frontSideUploadCompleteAwaitingResponse:frontSideUploadCompleteAwaitingProcessing:backSideUploadStarted:backSideStillUploading:backSideUploadCompleteAwaitingResponse:backSideUploadCompleteAwaitingProcessing:userConfirmedInfoUploadStarted:userConfirmedInfoStillUploading:userConfirmedInfoUploadCompleteAwaitingResponse:userConfirmedInfoUploadCompleteAwaitingProcessing:nfcUploadStarted:nfcStillUploading:nfcUploadCompleteAwaitingResponse:nfcUploadCompleteAwaitingProcessing:skippedNFCUploadStarted:skippedNFCStillUploading:skippedNFCUploadCompleteAwaitingResponse:skippedNFCUploadCompleteAwaitingProcessing:));
+ (NSDictionary * _Nullable) idScanUploadMessageOverrides;

@property (nonatomic) NSDictionary* _Nullable featureFlagsMap;

- (void) setGuidanceCustomization:(FaceTecGuidanceCustomization * _Nullable)guidanceCustomization;
- (void) setOvalCustomization:(FaceTecOvalCustomization * _Nullable)ovalCustomization;
- (void) setFeedbackCustomization:(FaceTecFeedbackCustomization * _Nullable)feedbackCustomization;
- (void) setFrameCustomization:(FaceTecFrameCustomization * _Nullable)zoomFrameCustomization;
- (void) setCancelButtonCustomization:(FaceTecCancelButtonCustomization * _Nullable)cancelButtonCustomization;
- (void) setVocalGuidanceCustomization:(FaceTecVocalGuidanceCustomization * _Nullable)vocalGuidanceCustomization;
- (void) setResultScreenCustomization:(FaceTecResultScreenCustomization * _Nullable)resultScreenCustomization;
- (void) setOverlayCustomization:(FaceTecOverlayCustomization * _Nullable)overlayCustomization;
- (void) setIdScanCustomization:(FaceTecIDScanCustomization * _Nullable)iDScanCustomization;
- (void) setOCRConfirmationCustomization:(FaceTecOCRConfirmationCustomization * _Nullable)ocrConfirmationCustomization;
- (void) setInitialLoadingAnimationCustomization:(FaceTecInitialLoadingAnimationCustomization * _Nullable)initialLoadingAnimationCustomization;

- (nonnull instancetype)init;
- (nonnull instancetype)initWithFeatureFlagsMap:(NSDictionary* _Nullable)featureFlagsMap  NS_SWIFT_NAME(init(featureFlagsMap:));
+ (nonnull instancetype)new;
@end

/**
 * Customize the shadow that can be applied to the Frame and Feedback Bar.
 * Note: These properties and their behavior correlate to the shadow-related attributes available for CALayer objects.
 */
__attribute__((visibility("default")))
@interface FaceTecShadow : NSObject

/**
 * Control the shadow's color.
 * Default is black.
 */
@property (nonatomic) UIColor * _Nonnull color;
/**
 * Control the shadow's opacity.
 * Default is 0.
 */
@property (nonatomic) float opacity;
/**
 * Control the shadow's radius.
 * Default is 0.
 */
@property (nonatomic) float radius;
/**
 * Control the shadow's offset.
 * Default is CGSizeZero.
 */
@property (nonatomic) CGSize offset;
/**
 * Control the insets from the parent's view frame for configuring the shadow's path.
 * Default is UIEdgeInsetsZero.
 */
@property (nonatomic) UIEdgeInsets insets;

- (nonnull instancetype) init;
- (nonnull instancetype) initWithColor:(UIColor * _Nonnull)color opacity:(float)opacity radius:(float)radius offset:(CGSize)offset insets:(UIEdgeInsets)insets;
@end

/**
 * Customize the User OCR Confirmation Screen.
 */
__attribute__((visibility("default")))
@interface FaceTecOCRConfirmationCustomization : NSObject
/**
 * Color of the User OCR Confirmation Screen background.
 * Default is white.
 */
@property (nonatomic, strong) NSArray<UIColor *> * _Nonnull backgroundColors;
/**
 * Color of the line below the main header on the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull mainHeaderDividerLineColor;
/**
 * Thickness of the line below the main header on the User OCR Confirmation Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int mainHeaderDividerLineWidth;
/**
 * Font of the the main header text on the User OCR Confirmation Screen.
 * Default is bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull mainHeaderFont;
/**
 * Color of the main header text on the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull mainHeaderTextColor;
/**
 * Font of the section headers' text on the User OCR Confirmation Screen.
 * Default is bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull sectionHeaderFont;
/**
 * Color of the section headers' text on the User OCR Confirmation Screen.
 * Default is off-black.
 */
@property (nonatomic, strong) UIColor * _Nonnull sectionHeaderTextColor;
/**
 * Font of the field labels' text on the User OCR Confirmation Screen.
 * Default is light system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull fieldLabelFont;
/**
 * Color of the field labels' text on the User OCR Confirmation Screen.
 * Default is off-black.
 */
@property (nonatomic, strong) UIColor * _Nonnull fieldLabelTextColor;
/**
 * Font of the field values' text on the User OCR Confirmation Screen.
 * Default is light system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull fieldValueFont;
/**
 * Color of the field values' text on the User OCR Confirmation Screen.
 * Default is off-black.
 */
@property (nonatomic, strong) UIColor * _Nonnull fieldValueTextColor;
/**
 * Color of the input fields' backgrounds on the User OCR Confirmation Screen.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull inputFieldBackgroundColor;
/**
 * Font of the input fields' text on the User OCR Confirmation Screen.
 * If this value is nil, the font of the input fields' text will use the value configured for .fieldValueFont.
 * Default is nil.
 */
@property (nonatomic, strong) UIFont * _Nullable inputFieldFont;
/**
 * Color of the input fields' text on the User OCR Confirmation Screen.
 * If this value is nil, the color of the input fields' text will use the value configured for .fieldValueTextColor.
 * Default is nil.
 */
@property (nonatomic, strong) UIColor * _Nullable inputFieldTextColor;
/**
 * Color of the input fields' borders on the User OCR Confirmation Screen.
 * Default is off-black.
 */
@property (nonatomic, strong) UIColor * _Nonnull inputFieldBorderColor;
/**
 * Thickness of the input fields' borders on the User OCR Confirmation Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int inputFieldBorderWidth;
/**
 * Corner radius of the input fields' borders on the User OCR Confirmation Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int inputFieldCornerRadius;
/**
 * Font of the input fields' placeholder text on the User OCR Confirmation Screen.
 * If this value is nil, the font of the input fields' placeholder text will use the value configured for .inputFieldFont unless that value is nil, in which case the font of the input fields' placeholder text will use the value configured for .fieldValueFont.
 * Default is nil.
 */
@property (nonatomic, strong) UIFont * _Nullable inputFieldPlaceholderFont;
/**
 * Color of the input fields' placeholder text on the User OCR Confirmation Screen.
 * If this value is nil, the color of the input fields' placeholder text will use the value configured for .inputFieldTextColor with a 0.4 alpha component unless that value is nil, in which case the color of the input fields' placeholder text will use the value configured for .fieldValueTextColor with a 0.4 alpha component.
 * Default is nil.
 */
@property (nonatomic, strong) UIColor * _Nonnull inputFieldPlaceholderTextColor;
/**
 * Control whether the input fields' borders are only displayed along the bottom bounds, or if they are displayed as a full box around the input fields on the User OCR Confirmation Screen.
 * Default is false (showing full border box around input fields).
 */
@property (nonatomic) BOOL showInputFieldBottomBorderOnly;
/**
 * Font of the action button's text during the User OCR Confirmation Screen.
 * Default is a bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull buttonFont;
/**
 * Color of the action button's text during the User OCR Confirmation Screen.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextNormalColor;
/**
 * Color of the action button's background during the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundNormalColor;
/**
 * Color of the action button's text when the button is pressed during the User OCR Confirmation Screen.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextHighlightColor;
/**
 * Color of the action button's background when the button is pressed during the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundHighlightColor;
/**
 * Color of the action button's text when the button is disabled during the User OCR Confirmation Screen.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextDisabledColor;
/**
 * Color of the action button's background when the button is disabled during the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundDisabledColor;
/**
 * Color of the action button's border during the User OCR Confirmation Screen.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBorderColor;
/**
 * Thickness of the action button's border during the User OCR Confirmation Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int buttonBorderWidth;
/**
 * Corner radius of the action button's border during the User OCR Confirmation Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int buttonCornerRadius;
/**
 * Color of the scroll indicator's background during the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull scrollIndicatorBackgroundNormalColor;
/**
 * Color of the scroll indicator's background when the button is pressed during the User OCR Confirmation Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull scrollIndicatorBackgroundHighlightColor;
/**
 * Color of the scroll indicator's text and default image tint during the User OCR Confirmation Screen.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull scrollIndicatorForegroundNormalColor;
/**
 * Color of the scroll indicator's text and default image tint when the button is pressed during the User OCR Confirmation Screen.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull scrollIndicatorForegroundHighlightColor;
/**
 * Color of the scroll indicator's border during the User OCR Confirmation Screen.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull scrollIndicatorBorderColor;
/**
 * Thickness of the scroll indicator's border during theUser OCR Confirmation Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int scrollIndicatorBorderWidth;
/**
 * Corner radius of the scroll indicator's border on the User OCR Confirmation Screen.
 * If this value is set to -1, the corner radius will be set to half the height of the scroll indicator.
 * Default is -1.
 */
@property (nonatomic) int scrollIndicatorCornerRadius;
/**
 * Font of the scroll indicator's text on the User OCR Confirmation Screen.
 * If this value is null, FaceTec's default Typeface will be used.
 * Default is null.
 */
@property (nonatomic, strong) UIFont * _Nullable scrollIndicatorFont;
/**
 * Shadow displayed behind the scroll indicator on the User OCR Confirmation Screen.
 * This customization can be set to nil for no shadow, or it can be set to an instance of FaceTecShadow.
 * Note: FaceTecShadow's configurable properties correlate to the shadow-related attributes available for CALayer objects.
 * Default is a custom shadow.
 */
@property (nonatomic) FaceTecShadow * _Nullable scrollIndicatorShadow;
/**
 * Control whether to show the scroll indicator on the User OCR Confirmation Screen when there is scrollable content.
 * Default is true (enabled).
 */
@property (nonatomic) BOOL enableScrollIndicator;
/**
 * Control whether to animate the text of the scroll indicator on the User OCR Confirmation Screen.
 * Default is true (enabled).
 */
@property (nonatomic) BOOL enableScrollIndicatorTextAnimation;
/**
 * Control whether to place the User OCR Confirmation Screen action button at the bottom of the scrollable content, or fixed to the bottom of the screen (always visible).
 * Default is false (button is below the scrollable content).
 */
@property (nonatomic) BOOL enableFixedConfirmButton;
/**
 * Control whether to show the animate-able image on the scroll indicator on the User OCR Confirmation Screen.
 * Default is true (shown).
 */
@property (nonatomic) BOOL showScrollIndicatorImage;

@end

/**
 * Customize the Photo ID Match Screens.
 */
__attribute__((visibility("default")))
@interface FaceTecIDScanCustomization : NSObject
/**
 * Controls whether to show the 'FaceTec_document' image (or image configured with .selectionScreenDocumentImage) on the Identity Document Type Selection Screen.
 * Default is true (visible).
 */
@property (nonatomic) BOOL showSelectionScreenDocumentImage;
/**
 * Image displayed on the Identity Document Type Selection Screen below the header message.
 * Default is configured to use image named 'FaceTec_document' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable selectionScreenDocumentImage;
/**
 * Color of the Identity Document Type Selection Screen background.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull selectionScreenBackgroundColors;
/**
 * Color of the text displayed on the Identity Document Type Selection Screen (not including the action button text).
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull selectionScreenForegroundColor;
/**
 * Color of the Identity Document Review Screen background.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull reviewScreenBackgroundColors;
/**
 * Color of the instruction message text displayed on the Identity Document Review Screen (not including the action button).
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull reviewScreenForegroundColor;
/**
 * Color of the text view background during the Identity Document Review Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull reviewScreenTextBackgroundColor;
/**
 * Color of the text view background border during the Identity Document Review Screen.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull reviewScreenTextBackgroundBorderColor;
/**
 * Corner radius of the text view background and border during the Identity Document Review Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int reviewScreenTextBackgroundCornerRadius;
/**
 * Thickness of the text view background border during the Identity Document Review Screen.
 * Default is 0.
 */
@property (nonatomic) int reviewScreenTextBackgroundBorderWidth;
/**
 * Color of the instruction message text displayed on the Identity Document Capture Screen (not including the action button text or the tap-to-focus message text).
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull captureScreenForegroundColor;
/**
 * Color of the text view background during the Identity Document Capture Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull captureScreenTextBackgroundColor;
/**
 * Color of the text view background border during the Identity Document Capture Screen.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull captureScreenTextBackgroundBorderColor;
/**
 * Corner radius of the text view background and border during the Identity Document Capture Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int captureScreenTextBackgroundCornerRadius;
/**
 * Thickness of the text view background border during the Identity Document Capture Screen.
 * Default is 0.
 */
@property (nonatomic) int captureScreenTextBackgroundBorderWidth;
/**
 * Color of the tap-to-focus message text displayed below the Capture Frame during the Identity Document Capture Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull captureScreenFocusMessageTextColor;
/**
 * Font of the tap-to-focus message text below the Capture Frame during the Identity Document Capture Screen.
 * Default is a light system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull captureScreenFocusMessageFont;
/**
 * Color of the action button's text during Photo ID Match Screens.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextNormalColor;
/**
 * Color of the action button's background during Photo ID Match Screens.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundNormalColor;
/**
 * Color of the action button's text when the button is pressed during the Photo ID Match Screens.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextHighlightColor;
/**
 * Color of the action button's background when the button is pressed during the Photo ID Match Screens.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundHighlightColor;
/**
 * Color of the action button's text when the button is disabled during Photo ID Match Screens.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextDisabledColor;
/**
 * Color of the action button's background when the button is disabled during the Photo ID Match Screens.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundDisabledColor;
/**
 * Color of the action button's border during Photo ID Match Screens.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBorderColor;
/**
 * Thickness of the action button's border during the Photo ID Match Screens.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int buttonBorderWidth;
/**
 * Corner radius of the action button's border during the Photo ID Match Screens.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int buttonCornerRadius;

/**
 * Font of the title during the Identity Document Type Selection Screen.
 * Default is a semi-bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull headerFont;

/**
 * Font of the instruction message text during the Identity Document Capture and Review Screens.
 * Default is a light system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull subtextFont;

/**
 * Font of the action button's text during the Photo ID Match Screens.
 * Default is a bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull buttonFont;
/**
 * Color of the Identity Document Capture Screen's background.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull captureScreenBackgroundColor;
/**
 * Color of the Identity Document Capture Frame's stroke.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull captureFrameStrokeColor;
/**
 * Thickness of the Identity Document Capture Frame's stroke.
 * Default is dynamically configured per device at runtme.
 */
@property (nonatomic) int captureFrameStrokeWith;
/**
 * Corner radius of the Identity Document Capture Frame.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int captureFrameCornerRadius;
/**
 * Image displayed for the Torch button on the Identity Document Capture Screen when the torch/flashlight is active/on.
 * Default is configured to use image named 'FaceTec_active_torch' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable activeTorchButtonImage;
/**
 * Image displayed for the Torch button on the Identity Document Capture Screen when the torch/flashlight is inactive/off.
 * Default is configured to use image named 'FaceTec_inactive_torch' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable inactiveTorchButtonImage;
/**
 * Color of the Additional Review Screen background.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull additionalReviewScreenBackgroundColors;
/**
 * Color of the text displayed on the Additional Review Screen (not including the action button text).
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull additionalReviewScreenForegroundColor;
/**
 * Image displayed on the ID Scan Additional Review Screen.
 * Default is configured to use image named 'FaceTec_review' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable additionalReviewScreenScreenImage;
/**
 * Color of the ID Scan Feedback Screen background.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull idFeedbackScreenBackgroundColors;
/**
 * Color of the text displayed on the ID Scan Feedback Screen (not including the action button text).
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull idFeedbackScreenForegroundColor;
/**
 * Image displayed on the ID Scan Feedback Screen for the front-side of the ID in the default animation when feedback is to flip the ID to the back-side.
 * The images configured with idFeedbackScreenFlipIDFrontImage and idFeedbackScreenFlipIDBackImage will be used for the default flip animation and displayed instead of a custom animation configured with onCreateIDFeedbackScreenFlipIDToBackAnimationView.
 * Default is configured to use image named 'FaceTec_id_card_front' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable idFeedbackScreenFlipIDFrontImage;
/**
 * Image displayed on the ID Scan Feedback Screen for the front-side of the ID in the default animation when feedback is to flip the ID to the back-side.
 * The images configured with idFeedbackScreenFlipIDFrontImage and idFeedbackScreenFlipIDBackImage will be used for the default flip animation and displayed instead of a custom animation configured with onCreateIDFeedbackScreenFlipIDToBackAnimationView.
 * Default is configured to use image named 'FaceTec_id_card_back' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable idFeedbackScreenFlipIDBackImage;
/**
 * Controls whether to show the 'FaceTec_face_match_to_id_branding_logo' image (or image configured with .faceMatchToIDBrandingImage) on the ID Scan Capture Screen for Face Match to ID Sessions.
 * Default is false (hidden).
 */
@property (nonatomic) BOOL showFaceMatchToIDBrandingImage;
/**
 * Image displayed on the ID Scan Capture Screen for Face Match To ID Sessions.
 * Default is configured to use image named 'FaceTec_face_match_to_id_branding_logo' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable faceMatchToIDBrandingImage;
/**
 * Image displayed on the ID Scan Capture Screen for standalone ID Scan Sessions.
 * Default is configured to use image named 'FaceTec_standalone_id_scan_watermark' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable standaloneIDScanWatermark;
/**
 * Controls whether to show the Additional Review Screen at the end of an ID Scan Session if there was an issue with scanning part of the ID.
 * Default is false (shown).
 */
@property (nonatomic) BOOL disableAdditionalReviewScreen;
/**
 * Controls whether to show the ID Scan Feedback Screen at the end of an ID Scan Result Screen if there was a correctable issue with scanning the ID.
 * Default is false (shown).
 */
@property (nonatomic) BOOL disableIDFeedbackScreen;
/**
 * Controls the length of time to display the Additional Review Screen animation after being transitioned in and before being transitioned out.
 * Value is in seconds. This value has to be between 1.5 and 3.0. If it’s lower than 1.5 or higher than 3.0, it will be defaulted to 1.5 or 3.0 respectively.
 * Default is 2.
 */
@property (nonatomic) double additionalReviewScreenAnimationDisplayTime;
/**
 * Controls the length of time to display the ID Feedback Screen animation after being transitioned in and before being transitioned out.
 * Value is in seconds. This value has to be between 1.5 and 3.0. If it’s lower than 1.5 or higher than 3.0, it will be defaulted to 1.5 or 3.0 respectively.
 * Default is 2.
 */
@property (nonatomic) double idFeedbackScreenAnimationDisplayTime;
/**
 * Controls the length of time to display the NFC Screen animation after being transitioned in and before being transitioned out.
 * Value is in seconds. This value has to be between 1.5 and 3.0. If it’s lower than 1.5 or higher than 3.0, it will be defaulted to 1.5 or 3.0 respectively.
 * Default is 2.
 */
@property (nonatomic) double nfcScreenAnimationDisplayTime;

@end

/**
 * Customize the New User Guidance and Retry Screens.
 * New User Guidance Screens are shown before the Session and Retry Screens are shown after an unsuccessful Session.
 */
__attribute__((visibility("default")))
@interface FaceTecGuidanceCustomization : NSObject
/**
 * Color of the background for the New User Guidance and Retry Screens.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull backgroundColors;
/**
 * Color of the text displayed on the New User Guidance and Retry Screens (not including the action button text).
 * Note: This customization can be overridden for specific text using FaceTecGuidanceCustomization.readyScreenHeaderTextColor, .readyScreenSubtextTextColor, .retryScreenHeaderTextColor, and/or .retryScreenSubtextTextColor.
 * Default is black.
 */
@property (nonatomic, strong) UIColor * _Nonnull foregroundColor;
/**
 * Color of the action button's text during the New User Guidance and Retry Screens.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextNormalColor;
/**
 * Color of the action button's background during the New User Guidance and Retry Screens.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundNormalColor;
/**
 * Color of the action button's text when the button is pressed during the New User Guidance and Retry Screens.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextHighlightColor;
/**
 * Color of the action button's background when the button is pressed during the New User Guidance and Retry Screens.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundHighlightColor;
/**
 * Color of the action button's text when the button is disabled during the New User Guidance and Retry Screens.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonTextDisabledColor;
/**
 * Color of the action button's background when the button is disabled during the New User Guidance and Retry Screens.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBackgroundDisabledColor;
/**
 * Color of the action button's border during the New User Guidance and Retry Screens.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull buttonBorderColor;
/**
 * Thickness of the action button's border during the New User Guidance and Retry Screens.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int buttonBorderWidth;
/**
 * Corner radius of the action button's border during the New User Guidance and Retry Screens.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int buttonCornerRadius;

/**
 * Font of the title during the New User Guidance and Retry Screens.
 * Note: This customization can be overridden for specific text using FaceTecGuidanceCustomization.readyScreenHeaderFont and/or .retryScreenHeaderFont.
 * Default is a semi-bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull headerFont;

/**
 * Font of the title's subtext and messages during the New User Guidance and Retry Screens.
 * Note: This customization can be overridden for specific text using FaceTecGuidanceCustomization.readyScreenSubtextFont and/or .retryScreenSubtextFont.
 * Default is a light system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull subtextFont;

/**
 * Specify an attributed string to use instead of the localized string for the text of the title displayed on the Get Ready  Screen during the New User Guidance and Retry Screens.
 * If this value is nil, the localized string, FaceTecStrings.FaceTec_instructions_header_ready, will be used for the text of the title displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * Default is nil.
 */
@property (nonatomic, strong) NSAttributedString * _Nullable readyScreenHeaderAttributedString;
/**
 * Font of the title's text displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * Note: This will override the header font configured with FaceTecGuidanceCustomization.headerFont for the Get Ready Screen.
 * If this value is nil, FaceTecGuidanceCustomization.headerFont will be used for the font of the title's text displayed on the Get Ready Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIFont * _Nullable readyScreenHeaderFont;

/**
 * Color of the header text displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * Note: This will override the header text color configured with FaceTecGuidanceCustomization.foregroundColor for the Get Ready Screen.
 * If this value is nil, FaceTecGuidanceCustomization.foregroundColor will be used for the color of the title's text displayed on the Get Ready Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIColor * _Nullable readyScreenHeaderTextColor;
/**
 * Specify an attributed string to use instead of the localized string for the text of the title's subtext displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * If this value is nil, the localized string, FaceTecStrings.FaceTec_instructions_message_ready, will be used for the text of the title's subtext displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * Default is nil.
 */
@property (nonatomic, strong) NSAttributedString * _Nullable readyScreenSubtextAttributedString;
/**
 * Font of the title's subtext displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * Note: This will override the title's subtext font configured with FaceTecGuidanceCustomization.subtextFont for the Get Ready Screen.
 * If this value is nil, FaceTecGuidanceCustomization.subtextFont will be used for the font of the title's subtext displayed on the Get Ready Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIFont * _Nullable readyScreenSubtextFont;

/**
 * Color of the title's subtext displayed on the Get Ready Screen during the New User Guidance and Retry Screens.
 * Note: This will override the title's subtext color configured with FaceTecGuidanceCustomization.foregroundColor for the Get Ready Screen.
 * If this value is nil, FaceTecGuidanceCustomization.foregroundColor will be used for the color of the title's subtext displayed on the Get Ready Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIColor * _Nullable readyScreenSubtextTextColor;
/**
 * Specify an attributed string to use instead of the localized string for the text of the title displayed on the first Retry Screen.
 * If this value is nil, the localized string, FaceTecStrings.FaceTec_retry_header, will be used for the text of the title displayed on the first Retry Screen.
 * Default is nil.
 */
@property (nonatomic, strong) NSAttributedString * _Nullable retryScreenHeaderAttributedString;
/**
 * Font of the title's text displayed on the first Retry Screen.
 * Note: This will override the header font configured with FaceTecGuidanceCustomization.headerFont for the first Retry Screen.
 * If this value is nil, FaceTecGuidanceCustomization.headerFont will be used for the font of the title's text displayed on the first Retry Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIFont * _Nullable retryScreenHeaderFont;

/**
 * Color of the header text displayed on the first Retry Screen.
 * Note: This will override the header text color configured with FaceTecGuidanceCustomization.foregroundColor for the first Retry Screen.
 * If this value is nil, FaceTecGuidanceCustomization.foregroundColor will be used for the color of the title's text displayed on the first Retry Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIColor * _Nullable retryScreenHeaderTextColor;
/**
 * Specify an attributed string to use instead of the localized string for the text of the title's subtext displayed on the first Retry Screen.
 * If this value is nil, the localized strings, FaceTecStrings.FaceTec_retry_subheader_message, will be used for the text of the title's subtext displayed on the first Retry Screen.
 * Default is nil.
 */
@property (nonatomic, strong) NSAttributedString * _Nullable retryScreenSubtextAttributedString;
/**
 * Font of the title's subtext and messages displayed on the first Retry Screen.
 * Note: This will override the font of the title's subtext and messages configured with FaceTecGuidanceCustomization.subtextFont for the first Retry Screen.
 * If this value is nil, FaceTecGuidanceCustomization.subtextFont will be used for the font of the title's subtext and messages displayed on the first Retry Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIFont * _Nullable retryScreenSubtextFont;

/**
 * Color of the title's subtext and messages displayed on the first Retry Screen.
 * Note: This will override the title's subtext and message color configured with FaceTecGuidanceCustomization.foregroundColor for the first Retry Screen.
 * If this value is nil, FaceTecGuidanceCustomization.foregroundColor will be used for the color of the title's subtext displayed on the first Retry Screen.
 * Default value is nil.
 */
@property (nonatomic, strong) UIColor * _Nullable retryScreenSubtextTextColor;
/**
 * Font of the action button's text during the New User Guidance and Retry Screens.
 * Default is a bold system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull buttonFont;

/**
 * Background color of the Get Ready Screen text views during the New User Guidance and Retry Screens.
 * This will only be visible on iPhone 4/4s models.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull readyScreenTextBackgroundColor;
/**
 * Background corner radius of the Get Ready Screen text views during the New User Guidance and Retry Screens.
 * This will only be visible on iPhone 4/4s models.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int readyScreenTextBackgroundCornerRadius;
/**
 * Color of the Get Ready Screen's oval fill.
 * Default is transparent.
 */
@property (nonatomic, strong) UIColor * _Nonnull readyScreenOvalFillColor;
/**
 * Image displayed as Ideal example (right image) during the first Retry Screen.
 * Default is configured to use image named 'FaceTec_ideal' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable retryScreenIdealImage;
/**
 * Images displayed as Ideal examples (right image) during the first Retry Screen.
 * When configured to a non-empty array, these images will override the single image configured for FaceTecGuidanceCustomization.retryScreenIdealImage.
 * Default is an empty array.
 */
@property (nonatomic, strong) NSArray<UIImage *> * _Nullable retryScreenSlideshowImages;
/**
 * Control the time, in milliseconds, that each image is shown for before transitioning to the next image.
 * Default is 1500.
 */
@property (nonatomic) int retryScreenSlideshowInterval;
/**
 * Control whether to allow the slideshow images to appear in a randomized order during each Retry Screen.
 * Default is true (enabled).
 */
@property (nonatomic) BOOL enableRetryScreenSlideshowShuffle;
/**
 * Color of the image borders during the first Retry Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull retryScreenImageBorderColor;
/**
 * Thickness of the image borders during the first Retry Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int retryScreenImageBorderWidth;
/**
 * Corner radius of the image borders during the first Retry Screen.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int retryScreenImageCornerRadius;
/**
 * Color of the oval's stroke that overlay's the Ideal image example during the first Retry Screen.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull retryScreenOvalStrokeColor;

/**
 * Image displayed on the Camera Permissions Screen.
 * Default is configured to use image named 'FaceTec_camera' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable cameraPermissionsScreenImage;
- (nonnull instancetype) init;
@end

/**
 * Customize the Result Screen.
 * Shown for server-side work and response handling.
 */
__attribute__((visibility("default")))
@interface FaceTecResultScreenCustomization : NSObject
/**
 * Control the size of the activity indicator and result animations displayed on the Result Screen.
 * This value represents the scaling factor that will be applied to the default animation bounds.
 * This value has to be between 0.5 and 1.5. If it’s lower than 0.5 or higher than 1.5, it will be defaulted to 0.5 or 1.5 respectively.
 * Default value is 1.
 */
@property (nonatomic) float animationRelativeScale;
/**
 * Color of the Result Screen's background.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull backgroundColors;
/**
 * Color of the text displayed on the Result Screen.
 * Default is black.
 */
@property (nonatomic, strong) UIColor * _Nonnull foregroundColor;
/**
 * Font of the message text displayed on the Result Screen.
 * Default is a system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull messageFont;

/**
 * Color of the activity indicator animation shown during server-side work.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull activityIndicatorColor;
/**
 * Image displayed and rotated during server-side work.
 * If image is configured, default activity indicator will be hidden.
 * Default is set to nil and will fallback to using the default activity indicator animation, which respects the color assigned to .activityIndicatorColor.
 */
@property (nonatomic, strong) UIImage * _Nullable customActivityIndicatorImage;
/**
 * Control the speed of the rotation for your custom activity indicator image.
 * Only applicable when image is configured for .customActivityIndicatorImage.
 * This value indicates the duration of each full rotation (in milliseconds).
 * Default is 1000.
 */
@property (nonatomic) int customActivityIndicatorRotationInterval;
/**
 * Color of the result animation's background.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull resultAnimationBackgroundColor;
/**
 * Color of the result animation's accent color.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull resultAnimationForegroundColor;
/**
 * Image displayed behind the result foreground animation for success scenarios.
 * If image is configured, default result background animation will be hidden.
 * Default is set to nil and will fallback to using the default result background animation, which respects the color assigned to .resultAnimationBackgroundColor.
 */
@property (nonatomic, strong) UIImage * _Nullable resultAnimationSuccessBackgroundImage;
/**
 * Image displayed behind the result foreground animation for unsuccess scenarios. Unsuccess result animations are only shown for unsuccessful Photo ID Match attempts.
 * If image is configured, default result background animation will be hidden.
 * Default is set to nil and will fallback to using the default result background animation, which respects the color assigned to .resultAnimationBackgroundColor.
 */
@property (nonatomic, strong) UIImage * _Nullable resultAnimationUnsuccessBackgroundImage;
/**
 * Control whether to show or hide the upload progress bar during server-side work.
 * Default is true (shown).
 */
@property (nonatomic) BOOL showUploadProgressBar;
/**
 * Color of the upload progress bar's fill.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull uploadProgressFillColor;
/**
 * Color of upload progress bar's track.
 * Default is a semi-opaque shade of black.
 */
@property (nonatomic, strong) UIColor * _Nonnull uploadProgressTrackColor;
/**
 * Controls the length of time to display the Result Screen result animation after being transitioned in and before being transitioned out.
 * Value is in seconds. This value has to be between 1.5 and 3.0. If it’s lower than 1.5 or higher than 3.0, it will be defaulted to 1.5 or 3.0 respectively.
 * Default is 2.
 */
@property (nonatomic) double resultAnimationDisplayTime;
- (nonnull instancetype) init;
@end

/**
 * Customize the Oval and the Progress Spinner animations.
 */
__attribute__((visibility("default")))
@interface FaceTecOvalCustomization : NSObject
/**
 * Color of the Oval outline.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull strokeColor;
/**
 * Thickness of the Oval outline.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int strokeWidth;
/**
 * Color of the animated Progress Spinner strokes.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull progressColor1;
@property (nonatomic, strong) UIColor * _Nonnull progressColor2;
/**
 * Radial offset of the animated Progress Spinner strokes relative to the outermost bounds of the Oval outline.
 * As this value increases, the Progress Spinner stroke animations move closer toward the Oval's center.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int progressRadialOffset;
/**
 * Thickness of the animated Progress Spinner strokes.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int progressStrokeWidth;
- (nonnull instancetype) init;
@end

/**
 * Customize the Feedback Bar.
 */
__attribute__((visibility("default")))
@interface FaceTecFeedbackCustomization : NSObject
/**
 * Shadow displayed behind the Feedback Bar.
 * This customization can be set to nil for no shadow, or it can be set to an instance of FaceTecShadow.
 * Note: FaceTecShadow's configurable properties correlate to the shadow-related attributes available for CALayer objects.
 * Default is a custom sized black shadow.
 */
@property (nonatomic) FaceTecShadow * _Nullable shadow;
/**
 * Corner radius of the Feedback Bar.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int cornerRadius;

/**
 * Color of the text displayed within the Feedback Bar.
 * Default is white.
 */
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/**
 * Font of the text displayed within the Feedback Bar.
 * Default is system font.
 */
@property (nonatomic) UIFont * _Nonnull textFont;
/**
 * Control whether to enable the pulsating-text animation within the Feedback Bar.
 * Default is true (enabled).
 */
@property (nonatomic) BOOL enablePulsatingText;
/**
 * Color of the Feedback Bar's background. Recommend making this have some transparency.
 * Default is custom color.
 */
@property (nonatomic, strong) CAGradientLayer * _Nonnull backgroundColor;
- (nonnull instancetype) init;
@end

/**
 * Customize the Frame.
 */
__attribute__((visibility("default")))
@interface FaceTecFrameCustomization : NSObject
/**
 * Shadow displayed behind the Frame.
 * This customization can be set to nil for no shadow, or it can be set to an instance of FaceTecShadow.
 * Note: FaceTecShadow's configurable properties correlate to the shadow-related attributes available for CALayer objects.
 * Default is nil (no shadow).
 */
@property (nonatomic) FaceTecShadow * _Nullable shadow;
/**
 * Corner radius of the Frame.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int cornerRadius;
/**
 * Thickness of the Frame's border.
 * Default is dynamically configured per device at runtime.
 */
@property (nonatomic) int borderWidth;
/**
 * Color of the Frame's border.
 * Default is custom color.
 */
@property (nonatomic) UIColor * _Nonnull borderColor;
/**
 * Color of the background surrounding the oval outline during session.
 * Default is custom color.
 */
@property (nonatomic) UIColor * _Nonnull backgroundColor;
- (nonnull instancetype) init;
@end

/**
 * Customize the Cancel Button.
 * Shown during New User Guidance, Retry, and Photo ID Match Screens.
 */
__attribute__((visibility("default")))
@interface FaceTecCancelButtonCustomization : NSObject
/**
 * Image displayed on the Cancel Button.
 * Default is configured to use image named 'FaceTec_cancel' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable customImage;
/**
 * Location, or use, of the Cancel Button.
 * Default is ButtonLocationTopLeft.
 */
@property (nonatomic) enum FaceTecCancelButtonLocation location;
/**
 * The frame of the cancel button within the current screen's bounds.
 * Note: In order to use a custom-located cancel button, you MUST set .location to the enum value FaceTecCancelButtonLocationCustom.
 * Default is a CGRect at origin 0,0 with a size of 0 by 0.
 */
@property (nonatomic) CGRect customLocation;
/**
 * Control whether to disable and hide the cancel button on the Camera Permissions Screen.
 * Default is true (hidden).
 */
@property (nonatomic) BOOL hideForCameraPermissions;

- (nonnull instancetype) init;
@end

/**
 * Customize the Overlay.
 * The Overlay separates the Interface from the presenting application, covering the device's full screen.
 */
__attribute__((visibility("default")))
@interface FaceTecOverlayCustomization : NSObject
/**
 * Color of the Overlay background.
 * Default is transparent.
 */
@property (nonatomic, copy) UIColor * _Nonnull backgroundColor;
/**
 * Image displayed below the Frame on top of the Overlay.
 * Default is configured to use image named 'FaceTec_your_app_logo' located in application's Assets folder.
 */
@property (nonatomic, strong) UIImage * _Nullable brandingImage;
/**
 * Control whether to show the branding image below the Frame on top of the Overlay.
 * Default is true (shown).
 */
@property (nonatomic) BOOL showBrandingImage;
- (nonnull instancetype) init;
@end

/**
 * Customize Vocal Guidance.
 */
__attribute__((visibility("default")))
@interface FaceTecVocalGuidanceCustomization : NSObject
/**
 * Set Vocal Guidance Mode
 * Default is FaceTecVocalGuidanceMode.MinimalVocalGuidance
 */
@property (nonatomic) enum FaceTecVocalGuidanceMode mode;

/**
 * The sound file for "Please Frame Your Face In The Oval"
 * Default uses a FaceTec internal sound file.
 */
@property (nonatomic) NSString * _Nonnull pleaseFrameYourFaceInTheOvalSoundFile;

/**
 * The sound file for "Please Move Closer"
 * Default uses a FaceTec internal sound file.
 */
@property (nonatomic) NSString * _Nonnull pleaseMoveCloserSoundFile;

/**
 * The sound file for "Please Retry"
 * Default uses a FaceTec internal sound file.
 */
@property (nonatomic) NSString * _Nonnull pleaseRetrySoundFile;

/**
 * The sound file for "Uploading"
 * Default uses a FaceTec internal sound file.
 */
@property (nonatomic) NSString * _Nonnull uploadingSoundFile;

/**
 * The sound file for "FaceScan Successful"
 * Default uses a FaceTec internal sound file.
 */
@property (nonatomic) NSString * _Nonnull facescanSuccessfulSoundFile;

/**
 * The sound file for "Please Press The Button To Start"
 * Default uses a FaceTec internal sound file.
 */
@property (nonatomic) NSString * _Nonnull pleasePressTheButtonToStartSoundFile;

- (nonnull instancetype) init;
@end

/**
 * Customize the Securing Camera Screen.
 * Shown when securely loading and opening the camera before a Session.
 * Note: This is currently only shown when doing a Photo ID Scan Only Session.
 */
__attribute__((visibility("default")))
@interface FaceTecInitialLoadingAnimationCustomization : NSObject
/**
 * Control the size of the animation displayed on the Securing Camera Screen.
 * This value represents the scaling factor that will be applied to the default animation bounds.
 * This value has to be between 0.5 and 1.5. If it’s lower than 0.5 or higher than 1.5, it will be defaulted to 0.5 or 1.5 respectively.
 * Default value is 1.
 */
@property (nonatomic) float animationRelativeScale;
/**
 * Color of the Securing Camera Screen's background.
 * Default is white.
 */
@property (nonatomic, copy) NSArray<UIColor *> * _Nonnull backgroundColors;
/**
 * Color of the text displayed on the Securing Camera Screen.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull foregroundColor;
/**
 * Font of the message text displayed on the Securing Camera Screen.
 * Default is a system font.
 */
@property (nonatomic, strong) UIFont * _Nonnull messageFont;
/**
 * Color of the Securing Camera animation's background.
 * Default is off-white  color.
 */
@property (nonatomic, strong) UIColor * _Nonnull defaultAnimationBackgroundColor;
/**
 * Color of the Securing Camera animation's accent color.
 * Default is custom color.
 */
@property (nonatomic, strong) UIColor * _Nonnull defaultAnimationForegroundColor;
- (nonnull instancetype) init;
@end

enum FaceTecSDKStatus : NSInteger;
enum FaceTecSessionStatus: NSInteger;
enum FaceTecIDScanStatus: NSInteger;
enum FaceTecIDScanNextStep: NSInteger;

@class UIViewController;
@protocol FaceTecFaceScanProcessorDelegate;
@protocol FaceTecFaceScanResultCallback;
@protocol FaceTecIDScanProcessorDelegate;
@protocol FaceTecIDScanResultCallback;

/**
 The FaceTecSDKProtocol exposes methods the app can use to configure the behavior of FaceTec SDK.
 */
@protocol FaceTecSDKProtocol

/**
 Initialize the FaceTec SDK using your Device SDK Key Identifier  for online validation.
 This <em>must</em> be called at least once by the application before invoking any SDK operations.
 This function may be called repeatedly without harm.
 
 @param deviceKeyIdentifier Identifies the client for determination of Device SDK Key Identifier capabilities
 @param faceScanEncryptionKey The encryption key to be used for FaceTec Server FaceScan
 @param completion Callback after Device SDK Key Identifier validation has completed
 */
- (void)initializeInDevelopmentMode:(NSString * _Nonnull)deviceKeyIdentifier faceScanEncryptionKey:(NSString * _Nonnull)faceScanEncryptionKey completion:(void (^ _Nullable)(BOOL))completion NS_SWIFT_NAME(initializeInDevelopmentMode(deviceKeyIdentifier:faceScanEncryptionKey:completion:));

/**
 Initialize the FaceTec SDK using your Production Key Text file for offline validation.
 This <em>must</em> be called at least once by the application before invoking any SDK operations.
 This function may be called repeatedly without harm.
 
 @param productionKeyText The string contents of the Production Key Text file
 @param deviceKeyIdentifier Identifies the client
 @param faceScanEncryptionKey The encryption key to be used for FaceTec Server FaceScan
 @param completion Callback after the validation has completed
 */
- (void)initializeInProductionMode:(NSString * _Nonnull)productionKeyText deviceKeyIdentifier:(NSString * _Nonnull)deviceKeyIdentifier faceScanEncryptionKey:(NSString * _Nonnull)faceScanEncryptionKey completion:(void (^ _Nullable)(BOOL))completion NS_SWIFT_NAME(initializeInProductionMode(productionKeyText:deviceKeyIdentifier:faceScanEncryptionKey:completion:));

/**
 Release resources related to FaceTec SDK.
 Initialize <em>must</em>  be called again by the application before invoking any SDK operations.
 This function may be called repeatedly without harm.
 */
- (void)deinitialize;

/**
 Configures the look and feel of FaceTec SDK.

 @param customization An instance of FaceTecCustomization
 */
- (void)setCustomization:(FaceTecCustomization * _Nonnull)customization;

/**
 Configures the look and feel when low light mode is active. If not configured or set to nil, we will fallback to using the FaceTecCustomization instance configured with setCustomization(), or our default customizations if setCustomization() has not been called.

 @param lowLightCustomization An instance of FaceTecCustomization or nil
 */
- (void)setLowLightCustomization:(FaceTecCustomization * _Nullable)lowLightCustomization NS_SWIFT_NAME(setLowLightCustomization(_:));

/**
 Configures the look and feel when dynamic dimming is active. If not configured or set to nil, we will fallback to using the FaceTecCustomization instance configured with setCustomization(), or our default customizations if setCustomization() has not been called.

 @param dynamicDimmingCustomization An instance of FaceTecCustomization or nil
 */
- (void)setDynamicDimmingCustomization:(FaceTecCustomization * _Nullable)dynamicDimmingCustomization NS_SWIFT_NAME(setDynamicDimmingCustomization(_:));

/**
 Returns the current status of the FaceTec SDK.
 @return FaceTecSDKStatusInitialized, if ready to be used.
 */
- (enum FaceTecSDKStatus)getStatus;

/**
 Convenience method to get the time when a lockout will end.
 This will be null if the user is not locked out
 @return NSDate
 */
- (NSDate * _Nullable)getLockoutEndTime;

/**
 * @return True if the user is locked out of FaceTec SDK
 */
- (BOOL)isLockedOut;

/**
 * @deprecated - This API method is deprecated and will be removed in an upcoming release of the iOS SDK. Use the non-deprecated deinitialize API method instead.
 Unload resources related to FaceTec SDK.
 */
- (void)unload DEPRECATED_MSG_ATTRIBUTE("This API method is deprecated and will be removed in an upcoming release of the iOS SDK. Use the non-deprecated deinitialize API method instead.");

/**
 Convenience method to check for camera permissions.
 This function is used to check the camera permission status prior to using FaceTec SDK.  If camera permission has not been previously granted,
 FaceTec SDK will display a UI asking the user to allow permission.  Some applications may wish to manage camera permission themselves - those applications
 should verify camera permissions prior to transitioning to FaceTec SDK.

 @return Value representing the current camera permission status
 */
@property (nonatomic, readonly) enum FaceTecCameraPermissionStatus cameraPermissionStatus;

/** Sets a preferred language to be used for all strings. */
- (void)setLanguage:(NSString * _Nonnull)language;

/**
 Configure where the FaceTec SDK looks for custom localized strings.
 @param table Optional name of the string table to look in.  By default, this is "FaceTec" and string will be read from FaceTec.strings.
 @param bundle Optional NSBundle instance to search for FaceTec SDK string definitions in.  This will be searched after the main bundle and before FaceTec SDK's default strings.
 */
- (void)configureLocalizationWithTable:(NSString * _Nullable)table bundle:(NSBundle * _Nullable)bundle;

/**
 Configure the custom localized strings to be used for groups, fields, and placeholder text on ID Scan's User OCR Confirmation Screen.
 @param dictionary Optional dictionary created from a JSON that follows our template file of configurable groups, fields, and placeholder texts: "FaceTec_OCR_Customization.json".  By default, this is nil and the strings used will be our internal defaults.
 */
- (void)configureOCRLocalizationWithDictionary:(NSDictionary * _Nullable)dictionary NS_SWIFT_NAME(configureOCRLocalization(dictionary:));

/**
 Configure where the FaceTec SDK looks for custom FaceTec images. If you use this API, you MUST call this function prior to initializing the FaceTecCustomization object.
@param bundle Optional NSBundle instance to search for FaceTec images.
*/
- (void)setBundleForFaceTecImages:(NSBundle * _Nullable)bundle;

/**
 Sets the type of audit trail images to be collected.
 If this property is not set to Disabled, then FaceTec SDK  will include a sample of some of the camera frames collected during the session.
 */
@property (nonatomic) enum FaceTecAuditTrailType auditTrailType;

/**
 Fetches the version number of the current FaceTec SDK release
 
 @return Version number of sdk release package
 */
@property (nonatomic, readonly, copy) NSString * _Nonnull version;


/**
 * Max Audit Trail Images To Return
 * By default one audit trail image will be returned
 */
- (void)setMaxAuditTrailImages:(FaceTecAuditTrailImagesToReturn)auditTrailImagesToReturn;

/**
 * Method to create a valid string to pass as the value for the User-Agent header when calling the FaceTec Managed API.
 * @param sessionId Unique Id for a session. This can be obtained from FaceTecSessionResult.
 * @return a string that can be used as the value for the User-Agent header.
 */
- (NSString * _Nonnull)createFaceTecAPIUserAgentString:(NSString * _Nonnull)sessionId;

/**
 Configures and returns a new UIViewController for a session with a FaceTecFaceScanProcessor.
 Caller should call presentViewController on returned object only once.

 @param faceScanProcessorDelegate The delegate to process FaceScan
*/
- (UIViewController * _Nonnull)createSessionVCWithFaceScanProcessor:(id <FaceTecFaceScanProcessorDelegate> _Nullable)faceScanProcessorDelegate
    NS_SWIFT_NAME(createSessionVC(faceScanProcessorDelegate:));

/**
 Configures and returns a new UIViewController for a session with a FaceTecIDScanProcessorDelegate.
 Caller should call presentViewController on returned object only once.

 @param idScanProcessorDelegate The delegate to process IDScan
*/
- (UIViewController * _Nonnull)createSessionVCWithIDScanProcessor:(id <FaceTecIDScanProcessorDelegate> _Nullable)idScanProcessorDelegate
    NS_SWIFT_NAME(createSessionVC(idScanProcessorDelegate:));

/**
 Configures and returns a new UIViewController for a session with a FaceTecFaceScanProcessor.
 Caller should call presentViewController on returned object only once.

 @param faceScanProcessorDelegate The delegate to process FaceScan.
 @param sessionToken A Server session token
*/
- (UIViewController * _Nonnull)createSessionVCWithFaceScanProcessor:(id <FaceTecFaceScanProcessorDelegate> _Nullable)faceScanProcessorDelegate sessionToken:(NSString *_Nonnull)sessionToken
    NS_SWIFT_NAME(createSessionVC(faceScanProcessorDelegate:sessionToken:));

/**
 Configures and returns a new UIViewController for a session with a FaceTecIDScanProcessorDelegate.
 Caller should call presentViewController on returned object only once.

 @param idScanProcessorDelegate The delegate to process FaceScan.
 @param sessionToken A Server session token
*/
- (UIViewController * _Nonnull)createSessionVCWithIDScanProcessor:(id <FaceTecIDScanProcessorDelegate> _Nullable)idScanProcessorDelegate sessionToken:(NSString *_Nonnull)sessionToken
    NS_SWIFT_NAME(createSessionVC(idScanProcessorDelegate:sessionToken:));

/**
 Configures and returns a new UIViewController for a session with a FaceTecFaceScanProcessor and FaceTecIDScanProcessor.
 Caller should call presentViewController on returned object only once.

 @param faceScanProcessorDelegate The delegate to process FaceScan.
 @param idScanProcessorDelegate The delegate to process ID scans.
*/
- (UIViewController * _Nonnull)createSessionVCWithFaceScanProcessor:(id <FaceTecFaceScanProcessorDelegate> _Nullable)faceScanProcessorDelegate idScanProcessorDelegate:(id <FaceTecIDScanProcessorDelegate> _Nullable)idScanProcessorDelegate
    NS_SWIFT_NAME(createSessionVC(faceScanProcessorDelegate:idScanProcessorDelegate:));

/**
 Configures and returns a new UIViewController for a session with a FaceTecFaceScanProcessor and FaceTecIDScanProcessor.
 Caller should call presentViewController on returned object only once.

 @param faceScanProcessorDelegate The delegate to process FaceScan.
 @param idScanProcessorDelegate The delegate to process ID scans.
 @param sessionToken A Server session token.
*/
- (UIViewController * _Nonnull)createSessionVCWithFaceScanProcessor:(id <FaceTecFaceScanProcessorDelegate> _Nullable)faceScanProcessorDelegate idScanProcessorDelegate:(id <FaceTecIDScanProcessorDelegate> _Nullable)idScanProcessorDelegate sessionToken:(NSString *_Nonnull)sessionToken
    NS_SWIFT_NAME(createSessionVC(faceScanProcessorDelegate:idScanProcessorDelegate:sessionToken:));

/**
 Method to set dynamic overrides of the SDK's customizable string resources.
 @param strings A dictionary object mapping a string resource name (e.g. FaceTecStringKeyActionOk) to a String value.
*/
- (void)setDynamicStrings:(NSDictionary<NSString*,NSString*> * _Nonnull)strings;

/** Returns a description string for a FaceTecSessionStatus value */
- (NSString * _Nonnull)descriptionForSessionStatus:(enum FaceTecSessionStatus)status DEPRECATED_MSG_ATTRIBUTE("This API method is deprecated and will be removed in an upcoming release of the iOS SDK");

/** Returns a description string for a FaceTecSessionStatus value */
- (NSString * _Nonnull)descriptionForIDScanStatus:(enum FaceTecIDScanStatus)status DEPRECATED_MSG_ATTRIBUTE("This API method is deprecated and will be removed in an upcoming release of the iOS SDK");

/** Returns a description string for a FaceTecSDKStatus value */
- (NSString * _Nonnull)descriptionForSDKStatus:(enum FaceTecSDKStatus)status DEPRECATED_MSG_ATTRIBUTE("This API method is deprecated and will be removed in an upcoming release of the iOS SDK");
@end

/** Represents the status of the SDK */
typedef NS_ENUM(NSInteger, FaceTecSDKStatus) {
    /** Initialize was never attempted. */
    FaceTecSDKStatusNeverInitialized = 0,
    /** The Device SDK Key Identifier provided was verified. */
    FaceTecSDKStatusInitialized = 1,
    /** The Device SDK Key Identifier could not be verified due to connectivity issues on the user's device. */
    FaceTecSDKStatusNetworkIssues = 2,
    /** The Device SDK Key Identifier provided was invalid. */
    FaceTecSDKStatusInvalidDeviceKeyIdentifier = 3,
    /** This version of the FaceTec SDK is deprecated. */
    FaceTecSDKStatusVersionDeprecated = 4,
    /** The Device SDK Key Identifier needs to be verified again. */
    FaceTecSDKStatusOfflineSessionsExceeded = 5,
    /** An unknown error occurred. */
    FaceTecSDKStatusUnknownError = 6,
    /** Device is locked out due to too many failures. */
    FaceTecSDKStatusDeviceLockedOut = 7,
    /** Device is in landscape display orientation. FaceTec SDK can only be used in portrait display orientation. */
    FaceTecSDKStatusDeviceInLandscapeMode = 8,
    /** Device is in reverse portrait mode. FaceTec SDK can only be used in portrait display orientation. */
    FaceTecSDKStatusDeviceInReversePortraitMode = 9,
    /** Device SDK Key Identifie was expired, contained invalid text, or you are attempting to initialize in an App that is not specified in your Device SDK Key Identifier. */
    FaceTecSDKStatusKeyExpiredOrInvalid,
    /** The provided public encryption key is missing or invalid. */
    FaceTecSDKStatusEncryptionKeyInvalid,
};

@protocol FaceTecSessionResult;
@protocol FaceTecIDScanResult;
enum FaceTecSessionStatus : NSInteger;

/**
 FaceTecFaceScanProcessorDelegate
 */
@protocol FaceTecFaceScanProcessorDelegate <NSObject>
- (void)processSessionWhileFaceTecSDKWaits:(id<FaceTecSessionResult> _Nonnull)sessionResult faceScanResultCallback:(id<FaceTecFaceScanResultCallback> _Nonnull)faceScanResultCallback NS_SWIFT_NAME(processSessionWhileFaceTecSDKWaits(sessionResult:faceScanResultCallback:));
/**
 This method will be called exactly once after the Session has completed and when using the Session constructor with a FaceTecFaceScanProcessor.
 */
- (void)onFaceTecSDKCompletelyDone NS_SWIFT_NAME(onFaceTecSDKCompletelyDone());
@end

/**
 FaceTecIDScanProcessorDelegate
 */
@protocol FaceTecIDScanProcessorDelegate <NSObject>
- (void)processIDScanWhileFaceTecSDKWaits:(id<FaceTecIDScanResult> _Nonnull)idScanResult idScanResultCallback:(id<FaceTecIDScanResultCallback> _Nonnull)idScanResultCallback NS_SWIFT_NAME(processIDScanWhileFaceTecSDKWaits(idScanResult:idScanResultCallback:));
/**
 This method will be called exactly once after the Session has completed and when using the Session constructor with a FaceTecFaceScanProcessor.
 */
- (void)onFaceTecSDKCompletelyDone NS_SWIFT_NAME(onFaceTecSDKCompletelyDone());
@end


/**
 FaceTecFaceScanResultCallback
 */
@protocol FaceTecFaceScanResultCallback <NSObject>
- (void)onFaceScanUploadMessageOverride:(NSMutableAttributedString * _Nonnull)uploadMessageOverride NS_SWIFT_NAME(onFaceScanUploadMessageOverride(uploadMessageOverride:));
- (void)onFaceScanUploadProgress:(float)uploadedPercent NS_SWIFT_NAME(onFaceScanUploadProgress(uploadedPercent:));
- (void)onFaceScanResultSucceed NS_SWIFT_NAME(onFaceScanResultSucceed()) DEPRECATED_MSG_ATTRIBUTE("This method has been replaced by onFaceScanResultProceedToNextStep()");
- (void)onFaceScanResultSucceedWithIDScanNextStep:(enum FaceTecIDScanNextStep)idScanNextStep NS_SWIFT_NAME(onFaceScanResultSucceedWithIDScanNextStep(idScanNextStep:)) DEPRECATED_MSG_ATTRIBUTE("This method has been replaced by onFaceScanResultProceedToNextStep()");
- (void)onFaceScanResultRetry NS_SWIFT_NAME(onFaceScanResultRetry()) DEPRECATED_MSG_ATTRIBUTE("This method has been replaced by onFaceScanResultProceedToNextStep()");
- (void)onFaceScanResultCancel NS_SWIFT_NAME(onFaceScanResultCancel());
- (BOOL)onFaceScanResultProceedToNextStep:(NSString * _Nonnull)scanResultBlob NS_SWIFT_NAME(onFaceScanGoToNextStep(scanResultBlob:));
- (BOOL)onFaceScanResultProceedToNextStep:(NSString * _Nonnull)scanResultBlob idScanNextStep:(enum FaceTecIDScanNextStep)idScanNextStep NS_SWIFT_NAME(onFaceScanGoToNextStep(scanResultBlob:idScanNextStep:));
@end

/**
 FaceTecIDScanResultCallback
 */
@protocol FaceTecIDScanResultCallback <NSObject>
- (void)onIDScanUploadMessageOverride:(NSMutableAttributedString * _Nonnull)uploadMessageOverride NS_SWIFT_NAME(onIDScanUploadMessageOverride(uploadMessageOverride:));
- (void)onIDScanUploadProgress:(float)uploadedPercent NS_SWIFT_NAME(onIDScanUploadProgress(uploadedPercent:));
- (BOOL)onIDScanResultProceedToNextStep:(NSString * _Nonnull)scanResultBlob NS_SWIFT_NAME(onIDScanResultProceedToNextStep(scanResultBlob:));
- (void)onIDScanResultCancel NS_SWIFT_NAME(onIDScanResultCancel());
@end

/** Represents results of a  Request */
@protocol FaceTecSessionResult <NSObject>
/** Indicates whether the Session was completed successfully or the cause of the unsuccess. */
@property (nonatomic, readonly) enum FaceTecSessionStatus status;
/** Returns the Audit Trail Images as an array of base64 encoded JPG images. This should be considered the new default method of getting the Audit Trail Images.
 *  There are multiple advantages of using this new function. auditTrailCompressedBase64 provides a consistent API across all supported FaceTec SDK  platforms to
 *  get a compressed set of images that will not overly load user bandwidth and also provides images that are usable in the Audit Trail Verification API.
 */
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable auditTrailCompressedBase64;
/** The Low Quality Audit Trail is a collection of images from the session that are likely partly responsible for the session not succeeding.
 *  The Low Quality Audit Trail finds images that can be displayed to the user that will be intuitively indicative of the reason for the session not completing successfully.
 */
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable lowQualityAuditTrailCompressedBase64;
/**
 * The 3D FaceScan generated from the User Session that was just performed.  faceScan is the raw binary and faceScanBase64 is the base64-encoded version.
 *  For more information about 3D FaceScans, please see the Developer Documentation.
 */
@property (nonatomic, readonly, copy) NSData * _Nullable faceScan;
/**
 * The 3D FaceScan generated from the User Session that was just performed.  faceScan is the raw binary and faceScanBase64 is the base64-encoded version.
 *  For more information about 3D FaceScans, please see the Developer Documentation.
 */
@property (nonatomic, readonly, copy) NSString * _Nullable faceScanBase64;
/** Unique id for a Session. */
@property (nonatomic, readonly, copy) NSString * _Nonnull sessionId;
@end

/** Represents results of a FaceTec ID Scan */
@protocol FaceTecIDScanResult <NSObject>
/** Indicates whether the ID Scan succeeded or the cause of failure. */
@property (nonatomic, readonly) enum FaceTecIDScanStatus status;
/** High resolution samples of the front images as compressed Base64 of the Photo ID that can be used for Auditing and Identity Verification. */
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable frontImagesCompressedBase64;
/** High resolution samples of the back images as compressed Base64 of the Photo ID that can be used for Auditing and Identity Verification. */
@property (nonatomic, readonly, copy) NSArray<NSString *> * _Nullable backImagesCompressedBase64;
/** ID Scan Data. */
@property (nonatomic, readonly, copy) NSData * _Nullable idScan;
/** ID Scan Data as base64 encoded string. */
@property (nonatomic, readonly, copy) NSString * _Nullable idScanBase64;
/** A unique ID for the ID Scan. */
@property (nonatomic, readonly, copy) NSString * _Nullable sessionId;
@end

/** Represents the various end states of a Session */
typedef NS_ENUM(NSInteger, FaceTecSessionStatus) {
    /**
     The Session was performed successfully and a FaceScan was generated.  Pass the FaceScan to  Server for further processing.
     */
    FaceTecSessionStatusSessionCompletedSuccessfully,
    /**
     The Session was not performed successfully and a FaceScan was not generated.  In general, other statuses will be sent to the developer for specific unsuccess reasons.
     */
    FaceTecSessionStatusSessionUnsuccessful,
    /**
     The user pressed the cancel button and did not complete the Session.
     */
    FaceTecSessionStatusUserCancelled,
    /**
     This status will never be returned in a properly configured or production app.
     This status is returned if your Device SDK Key Identifier is invalid or network connectivity issues occur during a session when the application is not in production.
     */
    FaceTecSessionStatusNonProductionModeKeyInvalid,
    /**
     The camera access is prevented because either the user has explicitly denied permission or the user's device is configured to not allow access by a device policy.
     For more information on restricted by policy case, please see the the Apple Developer documentation on AVAuthorizationStatus.restricted.
     */
    FaceTecSessionStatusCameraPermissionDenied,
    /**
     The Session was cancelled due to the app being terminated, put to sleep, an OS notification, or the app was placed in the background.
     */
    FaceTecSessionStatusContextSwitch,
    /**
     The Session was cancelled because device is in landscape mode.
     The user experience of devices in these orientations is poor and thus portrait is required.
     */
    FaceTecSessionStatusLandscapeModeNotAllowed,
    /**
     The Session was cancelled because device is in reverse portrait mode.
     The user experience of devices in these orientations is poor and thus portrait is required.
     */
    FaceTecSessionStatusReversePortraitNotAllowed,
    /**
     The Session was cancelled because the user was unable to complete a Session in the default allotted time or the timeout set by the developer.
     */
    FaceTecSessionStatusTimeout,
    /**
     The Session was cancelled due to memory pressure.
     */
    FaceTecSessionStatusLowMemory,
    /**
     The Session was cancelled because your App is not in production and requires a network connection.
     */
    FaceTecSessionStatusNonProductionModeNetworkRequired,
    /**
     The Session was cancelled because your key needs to be validated again.
     */
    FaceTecSessionStatusGracePeriodExceeded,
    /**
     The Session was cancelled because the developer-configured encryption key was not valid.
     */
    FaceTecSessionStatusEncryptionKeyInvalid,
    /**
     The Session was cancelled because not all guidance images were configured.
     */
     FaceTecSessionStatusMissingGuidanceImages,
    /**
     The Session was cancelled because FaceTec SDK was unable to start the camera on this device.
     */
     FaceTecSessionStatusCameraInitializationIssue,
    /**
     The Session was cancelled because the user was in a locked out state.
     */
    FaceTecSessionStatusLockedOut,
    /**
     The Session was cancelled because of an unknown and unexpected error.  FaceTec SDK leverages a variety of iOS APIs including camera, storage, security, networking, and more.
     This return value is a catch-all for errors experienced during normal usage of these APIs.
     */
    FaceTecSessionStatusUnknownInternalError,
    /**
     The Session cancelled because user pressed the Get Ready screen subtext message.
     Note: This functionality is not available by default, and must be requested from FaceTec in order to enable.
     */
    FaceTecSessionStatusUserCancelledViaClickableReadyScreenSubtext,
    /**
     A session token was either not provided or it has expired.
     */
    FaceTecSessionStatusSessionExpired,
};

/** Represents the various end states of an ID Scan Session */
typedef NS_ENUM(NSInteger, FaceTecIDScanStatus) {
    /**
     The ID Scan was performed successfully and identity document data was generated.
     */
    FaceTecIDScanStatusSuccess,
    /**
     The ID Scan was not performed successfully and identity document data was not generated.
     In general, other statuses will be sent to the developer for specific unsuccess reasons.
     */
    FaceTecIDScanStatusUnsuccess,
    /**
     The user pressed the cancel button and did not complete the ID Scan process.
     */
    FaceTecIDScanStatusUserCancelled,
    /**
     The ID Scan was cancelled because the user was unable to complete an ID Scan in the default allotted time or the timeout set by the developer.
     */
    FaceTecIDScanStatusTimedOut,
    /**
     The ID Scan was cancelled due to the app being terminated, put to sleep, an OS notification, or the app was placed in the background.
     */
    FaceTecIDScanStatusContextSwitch,
    /**
     The ID Scan was cancelled due to an internal camera error.
     */
    FaceTecIDScanStatusCameraError,
    /**
     The ID Scan was cancelled because a network connection is required.
     */
    FaceTecIDScanStatusNetworkError,
    /**
     ID Scan cancelled because device is in landscape mode.
     The user experience of devices in these orientations is poor and thus portrait is required.
     */
    FaceTecIDScanStatusLandscapeModeNotAllowed,
    /**
     ID Scan cancelled because device is in reverse portrait mode.
     The user experience of devices in these orientations is poor and thus portrait is required.
     */
    FaceTecIDScanStatusReversePortraitNotAllowed,
    /**
     ID Scan was skipped.
     */
    FaceTecIDScanStatusSkipped,
    /**
     ID Scan cancelled because the user was in a locked out state.
     */
    FaceTecIDScanStatusLockedOut,
    /**
     The camera access is prevented because either the user has explicitly denied permission or the user's device is configured to not allow access by a device policy.
     For more information on restricted by policy case, please see the the Apple Developer documentation on AVAuthorizationStatus.restricted.
     */
    FaceTecIDScanStatusCameraPermissionDenied
};

/**
 Describes the next step to go into during the Photo ID Match process.
 By default, when FaceTecFaceScanResultCallback.onFaceScanResultProceedToNextStep() is called, the User is taken to the ID Document Type Selection Screen.
 Passing different values of FaceTecIDScanNextStep as a parameter for FaceTecFaceScanResultCallback.onFaceScanResultProceedToNextStep() allows you to control whether to take the User to the ID Document Type Selection Screen or to  skip the ID Scan process altogether.
 You may want to skip the ID Scan process altogether if you have custom server-side logic that in some cases deems the Photo ID Match flow as not necessary.
*/
typedef NS_ENUM(NSInteger, FaceTecIDScanNextStep) {
    /**
     Start ID Scan process with showing the Selection Screen, allowing the user to select their ID document type.
     This is the default behavior.
     */
    FaceTecIDScanNextStepSelectionScreen,
    /**
     Skip the entire ID Scan process, exiting from the FaceTec SDK interface after a successful Session.
     */
    FaceTecIDScanNextStepSkip
};
