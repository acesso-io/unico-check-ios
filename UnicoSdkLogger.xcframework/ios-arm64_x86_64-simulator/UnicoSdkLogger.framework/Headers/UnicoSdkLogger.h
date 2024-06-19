#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class USLDefaultLogger, USLSensorValue, USLAccelerometerDeviceBehavior, USLAppSec, USLAttempts, USLFaceBehavior, USLDeviceBehavior, USLBehaviors, USLCameraTypes, USLCameraTypesDocument, USLCameraTypesDocumentDriversLicense, USLCameraTypesDocumentDriversLicenseBack, USLCameraTypesDocumentDriversLicenseFront, USLCameraTypesDocumentDriversLicenseFull, USLCameraTypesDocumentID, USLCameraTypesDocumentIDBack, USLCameraTypesDocumentIDFront, USLCameraTypesDocumentNewID, USLCameraTypesDocumentNewIDBack, USLCameraTypesDocumentNewIDFront, USLCameraTypesDocumentOther, USLCameraTypesDocumentRegistration, USLCameraTypesSelfie, USLCameraTypesSelfieDefault, USLCameraTypesSelfieLiveness, USLCameraTypesSelfieSmart, USLSilhouette, USLImage, USLJwtInfo, USLVideo, USLTimers, USLConnections, USLProvider, USLLiveness, USLCapture, USLOSTypes, USLDeviceInfo, USLErrorSDK, USLExtra, USLGeolocation, USLInfoValue, USLIInfo, USLKotlinEnumCompanion, USLKotlinEnum<E>, USLKotlinArray<T>, USLOriginTypes, USLOther, USLPlatformTypes, USLSessionTransactionsId, USLSize, USLEitherError, USLEitherSuccess<T>, USLKotlinNothing, USLDependencyInjection, USLDateKMM, USLEither<__covariant T>, USLEitherEmpty, USLKotlinThrowable, USLExceptionParam;

