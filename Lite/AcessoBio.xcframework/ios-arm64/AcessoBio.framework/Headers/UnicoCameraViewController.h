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
@class UnicoCameraMetadataOutput;
@protocol UnicoCameraMetadataOutputDelegate;

#define NAME_APPLICATION [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleDisplayName"];

#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_12_OR_MORE (IS_IPHONE && SCREEN_WIDTH >= 390.0)

#define PLATAFORM = [[[UIDevice currentDevice] systemVersion] intValue];

NS_ASSUME_NONNULL_BEGIN

@interface UnicoCameraViewController: UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, strong)id<UnicoCameraMetadataOutputDelegate> _Nullable metadataOutputDelegate;

@property (assign, nonatomic)UnicoCheckThemes *themesNew;

@property (strong, nonatomic)AVCaptureVideoPreviewLayer *previewLayer;

@property (nonatomic, strong)UIButton *btTakePic;

@property (nonatomic)AVCaptureDevicePosition devicePosition;
@property (nonatomic)AVCaptureSession *session;
@property (nonatomic)AVCaptureDeviceInput *videoDeviceInput;
@property (nonatomic)AVCaptureStillImageOutput *stillImageOutput;
@property (nonatomic)AVCaptureVideoDataOutput *dataOutput;
@property (nonatomic)AVCaptureMetadataOutput *metadataOutput;
@property (nonatomic)dispatch_queue_t sessionQueue;
@property (nonatomic)NSLock *renderLock;
@property (nonatomic)CIImage *latestFrame;

@property (nonatomic, strong)UIColor *colorButtonIcon;
@property (nonatomic, strong)UIColor *colorButtonBackground;

@property (strong, nonatomic)UnicoCheck *core;

- (AVCaptureDevice *)deviceWithMediaType:(NSString *)mediaType preferringPosition:(AVCaptureDevicePosition)position;

- (AVCaptureVideoOrientation)getCurrentOrientation;

- (void)updateOrientation:(AVCaptureVideoOrientation)orientation;

- (AVCaptureDevice * _Nullable)cameraWithPosition:(AVCaptureDevicePosition)position;

- (UIImage *)converCIImageToUIImage:(CIImage *)cIImage;

- (void)setupCamera:(BOOL)isSelfie;

- (void)startCamera;
- (void)stopCamera;

- (UIColor *)getColorPrimary;

@property (readwrite)LanguageOrigin language;
@property (strong, nonatomic)NSString *versionRelease;

- (void)addCloseButton;
@property (strong, nonatomic)UIView *viewToButtonClose;

@property (strong, nonatomic)NSDate *dateCaptureBegin;
@property (strong, nonatomic)NSDate *dateCaptureTake;
@property (strong, nonatomic)NSDate *dateCaptureOpenCamera;

@end

NS_ASSUME_NONNULL_END
