//
//  CameraMain.h
//  CaptureAcesso
//
//  Created by Matheus Domingos on 20/05/19.
//  Created by unico idtech. All rights reserved.
//

@import UIKit;

@import AVFoundation;
@import CoreImage;
#import "UnicoCheck.h"
#import "DeviceUtils.h"

#define NAME_APPLICATION [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"];

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define TAB_HEIGHT self.tabBarController.tabBar.frame.size.height

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_X (IS_IPHONE && SCREEN_MAX_LENGTH == 812.0)
#define IS_IPHONE_X_OR_MORE (IS_IPHONE && SCREEN_MAX_LENGTH >= 1218.0)

#define PLATAFORM = [[[UIDevice currentDevice] systemVersion] intValue];

NS_ASSUME_NONNULL_BEGIN

@interface CameraMain : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>

@property (assign, nonatomic) UnicoCheckThemes *themesNew;

@property (strong, nonatomic)   AVCaptureVideoPreviewLayer *previewLayer;

@property (nonatomic, strong) UIButton *btTakePic;

@property (nonatomic) AVCaptureDevicePosition defaultCamera;
@property (nonatomic) AVCaptureSession *session;
@property (nonatomic) AVCaptureDeviceInput *videoDeviceInput;
@property (nonatomic) AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic) AVCaptureVideoDataOutput *dataOutput;
@property (nonatomic) AVCaptureMetadataOutput *metadataOutput;
@property (nonatomic) dispatch_queue_t sessionQueue;
@property (nonatomic) NSLock *renderLock;
@property (nonatomic) CIImage *latestFrame;

@property (nonatomic, strong) UIColor *colorButtonIcon;
@property (nonatomic, strong) UIColor *colorButtonBackground;

@property (strong, nonatomic) UnicoCheck *core;

- (AVCaptureDevice *) deviceWithMediaType:(NSString *)mediaType preferringPosition:(AVCaptureDevicePosition)position;

- (AVCaptureVideoOrientation) getCurrentOrientation;

- (void) updateOrientation:(AVCaptureVideoOrientation)orientation;

- (AVCaptureDevice *) cameraWithPosition:(AVCaptureDevicePosition) position;

- (UIImage *)converCIImageToUIImage : (CIImage *)cIImage;

- (void) setupCamera:(BOOL) isSelfie;

- (void) startCamera;
- (void) stopCamera;

- (UIColor *)getColorPrimary;

@property (readwrite) LanguageOrigin language;
@property (strong, nonatomic) NSString *versionRelease;
- (NSString *)getOrigin;

- (void)addCloseButton;
@property (strong, nonatomic) UIView *viewToButtonClose;


@end

NS_ASSUME_NONNULL_END
