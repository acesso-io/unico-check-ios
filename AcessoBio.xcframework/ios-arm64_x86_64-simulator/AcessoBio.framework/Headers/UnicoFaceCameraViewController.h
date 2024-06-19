@import UIKit;

@import AVFoundation;
@import CoreImage;

#import "UnicoCameraViewController.h"

#import "UIImageUtils.h"
#import "UIViewWithHole.h"

@import CoreML;
@import Vision;

@import CoreMotion;

#import "AcessoBioManager.h"
#import "FaceAnalyze.h"

@class CameraBio;
@class UnicoLogoImageView;
@class SensorValuesDTO;

@protocol UnicoFaceCameraInteractorInput;

NS_ASSUME_NONNULL_BEGIN

@interface UnicoFaceCameraViewController: UnicoCameraViewController <AVCaptureVideoDataOutputSampleBufferDelegate> {
    
    BOOL isSelfie;
    UIView *rectangle;
    UIView *rectangleTop;
    UIView *rectangleLeft;
    UIView *rectangleRight;
    UILabel *labelMessage;

    int countWithNoFaceAtScreen;

    BOOL isShowAlert;
        
    UIView *viewLog;
    UILabel *lbNosePosition;
    UILabel *lbRightEye;
    UILabel *lbLeftEye;
    UILabel *lbRightEar;
    UILabel *lbLeftEar;
    UILabel *lbEulerX;
    UILabel *lbSpaceEye;
    
    NSTimer * timerCountDown;
    NSInteger countDown;
    BOOL isCountDown;

    CGFloat initialBrightness;
        
#pragma mark - GLOBAL Liveness
    //Step Liveness - Discrimina o passo atual do liveness
    BOOL isShowAlertLiveness;
    BOOL isShowAlertToLiveness;
    BOOL isLivenessComplete;
    NSDictionary *dictLivenessResultCenter;
    NSDictionary *dictLivenessResultAway;
    NSDictionary *dictLivenessResultCloser;
    NSMutableArray *arrLeftEyeOpenProbability;

    float fTotal;
    
    UIViewWithHole *vHole;
    
    UIImageView *ivAcessoBio;
    
    CGRect frameCurrent;

    CGRect frameFaceCenter;
    CGRect frameFaceAway;
    CGRect frameFaceCloser;
    
    BOOL leftEyeClosed;
    BOOL rightEyeClosed;
    
    BOOL isSuccessAnimated;
    BOOL isErrorAnimated;
    
    BOOL isProccessIA;

    UILabel *lbMessage;
    UIView *vAlert;

    UIView *viewToButtonClose;
    
    BOOL isSmillingUpponEnter;
    
    BOOL isVerifiedSmillingUpponEnter;
    
    int delayToVerifySmilling;

    BOOL isResetRunning;
    BOOL isResetSessionValidate;
    int attemptsValidate;
    
    BOOL isResetSessionSpoofing;
        
    int attemptsSpoofing;

    BOOL isResetSessionNoComputated;
    
    UILabel *lbTitleAlertCustom;
    UIView *viewAlertBlack;
    
    NSTimer *timerProcesss;
    
    NSTimer *timerToTakeCenterPhoto;
    NSTimer *timerToTakeAwayPhoto;
    NSTimer *timerToSmiling;

    int durationProcess;
    BOOL isFastProcess;
    
    BOOL isDoneValidate;
    
    BOOL isStartProcessIA;
    
    int timeToTakeCenterPhoto;
    int timeToTakeAwayPhoto;
    int timeToSmiling;
    
    // Discrimino se é para fazer a captura da foto afastada sem o sorriso (que dificulta a captura).
    BOOL isPhotoAwayToCapture;
    
    UIImageView *ivBackgroundGreen;
    
    double scoreFacedetect;
    
    UIView *vFlash;
    UIActivityIndicatorView *spinFlash;
    
    int userBlinks;
    
    int resultFaceDetectBehavior; // 1 = Face Match / 2 = Both substandard / 3 = Not match
    int resultFaceDetect; // // 1 = Face Match / 2 = Both substandard / 3 = Not match

    NSString *base64ToUsage;

    BOOL facesNoMatchInFaceDetect;

    BOOL isValidating;
    
    int SESSION;

    int TimeSessionFirst;
    int TimeSessionSecond;
    int TimeSessionThird;
    
    BOOL validateFaceDetectOK;

    BOOL isRequestWebService;

    BOOL isDoneProcess;
    
    BOOL isTakingPhoto;
    
    // Variables about popup reset
    BOOL isPopUpShow;
    
    // Luminosity
    float luminosity;
    float luminosityAway;
    float luminosityClose;

    BOOL isStartLuminositySensor;
    
    NSTimer *timerToTimoutFaceInference;
    NSTimer *timerToTimoutSession;
    
    CIFaceFeature *faceObj;
    UIImage *lastImageObj;
    
    FaceAnalyze *faceAnalyze;
    
    UnicoLogoImageView *unicoLogoImageView;
    
    BOOL isCameraTypeChanged;
    
    float captureImageWidth;
    float captureImageHeight;
    float captureImageAspectRatio;
    
    dispatch_queue_t sessionQueue;
    
    int faceBlinks;
}

#pragma mark - Properties

@property (nonatomic, strong)id<UnicoFaceCameraInteractorInput> _Nullable interactor;

// * Configurable
@property (assign, nonatomic)BOOL debug;

@property (nonatomic)UIImageView *face;
@property (nonatomic)UIImageView *frame;

@property (strong, nonatomic)NSString *proccessId;

@property (strong, nonatomic)CameraBio *cam;

@property (strong, nonatomic)UILabel *lbIInstructions;

#pragma mark liveness

@property (strong, nonatomic)NSString *base64AwayWithoutSmilling;

@property (strong, nonatomic)NSString *captureBase64;
@property (strong, nonatomic)NSString *base64Away;
@property (strong, nonatomic)NSString *base64Closer;

@property (strong, nonatomic)UIImage *imgCenter;
@property (strong, nonatomic)UIImage *imgAway;
@property (strong, nonatomic)UIImage *imgCloser;
@property (strong, nonatomic)UIImage *imgAwayWithoutSmile;

@property (assign, nonatomic)BOOL isFaceLiveness;

@property (assign, nonatomic)BOOL isLivenessSmilling;
@property (assign, nonatomic)BOOL isFinishiWithoutTheSmile;
@property (assign, nonatomic)BOOL isLivenessBlinking;

@property (strong, nonatomic)NSDictionary *dictUserLiveness;

@property (assign, nonatomic)BOOL isCommingFromResult;

#pragma mark sensors

@property (strong,nonatomic)CMMotionManager *motionManager;

@property (assign, nonatomic)BOOL isEnableAutoCapture;
@property (assign, nonatomic)BOOL isEnableSmartCapture;

@property (assign, nonatomic)BOOL isFacesCompareOneToOne;
@property (strong, nonatomic)NSString *cpfToFacesCompare;

@property(nonatomic, strong)AcessoBioManager *acessiBioManager;

@property (readwrite)double secondsTimeoutSession;

@property (strong, nonatomic)SDKConfigResponseDTOAdapter *sdkToken;

#pragma mark - Behaviors

- (void)setIsDebug :(BOOL)debug;

@end

NS_ASSUME_NONNULL_END