@protocol USLBaseCameraTypes, USLKotlinComparable, USLUseCase, USLAddProviderUseCase, USLLogProviderRepository, USLLogProvider, USLGetLogUseCase, USLMapToJsonUseCase, USLSetLogAppSecUseCase, USLSetLogAttemptsUseCase, USLSetLogCallbackUseCase, USLSetLogCameraTypeUseCase, USLSetLogCameraUseCase, USLSetLogCaptureUseCase, USLSetLogDeviceInfoUseCase, USLSetLogDomainUseCase, USLSetLogErrorSdkUseCase, USLSetExtraDataUseCase, USLSetLogGeolocationUseCase, USLSetLogIInfoUseCase, USLSetLogOriginUseCase, USLSetLogOthersUseCase, USLSetLogPlataformUseCase, USLSetLogSdkSessionIdUseCase, USLSetLogSessionIdUseCase, USLSetLogSessionTransactionsIdsUseCase, USLSetLogStatusUseCase, USLSetLogVersionUseCase, USLSetUuidUseCase, USLKotlinKClass, USLInjector, USLKotlinIterator, USLKotlinKDeclarationContainer, USLKotlinKAnnotatedElement, USLKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface USLBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface USLBase (USLBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface USLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface USLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorUSLKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface USLNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface USLByte : USLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface USLUByte : USLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface USLShort : USLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface USLUShort : USLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface USLInt : USLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface USLUInt : USLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface USLLong : USLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface USLULong : USLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface USLFloat : USLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface USLDouble : USLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface USLBoolean : USLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLogger")))
@interface USLDefaultLogger : USLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLDefaultLogger *shared __attribute__((swift_name("shared")));
- (void)build __attribute__((swift_name("build()")));
@end

__attribute__((swift_name("Logger")))
@protocol USLLogger
@required
- (void)build __attribute__((swift_name("build()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccelerometerDeviceBehavior")))
@interface USLAccelerometerDeviceBehavior : USLBase
- (instancetype)initWithX:(NSArray<USLSensorValue *> * _Nullable)x y:(NSArray<USLSensorValue *> * _Nullable)y z:(NSArray<USLSensorValue *> * _Nullable)z __attribute__((swift_name("init(x:y:z:)"))) __attribute__((objc_designated_initializer));
- (USLAccelerometerDeviceBehavior *)doCopyX:(NSArray<USLSensorValue *> * _Nullable)x y:(NSArray<USLSensorValue *> * _Nullable)y z:(NSArray<USLSensorValue *> * _Nullable)z __attribute__((swift_name("doCopy(x:y:z:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable x __attribute__((swift_name("x")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable y __attribute__((swift_name("y")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable z __attribute__((swift_name("z")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSec")))
@interface USLAppSec : USLBase
- (instancetype)initWithRootDetection:(BOOL)rootDetection usbPlugged:(BOOL)usbPlugged remoteDebug:(BOOL)remoteDebug usbDebugging:(BOOL)usbDebugging adbInfo:(NSString *)adbInfo monkeyRunner:(NSString *)monkeyRunner keyboardPlugged:(BOOL)keyboardPlugged mousePlugged:(BOOL)mousePlugged screenRecord:(BOOL)screenRecord __attribute__((swift_name("init(rootDetection:usbPlugged:remoteDebug:usbDebugging:adbInfo:monkeyRunner:keyboardPlugged:mousePlugged:screenRecord:)"))) __attribute__((objc_designated_initializer));
- (USLAppSec *)doCopyRootDetection:(BOOL)rootDetection usbPlugged:(BOOL)usbPlugged remoteDebug:(BOOL)remoteDebug usbDebugging:(BOOL)usbDebugging adbInfo:(NSString *)adbInfo monkeyRunner:(NSString *)monkeyRunner keyboardPlugged:(BOOL)keyboardPlugged mousePlugged:(BOOL)mousePlugged screenRecord:(BOOL)screenRecord __attribute__((swift_name("doCopy(rootDetection:usbPlugged:remoteDebug:usbDebugging:adbInfo:monkeyRunner:keyboardPlugged:mousePlugged:screenRecord:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *adbInfo __attribute__((swift_name("adbInfo")));
@property (readonly) BOOL keyboardPlugged __attribute__((swift_name("keyboardPlugged")));
@property (readonly) NSString *monkeyRunner __attribute__((swift_name("monkeyRunner")));
@property (readonly) BOOL mousePlugged __attribute__((swift_name("mousePlugged")));
@property (readonly) BOOL remoteDebug __attribute__((swift_name("remoteDebug")));
@property (readonly) BOOL rootDetection __attribute__((swift_name("rootDetection")));
@property (readonly) BOOL screenRecord __attribute__((swift_name("screenRecord")));
@property (readonly) BOOL usbDebugging __attribute__((swift_name("usbDebugging")));
@property (readonly) BOOL usbPlugged __attribute__((swift_name("usbPlugged")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attempts")))
@interface USLAttempts : USLBase
- (instancetype)initWithUuid:(NSString * _Nullable)uuid __attribute__((swift_name("init(uuid:)"))) __attribute__((objc_designated_initializer));
- (USLAttempts *)doCopyUuid:(NSString * _Nullable)uuid __attribute__((swift_name("doCopy(uuid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable uuid __attribute__((swift_name("uuid")));
@end

__attribute__((swift_name("BaseCameraTypes")))
@protocol USLBaseCameraTypes
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Behaviors")))
@interface USLBehaviors : USLBase
- (instancetype)initWithFace:(USLFaceBehavior * _Nullable)face device:(USLDeviceBehavior * _Nullable)device __attribute__((swift_name("init(face:device:)"))) __attribute__((objc_designated_initializer));
- (USLBehaviors *)doCopyFace:(USLFaceBehavior * _Nullable)face device:(USLDeviceBehavior * _Nullable)device __attribute__((swift_name("doCopy(face:device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLDeviceBehavior * _Nullable device __attribute__((swift_name("device")));
@property (readonly) USLFaceBehavior * _Nullable face __attribute__((swift_name("face")));
@end

__attribute__((swift_name("CameraTypes")))
@interface USLCameraTypes : USLBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.Document")))
@interface USLCameraTypesDocument : USLCameraTypes
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)document __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocument *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CameraTypes.DocumentDriversLicense")))
@interface USLCameraTypesDocumentDriversLicense : USLBase <USLBaseCameraTypes>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentDriversLicenseBack")))
@interface USLCameraTypesDocumentDriversLicenseBack : USLCameraTypesDocumentDriversLicense
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentDriversLicenseBack *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentDriversLicenseFront")))
@interface USLCameraTypesDocumentDriversLicenseFront : USLCameraTypesDocumentDriversLicense
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)front __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentDriversLicenseFront *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentDriversLicenseFull")))
@interface USLCameraTypesDocumentDriversLicenseFull : USLCameraTypesDocumentDriversLicense
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)full __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentDriversLicenseFull *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CameraTypes.DocumentID")))
@interface USLCameraTypesDocumentID : USLBase <USLBaseCameraTypes>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentIDBack")))
@interface USLCameraTypesDocumentIDBack : USLCameraTypesDocumentID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentIDBack *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentIDFront")))
@interface USLCameraTypesDocumentIDFront : USLCameraTypesDocumentID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)front __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentIDFront *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CameraTypes.DocumentNewID")))
@interface USLCameraTypesDocumentNewID : USLBase <USLBaseCameraTypes>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentNewIDBack")))
@interface USLCameraTypesDocumentNewIDBack : USLCameraTypesDocumentNewID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentNewIDBack *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentNewIDFront")))
@interface USLCameraTypesDocumentNewIDFront : USLCameraTypesDocumentNewID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)front __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentNewIDFront *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentOther")))
@interface USLCameraTypesDocumentOther : USLBase <USLBaseCameraTypes>
- (instancetype)initWithDescription:(NSString *)description __attribute__((swift_name("init(description:)"))) __attribute__((objc_designated_initializer));
- (USLCameraTypesDocumentOther *)doCopyDescription:(NSString *)description __attribute__((swift_name("doCopy(description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentRegistration")))
@interface USLCameraTypesDocumentRegistration : USLBase <USLBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)registration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesDocumentRegistration *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.Selfie")))
@interface USLCameraTypesSelfie : USLCameraTypes
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)selfie __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesSelfie *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.SelfieDefault")))
@interface USLCameraTypesSelfieDefault : USLBase <USLBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesSelfieDefault *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.SelfieLiveness")))
@interface USLCameraTypesSelfieLiveness : USLBase <USLBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)liveness __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesSelfieLiveness *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.SelfieSmart")))
@interface USLCameraTypesSelfieSmart : USLBase <USLBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)smart __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLCameraTypesSelfieSmart *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capture")))
@interface USLCapture : USLBase
- (instancetype)initWithTimestamp:(NSString * _Nullable)timestamp camera:(NSString * _Nullable)camera cameraVendor:(NSString * _Nullable)cameraVendor type:(NSString * _Nullable)type screenBrightness:(USLDouble * _Nullable)screenBrightness lightingSensor:(USLDouble * _Nullable)lightingSensor silhouette:(USLSilhouette * _Nullable)silhouette image:(USLImage * _Nullable)image jwt:(USLJwtInfo * _Nullable)jwt video:(USLVideo * _Nullable)video isCameraTypeChanged:(USLBoolean * _Nullable)isCameraTypeChanged timers:(USLTimers * _Nullable)timers connections:(USLConnections * _Nullable)connections behaviors:(USLBehaviors * _Nullable)behaviors provider:(NSArray<USLProvider *> * _Nullable)provider liveness:(USLLiveness * _Nullable)liveness __attribute__((swift_name("init(timestamp:camera:cameraVendor:type:screenBrightness:lightingSensor:silhouette:image:jwt:video:isCameraTypeChanged:timers:connections:behaviors:provider:liveness:)"))) __attribute__((objc_designated_initializer));
- (USLCapture *)doCopyTimestamp:(NSString * _Nullable)timestamp camera:(NSString * _Nullable)camera cameraVendor:(NSString * _Nullable)cameraVendor type:(NSString * _Nullable)type screenBrightness:(USLDouble * _Nullable)screenBrightness lightingSensor:(USLDouble * _Nullable)lightingSensor silhouette:(USLSilhouette * _Nullable)silhouette image:(USLImage * _Nullable)image jwt:(USLJwtInfo * _Nullable)jwt video:(USLVideo * _Nullable)video isCameraTypeChanged:(USLBoolean * _Nullable)isCameraTypeChanged timers:(USLTimers * _Nullable)timers connections:(USLConnections * _Nullable)connections behaviors:(USLBehaviors * _Nullable)behaviors provider:(NSArray<USLProvider *> * _Nullable)provider liveness:(USLLiveness * _Nullable)liveness __attribute__((swift_name("doCopy(timestamp:camera:cameraVendor:type:screenBrightness:lightingSensor:silhouette:image:jwt:video:isCameraTypeChanged:timers:connections:behaviors:provider:liveness:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLBehaviors * _Nullable behaviors __attribute__((swift_name("behaviors")));
@property (readonly) NSString * _Nullable camera __attribute__((swift_name("camera")));
@property (readonly) NSString * _Nullable cameraVendor __attribute__((swift_name("cameraVendor")));
@property (readonly) USLConnections * _Nullable connections __attribute__((swift_name("connections")));
@property (readonly) USLImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) USLBoolean * _Nullable isCameraTypeChanged __attribute__((swift_name("isCameraTypeChanged")));
@property (readonly) USLJwtInfo * _Nullable jwt __attribute__((swift_name("jwt")));
@property (readonly) USLDouble * _Nullable lightingSensor __attribute__((swift_name("lightingSensor")));
@property (readonly) USLLiveness * _Nullable liveness __attribute__((swift_name("liveness")));
@property (readonly) NSArray<USLProvider *> * _Nullable provider __attribute__((swift_name("provider")));
@property (readonly) USLDouble * _Nullable screenBrightness __attribute__((swift_name("screenBrightness")));
@property (readonly) USLSilhouette * _Nullable silhouette __attribute__((swift_name("silhouette")));
@property (readonly) USLTimers * _Nullable timers __attribute__((swift_name("timers")));
@property (readonly) NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) USLVideo * _Nullable video __attribute__((swift_name("video")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Connections")))
@interface USLConnections : USLBase
- (instancetype)initWithType:(NSString * _Nullable)type rtt:(NSString * _Nullable)rtt effectiveType:(NSString * _Nullable)effectiveType downlink:(NSString * _Nullable)downlink ipAddress:(NSString * _Nullable)ipAddress ipPort:(NSString * _Nullable)ipPort __attribute__((swift_name("init(type:rtt:effectiveType:downlink:ipAddress:ipPort:)"))) __attribute__((objc_designated_initializer));
- (USLConnections *)doCopyType:(NSString * _Nullable)type rtt:(NSString * _Nullable)rtt effectiveType:(NSString * _Nullable)effectiveType downlink:(NSString * _Nullable)downlink ipAddress:(NSString * _Nullable)ipAddress ipPort:(NSString * _Nullable)ipPort __attribute__((swift_name("doCopy(type:rtt:effectiveType:downlink:ipAddress:ipPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable downlink __attribute__((swift_name("downlink")));
@property (readonly) NSString * _Nullable effectiveType __attribute__((swift_name("effectiveType")));
@property (readonly) NSString * _Nullable ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) NSString * _Nullable ipPort __attribute__((swift_name("ipPort")));
@property (readonly) NSString * _Nullable rtt __attribute__((swift_name("rtt")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceBehavior")))
@interface USLDeviceBehavior : USLBase
- (instancetype)initWithAccelerometer:(USLAccelerometerDeviceBehavior * _Nullable)accelerometer pitch:(NSArray<USLSensorValue *> * _Nullable)pitch roll:(NSArray<USLSensorValue *> * _Nullable)roll yaw:(NSArray<USLSensorValue *> * _Nullable)yaw __attribute__((swift_name("init(accelerometer:pitch:roll:yaw:)"))) __attribute__((objc_designated_initializer));
- (USLDeviceBehavior *)doCopyAccelerometer:(USLAccelerometerDeviceBehavior * _Nullable)accelerometer pitch:(NSArray<USLSensorValue *> * _Nullable)pitch roll:(NSArray<USLSensorValue *> * _Nullable)roll yaw:(NSArray<USLSensorValue *> * _Nullable)yaw __attribute__((swift_name("doCopy(accelerometer:pitch:roll:yaw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLAccelerometerDeviceBehavior * _Nullable accelerometer __attribute__((swift_name("accelerometer")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable pitch __attribute__((swift_name("pitch")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable roll __attribute__((swift_name("roll")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable yaw __attribute__((swift_name("yaw")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo")))
@interface USLDeviceInfo : USLBase
- (instancetype)initWithId:(NSString * _Nullable)id model:(NSString * _Nullable)model vendor:(NSString * _Nullable)vendor os:(USLOSTypes * _Nullable)os api:(NSString * _Nullable)api ua:(NSString * _Nullable)ua systemPatch:(NSString * _Nullable)systemPatch kernelVersion:(NSString * _Nullable)kernelVersion processorManufacturer:(NSString * _Nullable)processorManufacturer SIMCardNumber:(NSString * _Nullable)SIMCardNumber __attribute__((swift_name("init(id:model:vendor:os:api:ua:systemPatch:kernelVersion:processorManufacturer:SIMCardNumber:)"))) __attribute__((objc_designated_initializer));
- (USLDeviceInfo *)doCopyId:(NSString * _Nullable)id model:(NSString * _Nullable)model vendor:(NSString * _Nullable)vendor os:(USLOSTypes * _Nullable)os api:(NSString * _Nullable)api ua:(NSString * _Nullable)ua systemPatch:(NSString * _Nullable)systemPatch kernelVersion:(NSString * _Nullable)kernelVersion processorManufacturer:(NSString * _Nullable)processorManufacturer SIMCardNumber:(NSString * _Nullable)SIMCardNumber __attribute__((swift_name("doCopy(id:model:vendor:os:api:ua:systemPatch:kernelVersion:processorManufacturer:SIMCardNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable SIMCardNumber __attribute__((swift_name("SIMCardNumber")));
@property (readonly) NSString * _Nullable api __attribute__((swift_name("api")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable kernelVersion __attribute__((swift_name("kernelVersion")));
@property (readonly) NSString * _Nullable model __attribute__((swift_name("model")));
@property (readonly) USLOSTypes * _Nullable os __attribute__((swift_name("os")));
@property (readonly) NSString * _Nullable processorManufacturer __attribute__((swift_name("processorManufacturer")));
@property (readonly) NSString * _Nullable systemPatch __attribute__((swift_name("systemPatch")));
@property (readonly) NSString * _Nullable ua __attribute__((swift_name("ua")));
@property (readonly) NSString * _Nullable vendor __attribute__((swift_name("vendor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorSDK")))
@interface USLErrorSDK : USLBase
- (instancetype)initWithCode:(USLInt * _Nullable)code title:(NSString * _Nullable)title message:(NSString * _Nullable)message __attribute__((swift_name("init(code:title:message:)"))) __attribute__((objc_designated_initializer));
- (USLErrorSDK *)doCopyCode:(USLInt * _Nullable)code title:(NSString * _Nullable)title message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:title:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Extra")))
@interface USLExtra : USLBase
- (instancetype)initWithName:(NSString *)name value:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (USLExtra *)doCopyName:(NSString *)name value:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSDictionary<NSString *, id> *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceBehavior")))
@interface USLFaceBehavior : USLBase
- (instancetype)initWithBlinks:(USLInt * _Nullable)blinks pitch:(NSArray<USLSensorValue *> * _Nullable)pitch roll:(NSArray<USLSensorValue *> * _Nullable)roll yaw:(NSArray<USLSensorValue *> * _Nullable)yaw __attribute__((swift_name("init(blinks:pitch:roll:yaw:)"))) __attribute__((objc_designated_initializer));
- (USLFaceBehavior *)doCopyBlinks:(USLInt * _Nullable)blinks pitch:(NSArray<USLSensorValue *> * _Nullable)pitch roll:(NSArray<USLSensorValue *> * _Nullable)roll yaw:(NSArray<USLSensorValue *> * _Nullable)yaw __attribute__((swift_name("doCopy(blinks:pitch:roll:yaw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLInt * _Nullable blinks __attribute__((swift_name("blinks")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable pitch __attribute__((swift_name("pitch")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable roll __attribute__((swift_name("roll")));
@property (readonly) NSArray<USLSensorValue *> * _Nullable yaw __attribute__((swift_name("yaw")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Geolocation")))
@interface USLGeolocation : USLBase
- (instancetype)initWithLat:(USLDouble * _Nullable)lat lng:(USLDouble * _Nullable)lng alt:(USLDouble * _Nullable)alt precision:(USLDouble * _Nullable)precision city:(NSString * _Nullable)city uf:(NSString * _Nullable)uf country:(NSString * _Nullable)country postalcode:(NSString * _Nullable)postalcode address:(NSString * _Nullable)address gpsFlag:(NSString * _Nullable)gpsFlag mode:(NSString * _Nullable)mode __attribute__((swift_name("init(lat:lng:alt:precision:city:uf:country:postalcode:address:gpsFlag:mode:)"))) __attribute__((objc_designated_initializer));
- (USLGeolocation *)doCopyLat:(USLDouble * _Nullable)lat lng:(USLDouble * _Nullable)lng alt:(USLDouble * _Nullable)alt precision:(USLDouble * _Nullable)precision city:(NSString * _Nullable)city uf:(NSString * _Nullable)uf country:(NSString * _Nullable)country postalcode:(NSString * _Nullable)postalcode address:(NSString * _Nullable)address gpsFlag:(NSString * _Nullable)gpsFlag mode:(NSString * _Nullable)mode __attribute__((swift_name("doCopy(lat:lng:alt:precision:city:uf:country:postalcode:address:gpsFlag:mode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) USLDouble * _Nullable alt __attribute__((swift_name("alt")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable gpsFlag __attribute__((swift_name("gpsFlag")));
@property (readonly) USLDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) USLDouble * _Nullable lng __attribute__((swift_name("lng")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) NSString * _Nullable postalcode __attribute__((swift_name("postalcode")));
@property (readonly) USLDouble * _Nullable precision __attribute__((swift_name("precision")));
@property (readonly) NSString * _Nullable uf __attribute__((swift_name("uf")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IInfo")))
@interface USLIInfo : USLBase
- (instancetype)initWithStatus:(USLBoolean * _Nullable)status info:(NSArray<USLInfoValue *> * _Nullable)info __attribute__((swift_name("init(status:info:)"))) __attribute__((objc_designated_initializer));
- (USLIInfo *)doCopyStatus:(USLBoolean * _Nullable)status info:(NSArray<USLInfoValue *> * _Nullable)info __attribute__((swift_name("doCopy(status:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<USLInfoValue *> * _Nullable info __attribute__((swift_name("info")));
@property (readonly) USLBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface USLImage : USLBase
- (instancetype)initWithResolution:(NSString * _Nullable)resolution __attribute__((swift_name("init(resolution:)"))) __attribute__((objc_designated_initializer));
- (USLImage *)doCopyResolution:(NSString * _Nullable)resolution __attribute__((swift_name("doCopy(resolution:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable resolution __attribute__((swift_name("resolution")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoValue")))
@interface USLInfoValue : USLBase
- (instancetype)initWithName:(NSString *)name value:(id)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (USLInfoValue *)doCopyName:(NSString *)name value:(id)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwtInfo")))
@interface USLJwtInfo : USLBase
- (instancetype)initWithWeight:(USLLong * _Nullable)weight __attribute__((swift_name("init(weight:)"))) __attribute__((objc_designated_initializer));
- (USLJwtInfo *)doCopyWeight:(USLLong * _Nullable)weight __attribute__((swift_name("doCopy(weight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLLong * _Nullable weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Liveness")))
@interface USLLiveness : USLBase
- (instancetype)initWithProvider:(USLProvider * _Nullable)provider maxAttempts:(USLInt * _Nullable)maxAttempts attempts:(USLInt * _Nullable)attempts isLive:(USLBoolean * _Nullable)isLive __attribute__((swift_name("init(provider:maxAttempts:attempts:isLive:)"))) __attribute__((objc_designated_initializer));
- (USLLiveness *)doCopyProvider:(USLProvider * _Nullable)provider maxAttempts:(USLInt * _Nullable)maxAttempts attempts:(USLInt * _Nullable)attempts isLive:(USLBoolean * _Nullable)isLive __attribute__((swift_name("doCopy(provider:maxAttempts:attempts:isLive:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLInt * _Nullable attempts __attribute__((swift_name("attempts")));
@property (readonly) USLBoolean * _Nullable isLive __attribute__((swift_name("isLive")));
@property (readonly) USLInt * _Nullable maxAttempts __attribute__((swift_name("maxAttempts")));
@property (readonly) USLProvider * _Nullable provider __attribute__((swift_name("provider")));
@end

__attribute__((swift_name("LogProvider")))
@protocol USLLogProvider
@required
- (void)addPropertyKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("addProperty(key:value:)")));
- (NSDictionary<NSString *, id> *)get __attribute__((swift_name("get()")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol USLKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface USLKotlinEnum<E> : USLBase <USLKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) USLKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OSTypes")))
@interface USLOSTypes : USLKotlinEnum<USLOSTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) USLOSTypes *android __attribute__((swift_name("android")));
@property (class, readonly) USLOSTypes *ios __attribute__((swift_name("ios")));
@property (class, readonly) USLOSTypes *windows __attribute__((swift_name("windows")));
@property (class, readonly) USLOSTypes *macos __attribute__((swift_name("macos")));
+ (USLKotlinArray<USLOSTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OriginTypes")))
@interface USLOriginTypes : USLKotlinEnum<USLOriginTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) USLOriginTypes *native __attribute__((swift_name("native")));
@property (class, readonly) USLOriginTypes *flutter __attribute__((swift_name("flutter")));
@property (class, readonly) USLOriginTypes *reactNative __attribute__((swift_name("reactNative")));
+ (USLKotlinArray<USLOriginTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Other")))
@interface USLOther : USLBase
- (instancetype)initWithName:(NSString * _Nullable)name value:(id _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (USLOther *)doCopyName:(NSString * _Nullable)name value:(id _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTypes")))
@interface USLPlatformTypes : USLKotlinEnum<USLPlatformTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) USLPlatformTypes *android __attribute__((swift_name("android")));
@property (class, readonly) USLPlatformTypes *ios __attribute__((swift_name("ios")));
@property (class, readonly) USLPlatformTypes *js __attribute__((swift_name("js")));
+ (USLKotlinArray<USLPlatformTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider")))
@interface USLProvider : USLBase
- (instancetype)initWithName:(NSString *)name version:(NSString *)version type:(NSString *)type __attribute__((swift_name("init(name:version:type:)"))) __attribute__((objc_designated_initializer));
- (USLProvider *)doCopyName:(NSString *)name version:(NSString *)version type:(NSString *)type __attribute__((swift_name("doCopy(name:version:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorValue")))
@interface USLSensorValue : USLBase
- (instancetype)initWithValue:(USLDouble * _Nullable)value timestamp:(USLLong * _Nullable)timestamp __attribute__((swift_name("init(value:timestamp:)"))) __attribute__((objc_designated_initializer));
- (USLSensorValue *)doCopyValue:(USLDouble * _Nullable)value timestamp:(USLLong * _Nullable)timestamp __attribute__((swift_name("doCopy(value:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) USLDouble * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionTransactionsId")))
@interface USLSessionTransactionsId : USLBase
- (instancetype)initWithTransactionId:(NSString *)transactionId isLive:(BOOL)isLive order:(int32_t)order __attribute__((swift_name("init(transactionId:isLive:order:)"))) __attribute__((objc_designated_initializer));
- (USLSessionTransactionsId *)doCopyTransactionId:(NSString *)transactionId isLive:(BOOL)isLive order:(int32_t)order __attribute__((swift_name("doCopy(transactionId:isLive:order:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isLive __attribute__((swift_name("isLive")));
@property (readonly) int32_t order __attribute__((swift_name("order")));
@property (readonly) NSString *transactionId __attribute__((swift_name("transactionId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Silhouette")))
@interface USLSilhouette : USLBase
- (instancetype)initWithW:(USLInt * _Nullable)w h:(USLInt * _Nullable)h __attribute__((swift_name("init(w:h:)"))) __attribute__((objc_designated_initializer));
- (USLSilhouette *)doCopyW:(USLInt * _Nullable)w h:(USLInt * _Nullable)h __attribute__((swift_name("doCopy(w:h:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLInt * _Nullable h __attribute__((swift_name("h")));
@property (readonly) USLInt * _Nullable w __attribute__((swift_name("w")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Size")))
@interface USLSize : USLBase
- (instancetype)initWithHeight:(float)height width:(float)width __attribute__((swift_name("init(height:width:)"))) __attribute__((objc_designated_initializer));
- (USLSize *)doCopyHeight:(float)height width:(float)width __attribute__((swift_name("doCopy(height:width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timers")))
@interface USLTimers : USLBase
- (instancetype)initWithTotalTime:(USLInt * _Nullable)totalTime inferenceTime:(USLInt * _Nullable)inferenceTime openCameraTime:(USLInt * _Nullable)openCameraTime captureUserTime:(USLInt * _Nullable)captureUserTime __attribute__((swift_name("init(totalTime:inferenceTime:openCameraTime:captureUserTime:)"))) __attribute__((objc_designated_initializer));
- (USLTimers *)doCopyTotalTime:(USLInt * _Nullable)totalTime inferenceTime:(USLInt * _Nullable)inferenceTime openCameraTime:(USLInt * _Nullable)openCameraTime captureUserTime:(USLInt * _Nullable)captureUserTime __attribute__((swift_name("doCopy(totalTime:inferenceTime:openCameraTime:captureUserTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLInt * _Nullable captureUserTime __attribute__((swift_name("captureUserTime")));
@property (readonly) USLInt * _Nullable inferenceTime __attribute__((swift_name("inferenceTime")));
@property (readonly) USLInt * _Nullable openCameraTime __attribute__((swift_name("openCameraTime")));
@property (readonly) USLInt * _Nullable totalTime __attribute__((swift_name("totalTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Video")))
@interface USLVideo : USLBase
- (instancetype)initWithW:(USLInt * _Nullable)w h:(USLInt * _Nullable)h aspectRatio:(USLDouble * _Nullable)aspectRatio __attribute__((swift_name("init(w:h:aspectRatio:)"))) __attribute__((objc_designated_initializer));
- (USLVideo *)doCopyW:(USLInt * _Nullable)w h:(USLInt * _Nullable)h aspectRatio:(USLDouble * _Nullable)aspectRatio __attribute__((swift_name("doCopy(w:h:aspectRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLDouble * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property (readonly) USLInt * _Nullable h __attribute__((swift_name("h")));
@property (readonly) USLInt * _Nullable w __attribute__((swift_name("w")));
@end

__attribute__((swift_name("UseCase")))
@protocol USLUseCase
@required
- (id _Nullable)executeParam:(id _Nullable)param __attribute__((swift_name("execute(param:)")));
- (void)onEmpty __attribute__((swift_name("onEmpty()")));
- (void)onErrorError:(USLEitherError *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessValue:(USLEitherSuccess<id> *)value __attribute__((swift_name("onSuccess(value:)")));
@end

__attribute__((swift_name("AddProviderUseCase")))
@protocol USLAddProviderUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("GetLogUseCase")))
@protocol USLGetLogUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("MapToJsonUseCase")))
@protocol USLMapToJsonUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetExtraDataUseCase")))
@protocol USLSetExtraDataUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogAppSecUseCase")))
@protocol USLSetLogAppSecUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogAttemptsUseCase")))
@protocol USLSetLogAttemptsUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogCallbackUseCase")))
@protocol USLSetLogCallbackUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogCameraTypeUseCase")))
@protocol USLSetLogCameraTypeUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogCameraUseCase")))
@protocol USLSetLogCameraUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogCaptureUseCase")))
@protocol USLSetLogCaptureUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogDeviceInfoUseCase")))
@protocol USLSetLogDeviceInfoUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogDomainUseCase")))
@protocol USLSetLogDomainUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogErrorSdkUseCase")))
@protocol USLSetLogErrorSdkUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogGeolocationUseCase")))
@protocol USLSetLogGeolocationUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogIInfoUseCase")))
@protocol USLSetLogIInfoUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogOriginUseCase")))
@protocol USLSetLogOriginUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogOthersUseCase")))
@protocol USLSetLogOthersUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogPlataformUseCase")))
@protocol USLSetLogPlataformUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogSdkSessionIdUseCase")))
@protocol USLSetLogSdkSessionIdUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogSessionIdUseCase")))
@protocol USLSetLogSessionIdUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogSessionTransactionsIdsUseCase")))
@protocol USLSetLogSessionTransactionsIdsUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogStatusUseCase")))
@protocol USLSetLogStatusUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetLogVersionUseCase")))
@protocol USLSetLogVersionUseCase <USLUseCase>
@required
@end

__attribute__((swift_name("SetUuidUseCase")))
@protocol USLSetUuidUseCase <USLUseCase>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAddProviderUseCase")))
@interface USLDefaultAddProviderUseCase : USLBase <USLAddProviderUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(id<USLLogProvider> _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultGetLogUseCase")))
@interface USLDefaultGetLogUseCase : USLBase <USLGetLogUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSDictionary<NSString *, id> *> *)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultMapToJsonUseCase")))
@interface USLDefaultMapToJsonUseCase : USLBase <USLMapToJsonUseCase>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)executeParam:(NSDictionary<NSString *, id> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogAppSecUseCase")))
@interface USLDefaultSetLogAppSecUseCase : USLBase <USLSetLogAppSecUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLAppSec * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogAttemptsUseCase")))
@interface USLDefaultSetLogAttemptsUseCase : USLBase <USLSetLogAttemptsUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSArray<USLAttempts *> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCallbackUseCase")))
@interface USLDefaultSetLogCallbackUseCase : USLBase <USLSetLogCallbackUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCameraTypeUseCase")))
@interface USLDefaultSetLogCameraTypeUseCase : USLBase <USLSetLogCameraTypeUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(id<USLBaseCameraTypes> _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCameraUseCase")))
@interface USLDefaultSetLogCameraUseCase : USLBase <USLSetLogCameraUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLCameraTypes * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCaptureUseCase")))
@interface USLDefaultSetLogCaptureUseCase : USLBase <USLSetLogCaptureUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLCapture * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogDeviceInfoUseCase")))
@interface USLDefaultSetLogDeviceInfoUseCase : USLBase <USLSetLogDeviceInfoUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLDeviceInfo * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogDomainUseCase")))
@interface USLDefaultSetLogDomainUseCase : USLBase <USLSetLogDomainUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogErrorSdkUseCase")))
@interface USLDefaultSetLogErrorSdkUseCase : USLBase <USLSetLogErrorSdkUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLErrorSDK * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogExtraDataUseCase")))
@interface USLDefaultSetLogExtraDataUseCase : USLBase <USLSetExtraDataUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLExtra * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogGeolocationUseCase")))
@interface USLDefaultSetLogGeolocationUseCase : USLBase <USLSetLogGeolocationUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLGeolocation * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogIInfoUseCase")))
@interface USLDefaultSetLogIInfoUseCase : USLBase <USLSetLogIInfoUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLIInfo * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogOriginUseCase")))
@interface USLDefaultSetLogOriginUseCase : USLBase <USLSetLogOriginUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLOriginTypes * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogOthersUseCase")))
@interface USLDefaultSetLogOthersUseCase : USLBase <USLSetLogOthersUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSArray<USLOther *> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogPlataformUseCase")))
@interface USLDefaultSetLogPlataformUseCase : USLBase <USLSetLogPlataformUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLPlatformTypes * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogSdkSessionIdUseCase")))
@interface USLDefaultSetLogSdkSessionIdUseCase : USLBase <USLSetLogSdkSessionIdUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogSessionIdUseCase")))
@interface USLDefaultSetLogSessionIdUseCase : USLBase <USLSetLogSessionIdUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogSessionTransactionsIdsUseCase")))
@interface USLDefaultSetLogSessionTransactionsIdsUseCase : USLBase <USLSetLogSessionTransactionsIdsUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSArray<USLSessionTransactionsId *> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogStatusUseCase")))
@interface USLDefaultSetLogStatusUseCase : USLBase <USLSetLogStatusUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(USLBoolean * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogVersionUseCase")))
@interface USLDefaultSetLogVersionUseCase : USLBase <USLSetLogVersionUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetUuidUseCase")))
@interface USLDefaultSetUuidUseCase : USLBase <USLSetUuidUseCase>
- (instancetype)initWithRepository:(id<USLLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (USLBoolean *)executeParam:(USLKotlinNothing * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end

__attribute__((swift_name("LogProviderRepository")))
@protocol USLLogProviderRepository
@required
- (NSArray<id<USLLogProvider>> *)getAll __attribute__((swift_name("getAll()")));
- (id<USLLogProvider>)insertProvider:(id<USLLogProvider>)provider __attribute__((swift_name("insert(provider:)")));
- (BOOL)removeId:(NSString *)id __attribute__((swift_name("remove(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLogProviderRepository")))
@interface USLDefaultLogProviderRepository : USLBase <USLLogProviderRepository>
- (instancetype)initWithProviders:(USLMutableDictionary<NSString *, id<USLLogProvider>> *)providers __attribute__((swift_name("init(providers:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id<USLLogProvider>> *)getAll __attribute__((swift_name("getAll()")));
- (id<USLLogProvider>)insertProvider:(id<USLLogProvider>)provider __attribute__((swift_name("insert(provider:)")));
- (BOOL)removeId:(NSString *)id __attribute__((swift_name("remove(id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependencyInjection")))
@interface USLDependencyInjection : USLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dependencyInjection __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLDependencyInjection *shared __attribute__((swift_name("shared")));
- (void)factoryKclass:(id<USLKotlinKClass>)kclass classCallback:(id (^)(void))classCallback __attribute__((swift_name("factory(kclass:classCallback:)")));
- (id _Nullable)getKclass:(id<USLKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (void)loadInjectors:(NSArray<id<USLInjector>> *)injectors __attribute__((swift_name("load(injectors:)")));
@end

__attribute__((swift_name("Injector")))
@protocol USLInjector
@required
- (void)inject __attribute__((swift_name("inject()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateKMM")))
@interface USLDateKMM : USLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateKMM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLDateKMM *shared __attribute__((swift_name("shared")));
- (int64_t)getTimestamp __attribute__((swift_name("getTimestamp()")));
@end

__attribute__((swift_name("UseCaseDecorator")))
@interface USLUseCaseDecorator<P, R> : USLBase <USLUseCase>
- (instancetype)initWithUseCase:(id<USLUseCase>)useCase __attribute__((swift_name("init(useCase:)"))) __attribute__((objc_designated_initializer));
- (R _Nullable)executeParam:(P _Nullable)param __attribute__((swift_name("execute(param:)")));
- (void)onEmpty __attribute__((swift_name("onEmpty()")));
- (void)onErrorError:(USLEitherError *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessValue:(USLEitherSuccess<R> *)value __attribute__((swift_name("onSuccess(value:)")));
- (void)processParam:(P _Nullable)param __attribute__((swift_name("process(param:)")));
@end

__attribute__((swift_name("Either")))
@interface USLEither<__covariant T> : USLBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherEmpty")))
@interface USLEitherEmpty : USLEither<USLKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLEitherEmpty *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherError")))
@interface USLEitherError : USLEither<USLKotlinNothing *>
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(USLKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (USLEitherError *)doCopyMessage:(NSString * _Nullable)message cause:(USLKotlinThrowable *)cause __attribute__((swift_name("doCopy(message:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLKotlinThrowable *cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherSuccess")))
@interface USLEitherSuccess<T> : USLEither<T>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (USLEitherSuccess<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExceptionParam")))
@interface USLExceptionParam : USLBase
- (instancetype)initWithMessage:(NSString *)message throwable:(USLKotlinThrowable *)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (USLExceptionParam *)doCopyMessage:(NSString *)message throwable:(USLKotlinThrowable *)throwable __attribute__((swift_name("doCopy(message:throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) USLKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadInjectionsKt")))
@interface USLLoadInjectionsKt : USLBase
+ (void)factoryClassCallback:(id (^)(void))classCallback __attribute__((swift_name("factory(classCallback:)")));
+ (id)get __attribute__((swift_name("get()")));
+ (void)loadInjectionsInjectors:(NSArray<id<USLInjector>> *)injectors __attribute__((swift_name("loadInjections(injectors:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface USLKotlinEnumCompanion : USLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) USLKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface USLKotlinArray<T> : USLBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(USLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<USLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface USLKotlinNothing : USLBase
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol USLKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol USLKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol USLKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol USLKotlinKClass <USLKotlinKDeclarationContainer, USLKotlinKAnnotatedElement, USLKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface USLKotlinThrowable : USLBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(USLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(USLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (USLKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) USLKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol USLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
