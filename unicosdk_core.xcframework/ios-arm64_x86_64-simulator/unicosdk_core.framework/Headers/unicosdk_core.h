#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Unicosdk_coreDefaultLogger, Unicosdk_coreSensorValue, Unicosdk_coreAccelerometerDeviceBehavior, Unicosdk_coreAppSec, Unicosdk_coreAttempts, Unicosdk_coreFaceBehavior, Unicosdk_coreDeviceBehavior, Unicosdk_coreBehaviors, Unicosdk_coreCameraTypes, Unicosdk_coreCameraTypesDocument, Unicosdk_coreCameraTypesDocumentDriversLicense, Unicosdk_coreCameraTypesDocumentDriversLicenseBack, Unicosdk_coreCameraTypesDocumentDriversLicenseFront, Unicosdk_coreCameraTypesDocumentDriversLicenseFull, Unicosdk_coreCameraTypesDocumentID, Unicosdk_coreCameraTypesDocumentIDBack, Unicosdk_coreCameraTypesDocumentIDFront, Unicosdk_coreCameraTypesDocumentNewID, Unicosdk_coreCameraTypesDocumentNewIDBack, Unicosdk_coreCameraTypesDocumentNewIDFront, Unicosdk_coreCameraTypesDocumentOther, Unicosdk_coreCameraTypesDocumentRegistration, Unicosdk_coreCameraTypesSelfie, Unicosdk_coreCameraTypesSelfieDefault, Unicosdk_coreCameraTypesSelfieLiveness, Unicosdk_coreCameraTypesSelfieSmart, Unicosdk_coreSilhouette, Unicosdk_coreImage, Unicosdk_coreJwtInfo, Unicosdk_coreVideo, Unicosdk_coreTimers, Unicosdk_coreConnections, Unicosdk_coreCapture, Unicosdk_coreOSTypes, Unicosdk_coreDeviceInfo, Unicosdk_coreErrorSDK, Unicosdk_coreGeolocation, Unicosdk_coreInfoValue, Unicosdk_coreIInfo, Unicosdk_coreKotlinEnumCompanion, Unicosdk_coreKotlinEnum<E>, Unicosdk_coreKotlinArray<T>, Unicosdk_coreOriginTypes, Unicosdk_coreOther, Unicosdk_corePlatformTypes, Unicosdk_coreSize, Unicosdk_coreEitherError, Unicosdk_coreEitherSuccess<T>, Unicosdk_coreKotlinNothing, Unicosdk_coreDependencyInjection, Unicosdk_coreDateKMM, Unicosdk_coreEither<__covariant T>, Unicosdk_coreEitherEmpty, Unicosdk_coreKotlinThrowable, Unicosdk_coreExceptionParam;

@protocol Unicosdk_coreBaseCameraTypes, Unicosdk_coreKotlinComparable, Unicosdk_coreUseCase, Unicosdk_coreAddProviderUseCase, Unicosdk_coreLogProviderRepository, Unicosdk_coreLogProvider, Unicosdk_coreGetLogUseCase, Unicosdk_coreMapToJsonUseCase, Unicosdk_coreSetLogAppSecUseCase, Unicosdk_coreSetLogAttemptsUseCase, Unicosdk_coreSetLogCallbackUseCase, Unicosdk_coreSetLogCameraTypeUseCase, Unicosdk_coreSetLogCameraUseCase, Unicosdk_coreSetLogCaptureUseCase, Unicosdk_coreSetLogDeviceInfoUseCase, Unicosdk_coreSetLogDomainUseCase, Unicosdk_coreSetLogErrorSdkUseCase, Unicosdk_coreSetLogGeolocationUseCase, Unicosdk_coreSetLogIInfoUseCase, Unicosdk_coreSetLogOriginUseCase, Unicosdk_coreSetLogOthersUseCase, Unicosdk_coreSetLogPlataformUseCase, Unicosdk_coreSetLogStatusUseCase, Unicosdk_coreSetLogVersionUseCase, Unicosdk_coreSetUuidUseCase, Unicosdk_coreKotlinKClass, Unicosdk_coreInjector, Unicosdk_coreKotlinIterator, Unicosdk_coreKotlinKDeclarationContainer, Unicosdk_coreKotlinKAnnotatedElement, Unicosdk_coreKotlinKClassifier;

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
@interface Unicosdk_coreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface Unicosdk_coreBase (Unicosdk_coreBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface Unicosdk_coreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface Unicosdk_coreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorUnicosdk_coreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface Unicosdk_coreNumber : NSNumber
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
@end;

__attribute__((swift_name("KotlinByte")))
@interface Unicosdk_coreByte : Unicosdk_coreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface Unicosdk_coreUByte : Unicosdk_coreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface Unicosdk_coreShort : Unicosdk_coreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface Unicosdk_coreUShort : Unicosdk_coreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface Unicosdk_coreInt : Unicosdk_coreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface Unicosdk_coreUInt : Unicosdk_coreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface Unicosdk_coreLong : Unicosdk_coreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface Unicosdk_coreULong : Unicosdk_coreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface Unicosdk_coreFloat : Unicosdk_coreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface Unicosdk_coreDouble : Unicosdk_coreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface Unicosdk_coreBoolean : Unicosdk_coreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLogger")))
@interface Unicosdk_coreDefaultLogger : Unicosdk_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)defaultLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreDefaultLogger *shared __attribute__((swift_name("shared")));
- (void)build __attribute__((swift_name("build()")));
@end;

__attribute__((swift_name("Logger")))
@protocol Unicosdk_coreLogger
@required
- (void)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccelerometerDeviceBehavior")))
@interface Unicosdk_coreAccelerometerDeviceBehavior : Unicosdk_coreBase
- (instancetype)initWithX:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)x y:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)y z:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)z __attribute__((swift_name("init(x:y:z:)"))) __attribute__((objc_designated_initializer));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreAccelerometerDeviceBehavior *)doCopyX:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)x y:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)y z:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)z __attribute__((swift_name("doCopy(x:y:z:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable x __attribute__((swift_name("x")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable y __attribute__((swift_name("y")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable z __attribute__((swift_name("z")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppSec")))
@interface Unicosdk_coreAppSec : Unicosdk_coreBase
- (instancetype)initWithRootDetection:(BOOL)rootDetection usbPlugged:(BOOL)usbPlugged remoteDebug:(BOOL)remoteDebug usbDebugging:(BOOL)usbDebugging adbInfo:(NSString *)adbInfo monkeyRunner:(NSString *)monkeyRunner keyboardPlugged:(BOOL)keyboardPlugged mousePlugged:(BOOL)mousePlugged screenRecord:(BOOL)screenRecord __attribute__((swift_name("init(rootDetection:usbPlugged:remoteDebug:usbDebugging:adbInfo:monkeyRunner:keyboardPlugged:mousePlugged:screenRecord:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreAppSec *)doCopyRootDetection:(BOOL)rootDetection usbPlugged:(BOOL)usbPlugged remoteDebug:(BOOL)remoteDebug usbDebugging:(BOOL)usbDebugging adbInfo:(NSString *)adbInfo monkeyRunner:(NSString *)monkeyRunner keyboardPlugged:(BOOL)keyboardPlugged mousePlugged:(BOOL)mousePlugged screenRecord:(BOOL)screenRecord __attribute__((swift_name("doCopy(rootDetection:usbPlugged:remoteDebug:usbDebugging:adbInfo:monkeyRunner:keyboardPlugged:mousePlugged:screenRecord:)")));
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Attempts")))
@interface Unicosdk_coreAttempts : Unicosdk_coreBase
- (instancetype)initWithUuid:(NSString * _Nullable)uuid __attribute__((swift_name("init(uuid:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreAttempts *)doCopyUuid:(NSString * _Nullable)uuid __attribute__((swift_name("doCopy(uuid:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable uuid __attribute__((swift_name("uuid")));
@end;

__attribute__((swift_name("BaseCameraTypes")))
@protocol Unicosdk_coreBaseCameraTypes
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Behaviors")))
@interface Unicosdk_coreBehaviors : Unicosdk_coreBase
- (instancetype)initWithFace:(Unicosdk_coreFaceBehavior * _Nullable)face device:(Unicosdk_coreDeviceBehavior * _Nullable)device __attribute__((swift_name("init(face:device:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreFaceBehavior * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDeviceBehavior * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreBehaviors *)doCopyFace:(Unicosdk_coreFaceBehavior * _Nullable)face device:(Unicosdk_coreDeviceBehavior * _Nullable)device __attribute__((swift_name("doCopy(face:device:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreDeviceBehavior * _Nullable device __attribute__((swift_name("device")));
@property (readonly) Unicosdk_coreFaceBehavior * _Nullable face __attribute__((swift_name("face")));
@end;

__attribute__((swift_name("CameraTypes")))
@interface Unicosdk_coreCameraTypes : Unicosdk_coreBase
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.Document")))
@interface Unicosdk_coreCameraTypesDocument : Unicosdk_coreCameraTypes
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)document __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocument *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CameraTypes.DocumentDriversLicense")))
@interface Unicosdk_coreCameraTypesDocumentDriversLicense : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentDriversLicenseBack")))
@interface Unicosdk_coreCameraTypesDocumentDriversLicenseBack : Unicosdk_coreCameraTypesDocumentDriversLicense
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentDriversLicenseBack *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentDriversLicenseFront")))
@interface Unicosdk_coreCameraTypesDocumentDriversLicenseFront : Unicosdk_coreCameraTypesDocumentDriversLicense
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)front __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentDriversLicenseFront *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentDriversLicenseFull")))
@interface Unicosdk_coreCameraTypesDocumentDriversLicenseFull : Unicosdk_coreCameraTypesDocumentDriversLicense
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)full __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentDriversLicenseFull *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CameraTypes.DocumentID")))
@interface Unicosdk_coreCameraTypesDocumentID : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentIDBack")))
@interface Unicosdk_coreCameraTypesDocumentIDBack : Unicosdk_coreCameraTypesDocumentID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentIDBack *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentIDFront")))
@interface Unicosdk_coreCameraTypesDocumentIDFront : Unicosdk_coreCameraTypesDocumentID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)front __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentIDFront *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("CameraTypes.DocumentNewID")))
@interface Unicosdk_coreCameraTypesDocumentNewID : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentNewIDBack")))
@interface Unicosdk_coreCameraTypesDocumentNewIDBack : Unicosdk_coreCameraTypesDocumentNewID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)back __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentNewIDBack *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentNewIDFront")))
@interface Unicosdk_coreCameraTypesDocumentNewIDFront : Unicosdk_coreCameraTypesDocumentNewID
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)front __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentNewIDFront *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentOther")))
@interface Unicosdk_coreCameraTypesDocumentOther : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
- (instancetype)initWithDescription:(NSString *)description __attribute__((swift_name("init(description:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreCameraTypesDocumentOther *)doCopyDescription:(NSString *)description __attribute__((swift_name("doCopy(description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.DocumentRegistration")))
@interface Unicosdk_coreCameraTypesDocumentRegistration : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)registration __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesDocumentRegistration *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.Selfie")))
@interface Unicosdk_coreCameraTypesSelfie : Unicosdk_coreCameraTypes
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)selfie __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesSelfie *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.SelfieDefault")))
@interface Unicosdk_coreCameraTypesSelfieDefault : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesSelfieDefault *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.SelfieLiveness")))
@interface Unicosdk_coreCameraTypesSelfieLiveness : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)liveness __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesSelfieLiveness *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraTypes.SelfieSmart")))
@interface Unicosdk_coreCameraTypesSelfieSmart : Unicosdk_coreBase <Unicosdk_coreBaseCameraTypes>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)smart __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreCameraTypesSelfieSmart *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capture")))
@interface Unicosdk_coreCapture : Unicosdk_coreBase
- (instancetype)initWithTimestamp:(NSString * _Nullable)timestamp camera:(NSString * _Nullable)camera cameraVendor:(NSString * _Nullable)cameraVendor type:(NSString * _Nullable)type screenBrightness:(Unicosdk_coreDouble * _Nullable)screenBrightness lightingSensor:(Unicosdk_coreDouble * _Nullable)lightingSensor silhouette:(Unicosdk_coreSilhouette * _Nullable)silhouette image:(Unicosdk_coreImage * _Nullable)image jwt:(Unicosdk_coreJwtInfo * _Nullable)jwt video:(Unicosdk_coreVideo * _Nullable)video isCameraTypeChanged:(Unicosdk_coreBoolean * _Nullable)isCameraTypeChanged timers:(Unicosdk_coreTimers * _Nullable)timers connections:(Unicosdk_coreConnections * _Nullable)connections behaviors:(Unicosdk_coreBehaviors * _Nullable)behaviors __attribute__((swift_name("init(timestamp:camera:cameraVendor:type:screenBrightness:lightingSensor:silhouette:image:jwt:video:isCameraTypeChanged:timers:connections:behaviors:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreVideo * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreBoolean * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreTimers * _Nullable)component12 __attribute__((swift_name("component12()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreConnections * _Nullable)component13 __attribute__((swift_name("component13()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreBehaviors * _Nullable)component14 __attribute__((swift_name("component14()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDouble * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDouble * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreSilhouette * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreImage * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreJwtInfo * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreCapture *)doCopyTimestamp:(NSString * _Nullable)timestamp camera:(NSString * _Nullable)camera cameraVendor:(NSString * _Nullable)cameraVendor type:(NSString * _Nullable)type screenBrightness:(Unicosdk_coreDouble * _Nullable)screenBrightness lightingSensor:(Unicosdk_coreDouble * _Nullable)lightingSensor silhouette:(Unicosdk_coreSilhouette * _Nullable)silhouette image:(Unicosdk_coreImage * _Nullable)image jwt:(Unicosdk_coreJwtInfo * _Nullable)jwt video:(Unicosdk_coreVideo * _Nullable)video isCameraTypeChanged:(Unicosdk_coreBoolean * _Nullable)isCameraTypeChanged timers:(Unicosdk_coreTimers * _Nullable)timers connections:(Unicosdk_coreConnections * _Nullable)connections behaviors:(Unicosdk_coreBehaviors * _Nullable)behaviors __attribute__((swift_name("doCopy(timestamp:camera:cameraVendor:type:screenBrightness:lightingSensor:silhouette:image:jwt:video:isCameraTypeChanged:timers:connections:behaviors:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreBehaviors * _Nullable behaviors __attribute__((swift_name("behaviors")));
@property (readonly) NSString * _Nullable camera __attribute__((swift_name("camera")));
@property (readonly) NSString * _Nullable cameraVendor __attribute__((swift_name("cameraVendor")));
@property (readonly) Unicosdk_coreConnections * _Nullable connections __attribute__((swift_name("connections")));
@property (readonly) Unicosdk_coreImage * _Nullable image __attribute__((swift_name("image")));
@property (readonly) Unicosdk_coreBoolean * _Nullable isCameraTypeChanged __attribute__((swift_name("isCameraTypeChanged")));
@property (readonly) Unicosdk_coreJwtInfo * _Nullable jwt __attribute__((swift_name("jwt")));
@property (readonly) Unicosdk_coreDouble * _Nullable lightingSensor __attribute__((swift_name("lightingSensor")));
@property (readonly) Unicosdk_coreDouble * _Nullable screenBrightness __attribute__((swift_name("screenBrightness")));
@property (readonly) Unicosdk_coreSilhouette * _Nullable silhouette __attribute__((swift_name("silhouette")));
@property (readonly) Unicosdk_coreTimers * _Nullable timers __attribute__((swift_name("timers")));
@property (readonly) NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property (readonly) Unicosdk_coreVideo * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Connections")))
@interface Unicosdk_coreConnections : Unicosdk_coreBase
- (instancetype)initWithType:(NSString * _Nullable)type rtt:(NSString * _Nullable)rtt effectiveType:(NSString * _Nullable)effectiveType downlink:(NSString * _Nullable)downlink ipAddress:(NSString * _Nullable)ipAddress ipPort:(NSString * _Nullable)ipPort __attribute__((swift_name("init(type:rtt:effectiveType:downlink:ipAddress:ipPort:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreConnections *)doCopyType:(NSString * _Nullable)type rtt:(NSString * _Nullable)rtt effectiveType:(NSString * _Nullable)effectiveType downlink:(NSString * _Nullable)downlink ipAddress:(NSString * _Nullable)ipAddress ipPort:(NSString * _Nullable)ipPort __attribute__((swift_name("doCopy(type:rtt:effectiveType:downlink:ipAddress:ipPort:)")));
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceBehavior")))
@interface Unicosdk_coreDeviceBehavior : Unicosdk_coreBase
- (instancetype)initWithAccelerometer:(Unicosdk_coreAccelerometerDeviceBehavior * _Nullable)accelerometer pitch:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)pitch roll:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)roll yaw:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)yaw __attribute__((swift_name("init(accelerometer:pitch:roll:yaw:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreAccelerometerDeviceBehavior * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDeviceBehavior *)doCopyAccelerometer:(Unicosdk_coreAccelerometerDeviceBehavior * _Nullable)accelerometer pitch:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)pitch roll:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)roll yaw:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)yaw __attribute__((swift_name("doCopy(accelerometer:pitch:roll:yaw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreAccelerometerDeviceBehavior * _Nullable accelerometer __attribute__((swift_name("accelerometer")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable pitch __attribute__((swift_name("pitch")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable roll __attribute__((swift_name("roll")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable yaw __attribute__((swift_name("yaw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceInfo")))
@interface Unicosdk_coreDeviceInfo : Unicosdk_coreBase
- (instancetype)initWithId:(NSString * _Nullable)id model:(NSString * _Nullable)model vendor:(NSString * _Nullable)vendor os:(Unicosdk_coreOSTypes * _Nullable)os api:(NSString * _Nullable)api ua:(NSString * _Nullable)ua systemPatch:(NSString * _Nullable)systemPatch kernelVersion:(NSString * _Nullable)kernelVersion processorManufacturer:(NSString * _Nullable)processorManufacturer SIMCardNumber:(NSString * _Nullable)SIMCardNumber __attribute__((swift_name("init(id:model:vendor:os:api:ua:systemPatch:kernelVersion:processorManufacturer:SIMCardNumber:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreOSTypes * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDeviceInfo *)doCopyId:(NSString * _Nullable)id model:(NSString * _Nullable)model vendor:(NSString * _Nullable)vendor os:(Unicosdk_coreOSTypes * _Nullable)os api:(NSString * _Nullable)api ua:(NSString * _Nullable)ua systemPatch:(NSString * _Nullable)systemPatch kernelVersion:(NSString * _Nullable)kernelVersion processorManufacturer:(NSString * _Nullable)processorManufacturer SIMCardNumber:(NSString * _Nullable)SIMCardNumber __attribute__((swift_name("doCopy(id:model:vendor:os:api:ua:systemPatch:kernelVersion:processorManufacturer:SIMCardNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable SIMCardNumber __attribute__((swift_name("SIMCardNumber")));
@property (readonly) NSString * _Nullable api __attribute__((swift_name("api")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable kernelVersion __attribute__((swift_name("kernelVersion")));
@property (readonly) NSString * _Nullable model __attribute__((swift_name("model")));
@property (readonly) Unicosdk_coreOSTypes * _Nullable os __attribute__((swift_name("os")));
@property (readonly) NSString * _Nullable processorManufacturer __attribute__((swift_name("processorManufacturer")));
@property (readonly) NSString * _Nullable systemPatch __attribute__((swift_name("systemPatch")));
@property (readonly) NSString * _Nullable ua __attribute__((swift_name("ua")));
@property (readonly) NSString * _Nullable vendor __attribute__((swift_name("vendor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorSDK")))
@interface Unicosdk_coreErrorSDK : Unicosdk_coreBase
- (instancetype)initWithCode:(Unicosdk_coreInt * _Nullable)code title:(NSString * _Nullable)title message:(NSString * _Nullable)message __attribute__((swift_name("init(code:title:message:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreErrorSDK *)doCopyCode:(Unicosdk_coreInt * _Nullable)code title:(NSString * _Nullable)title message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(code:title:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreInt * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FaceBehavior")))
@interface Unicosdk_coreFaceBehavior : Unicosdk_coreBase
- (instancetype)initWithBlinks:(Unicosdk_coreInt * _Nullable)blinks pitch:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)pitch roll:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)roll yaw:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)yaw __attribute__((swift_name("init(blinks:pitch:roll:yaw:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreSensorValue *> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreFaceBehavior *)doCopyBlinks:(Unicosdk_coreInt * _Nullable)blinks pitch:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)pitch roll:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)roll yaw:(NSArray<Unicosdk_coreSensorValue *> * _Nullable)yaw __attribute__((swift_name("doCopy(blinks:pitch:roll:yaw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreInt * _Nullable blinks __attribute__((swift_name("blinks")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable pitch __attribute__((swift_name("pitch")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable roll __attribute__((swift_name("roll")));
@property (readonly) NSArray<Unicosdk_coreSensorValue *> * _Nullable yaw __attribute__((swift_name("yaw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Geolocation")))
@interface Unicosdk_coreGeolocation : Unicosdk_coreBase
- (instancetype)initWithLat:(Unicosdk_coreDouble * _Nullable)lat lng:(Unicosdk_coreDouble * _Nullable)lng alt:(Unicosdk_coreDouble * _Nullable)alt precision:(Unicosdk_coreDouble * _Nullable)precision city:(NSString * _Nullable)city uf:(NSString * _Nullable)uf country:(NSString * _Nullable)country postalcode:(NSString * _Nullable)postalcode address:(NSString * _Nullable)address gpsFlag:(NSString * _Nullable)gpsFlag mode:(NSString * _Nullable)mode __attribute__((swift_name("init(lat:lng:alt:precision:city:uf:country:postalcode:address:gpsFlag:mode:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreDouble * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDouble * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDouble * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDouble * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreGeolocation *)doCopyLat:(Unicosdk_coreDouble * _Nullable)lat lng:(Unicosdk_coreDouble * _Nullable)lng alt:(Unicosdk_coreDouble * _Nullable)alt precision:(Unicosdk_coreDouble * _Nullable)precision city:(NSString * _Nullable)city uf:(NSString * _Nullable)uf country:(NSString * _Nullable)country postalcode:(NSString * _Nullable)postalcode address:(NSString * _Nullable)address gpsFlag:(NSString * _Nullable)gpsFlag mode:(NSString * _Nullable)mode __attribute__((swift_name("doCopy(lat:lng:alt:precision:city:uf:country:postalcode:address:gpsFlag:mode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) Unicosdk_coreDouble * _Nullable alt __attribute__((swift_name("alt")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable gpsFlag __attribute__((swift_name("gpsFlag")));
@property (readonly) Unicosdk_coreDouble * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) Unicosdk_coreDouble * _Nullable lng __attribute__((swift_name("lng")));
@property (readonly) NSString * _Nullable mode __attribute__((swift_name("mode")));
@property (readonly) NSString * _Nullable postalcode __attribute__((swift_name("postalcode")));
@property (readonly) Unicosdk_coreDouble * _Nullable precision __attribute__((swift_name("precision")));
@property (readonly) NSString * _Nullable uf __attribute__((swift_name("uf")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IInfo")))
@interface Unicosdk_coreIInfo : Unicosdk_coreBase
- (instancetype)initWithStatus:(Unicosdk_coreBoolean * _Nullable)status info:(NSArray<Unicosdk_coreInfoValue *> * _Nullable)info __attribute__((swift_name("init(status:info:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<Unicosdk_coreInfoValue *> * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreIInfo *)doCopyStatus:(Unicosdk_coreBoolean * _Nullable)status info:(NSArray<Unicosdk_coreInfoValue *> * _Nullable)info __attribute__((swift_name("doCopy(status:info:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<Unicosdk_coreInfoValue *> * _Nullable info __attribute__((swift_name("info")));
@property (readonly) Unicosdk_coreBoolean * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface Unicosdk_coreImage : Unicosdk_coreBase
- (instancetype)initWithResolution:(NSString * _Nullable)resolution __attribute__((swift_name("init(resolution:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreImage *)doCopyResolution:(NSString * _Nullable)resolution __attribute__((swift_name("doCopy(resolution:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable resolution __attribute__((swift_name("resolution")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InfoValue")))
@interface Unicosdk_coreInfoValue : Unicosdk_coreBase
- (instancetype)initWithName:(NSString *)name value:(id)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreInfoValue *)doCopyName:(NSString *)name value:(id)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JwtInfo")))
@interface Unicosdk_coreJwtInfo : Unicosdk_coreBase
- (instancetype)initWithWeight:(Unicosdk_coreLong * _Nullable)weight __attribute__((swift_name("init(weight:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreLong * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreJwtInfo *)doCopyWeight:(Unicosdk_coreLong * _Nullable)weight __attribute__((swift_name("doCopy(weight:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreLong * _Nullable weight __attribute__((swift_name("weight")));
@end;

__attribute__((swift_name("LogProvider")))
@protocol Unicosdk_coreLogProvider
@required
- (void)addPropertyKey:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("addProperty(key:value:)")));
- (NSDictionary<NSString *, id> *)get __attribute__((swift_name("get()")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Unicosdk_coreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Unicosdk_coreKotlinEnum<E> : Unicosdk_coreBase <Unicosdk_coreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) Unicosdk_coreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OSTypes")))
@interface Unicosdk_coreOSTypes : Unicosdk_coreKotlinEnum<Unicosdk_coreOSTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Unicosdk_coreOSTypes *android __attribute__((swift_name("android")));
@property (class, readonly) Unicosdk_coreOSTypes *ios __attribute__((swift_name("ios")));
@property (class, readonly) Unicosdk_coreOSTypes *windows __attribute__((swift_name("windows")));
@property (class, readonly) Unicosdk_coreOSTypes *macos __attribute__((swift_name("macos")));
+ (Unicosdk_coreKotlinArray<Unicosdk_coreOSTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OriginTypes")))
@interface Unicosdk_coreOriginTypes : Unicosdk_coreKotlinEnum<Unicosdk_coreOriginTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Unicosdk_coreOriginTypes *native __attribute__((swift_name("native")));
@property (class, readonly) Unicosdk_coreOriginTypes *flutter __attribute__((swift_name("flutter")));
@property (class, readonly) Unicosdk_coreOriginTypes *reactNative __attribute__((swift_name("reactNative")));
+ (Unicosdk_coreKotlinArray<Unicosdk_coreOriginTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Other")))
@interface Unicosdk_coreOther : Unicosdk_coreBase
- (instancetype)initWithName:(NSString * _Nullable)name value:(id _Nullable)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreOther *)doCopyName:(NSString * _Nullable)name value:(id _Nullable)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTypes")))
@interface Unicosdk_corePlatformTypes : Unicosdk_coreKotlinEnum<Unicosdk_corePlatformTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Unicosdk_corePlatformTypes *android __attribute__((swift_name("android")));
@property (class, readonly) Unicosdk_corePlatformTypes *ios __attribute__((swift_name("ios")));
@property (class, readonly) Unicosdk_corePlatformTypes *js __attribute__((swift_name("js")));
+ (Unicosdk_coreKotlinArray<Unicosdk_corePlatformTypes *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SensorValue")))
@interface Unicosdk_coreSensorValue : Unicosdk_coreBase
- (instancetype)initWithValue:(Unicosdk_coreDouble * _Nullable)value timestamp:(Unicosdk_coreLong * _Nullable)timestamp __attribute__((swift_name("init(value:timestamp:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreDouble * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreLong * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreSensorValue *)doCopyValue:(Unicosdk_coreDouble * _Nullable)value timestamp:(Unicosdk_coreLong * _Nullable)timestamp __attribute__((swift_name("doCopy(value:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) Unicosdk_coreDouble * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Silhouette")))
@interface Unicosdk_coreSilhouette : Unicosdk_coreBase
- (instancetype)initWithW:(Unicosdk_coreInt * _Nullable)w h:(Unicosdk_coreInt * _Nullable)h __attribute__((swift_name("init(w:h:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreSilhouette *)doCopyW:(Unicosdk_coreInt * _Nullable)w h:(Unicosdk_coreInt * _Nullable)h __attribute__((swift_name("doCopy(w:h:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreInt * _Nullable h __attribute__((swift_name("h")));
@property (readonly) Unicosdk_coreInt * _Nullable w __attribute__((swift_name("w")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Size")))
@interface Unicosdk_coreSize : Unicosdk_coreBase
- (instancetype)initWithHeight:(float)height width:(float)width __attribute__((swift_name("init(height:width:)"))) __attribute__((objc_designated_initializer));
- (float)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (float)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreSize *)doCopyHeight:(float)height width:(float)width __attribute__((swift_name("doCopy(height:width:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float height __attribute__((swift_name("height")));
@property (readonly) float width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Timers")))
@interface Unicosdk_coreTimers : Unicosdk_coreBase
- (instancetype)initWithTotalTime:(Unicosdk_coreInt * _Nullable)totalTime inferenceTime:(Unicosdk_coreInt * _Nullable)inferenceTime openCameraTime:(Unicosdk_coreInt * _Nullable)openCameraTime captureUserTime:(Unicosdk_coreInt * _Nullable)captureUserTime __attribute__((swift_name("init(totalTime:inferenceTime:openCameraTime:captureUserTime:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreInt * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreInt * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreTimers *)doCopyTotalTime:(Unicosdk_coreInt * _Nullable)totalTime inferenceTime:(Unicosdk_coreInt * _Nullable)inferenceTime openCameraTime:(Unicosdk_coreInt * _Nullable)openCameraTime captureUserTime:(Unicosdk_coreInt * _Nullable)captureUserTime __attribute__((swift_name("doCopy(totalTime:inferenceTime:openCameraTime:captureUserTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreInt * _Nullable captureUserTime __attribute__((swift_name("captureUserTime")));
@property (readonly) Unicosdk_coreInt * _Nullable inferenceTime __attribute__((swift_name("inferenceTime")));
@property (readonly) Unicosdk_coreInt * _Nullable openCameraTime __attribute__((swift_name("openCameraTime")));
@property (readonly) Unicosdk_coreInt * _Nullable totalTime __attribute__((swift_name("totalTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Video")))
@interface Unicosdk_coreVideo : Unicosdk_coreBase
- (instancetype)initWithW:(Unicosdk_coreInt * _Nullable)w h:(Unicosdk_coreInt * _Nullable)h aspectRatio:(Unicosdk_coreDouble * _Nullable)aspectRatio __attribute__((swift_name("init(w:h:aspectRatio:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreInt * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreInt * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreDouble * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreVideo *)doCopyW:(Unicosdk_coreInt * _Nullable)w h:(Unicosdk_coreInt * _Nullable)h aspectRatio:(Unicosdk_coreDouble * _Nullable)aspectRatio __attribute__((swift_name("doCopy(w:h:aspectRatio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreDouble * _Nullable aspectRatio __attribute__((swift_name("aspectRatio")));
@property (readonly) Unicosdk_coreInt * _Nullable h __attribute__((swift_name("h")));
@property (readonly) Unicosdk_coreInt * _Nullable w __attribute__((swift_name("w")));
@end;

__attribute__((swift_name("UseCase")))
@protocol Unicosdk_coreUseCase
@required
- (id _Nullable)executeParam:(id _Nullable)param __attribute__((swift_name("execute(param:)")));
- (void)onEmpty __attribute__((swift_name("onEmpty()")));
- (void)onErrorError:(Unicosdk_coreEitherError *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessValue:(Unicosdk_coreEitherSuccess<id> *)value __attribute__((swift_name("onSuccess(value:)")));
@end;

__attribute__((swift_name("AddProviderUseCase")))
@protocol Unicosdk_coreAddProviderUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("GetLogUseCase")))
@protocol Unicosdk_coreGetLogUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("MapToJsonUseCase")))
@protocol Unicosdk_coreMapToJsonUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogAppSecUseCase")))
@protocol Unicosdk_coreSetLogAppSecUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogAttemptsUseCase")))
@protocol Unicosdk_coreSetLogAttemptsUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogCallbackUseCase")))
@protocol Unicosdk_coreSetLogCallbackUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogCameraTypeUseCase")))
@protocol Unicosdk_coreSetLogCameraTypeUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogCameraUseCase")))
@protocol Unicosdk_coreSetLogCameraUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogCaptureUseCase")))
@protocol Unicosdk_coreSetLogCaptureUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogDeviceInfoUseCase")))
@protocol Unicosdk_coreSetLogDeviceInfoUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogDomainUseCase")))
@protocol Unicosdk_coreSetLogDomainUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogErrorSdkUseCase")))
@protocol Unicosdk_coreSetLogErrorSdkUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogGeolocationUseCase")))
@protocol Unicosdk_coreSetLogGeolocationUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogIInfoUseCase")))
@protocol Unicosdk_coreSetLogIInfoUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogOriginUseCase")))
@protocol Unicosdk_coreSetLogOriginUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogOthersUseCase")))
@protocol Unicosdk_coreSetLogOthersUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogPlataformUseCase")))
@protocol Unicosdk_coreSetLogPlataformUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogStatusUseCase")))
@protocol Unicosdk_coreSetLogStatusUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetLogVersionUseCase")))
@protocol Unicosdk_coreSetLogVersionUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((swift_name("SetUuidUseCase")))
@protocol Unicosdk_coreSetUuidUseCase <Unicosdk_coreUseCase>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAddProviderUseCase")))
@interface Unicosdk_coreDefaultAddProviderUseCase : Unicosdk_coreBase <Unicosdk_coreAddProviderUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(id<Unicosdk_coreLogProvider> _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultGetLogUseCase")))
@interface Unicosdk_coreDefaultGetLogUseCase : Unicosdk_coreBase <Unicosdk_coreGetLogUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSDictionary<NSString *, id> *> *)executeParam:(Unicosdk_coreKotlinNothing * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultMapToJsonUseCase")))
@interface Unicosdk_coreDefaultMapToJsonUseCase : Unicosdk_coreBase <Unicosdk_coreMapToJsonUseCase>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString * _Nullable)executeParam:(NSDictionary<NSString *, id> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogAppSecUseCase")))
@interface Unicosdk_coreDefaultSetLogAppSecUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogAppSecUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreAppSec * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogAttemptsUseCase")))
@interface Unicosdk_coreDefaultSetLogAttemptsUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogAttemptsUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(NSArray<Unicosdk_coreAttempts *> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCallbackUseCase")))
@interface Unicosdk_coreDefaultSetLogCallbackUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogCallbackUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCameraTypeUseCase")))
@interface Unicosdk_coreDefaultSetLogCameraTypeUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogCameraTypeUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(id<Unicosdk_coreBaseCameraTypes> _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCameraUseCase")))
@interface Unicosdk_coreDefaultSetLogCameraUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogCameraUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreCameraTypes * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogCaptureUseCase")))
@interface Unicosdk_coreDefaultSetLogCaptureUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogCaptureUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreCapture * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogDeviceInfoUseCase")))
@interface Unicosdk_coreDefaultSetLogDeviceInfoUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogDeviceInfoUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreDeviceInfo * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogDomainUseCase")))
@interface Unicosdk_coreDefaultSetLogDomainUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogDomainUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogErrorSdkUseCase")))
@interface Unicosdk_coreDefaultSetLogErrorSdkUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogErrorSdkUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreErrorSDK * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogGeolocationUseCase")))
@interface Unicosdk_coreDefaultSetLogGeolocationUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogGeolocationUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreGeolocation * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogIInfoUseCase")))
@interface Unicosdk_coreDefaultSetLogIInfoUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogIInfoUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreIInfo * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogOriginUseCase")))
@interface Unicosdk_coreDefaultSetLogOriginUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogOriginUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreOriginTypes * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogOthersUseCase")))
@interface Unicosdk_coreDefaultSetLogOthersUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogOthersUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(NSArray<Unicosdk_coreOther *> * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogPlataformUseCase")))
@interface Unicosdk_coreDefaultSetLogPlataformUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogPlataformUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreOSTypes * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogStatusUseCase")))
@interface Unicosdk_coreDefaultSetLogStatusUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogStatusUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(Unicosdk_coreBoolean * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetLogVersionUseCase")))
@interface Unicosdk_coreDefaultSetLogVersionUseCase : Unicosdk_coreBase <Unicosdk_coreSetLogVersionUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean * _Nullable)executeParam:(NSString * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultSetUuidUseCase")))
@interface Unicosdk_coreDefaultSetUuidUseCase : Unicosdk_coreBase <Unicosdk_coreSetUuidUseCase>
- (instancetype)initWithRepository:(id<Unicosdk_coreLogProviderRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreBoolean *)executeParam:(Unicosdk_coreKotlinNothing * _Nullable)param __attribute__((swift_name("execute(param:)")));
@end;

__attribute__((swift_name("LogProviderRepository")))
@protocol Unicosdk_coreLogProviderRepository
@required
- (NSArray<id<Unicosdk_coreLogProvider>> *)getAll __attribute__((swift_name("getAll()")));
- (id<Unicosdk_coreLogProvider>)insertProvider:(id<Unicosdk_coreLogProvider>)provider __attribute__((swift_name("insert(provider:)")));
- (BOOL)removeId:(NSString *)id __attribute__((swift_name("remove(id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLogProviderRepository")))
@interface Unicosdk_coreDefaultLogProviderRepository : Unicosdk_coreBase <Unicosdk_coreLogProviderRepository>
- (instancetype)initWithProviders:(Unicosdk_coreMutableDictionary<NSString *, id<Unicosdk_coreLogProvider>> *)providers __attribute__((swift_name("init(providers:)"))) __attribute__((objc_designated_initializer));
- (NSArray<id<Unicosdk_coreLogProvider>> *)getAll __attribute__((swift_name("getAll()")));
- (id<Unicosdk_coreLogProvider>)insertProvider:(id<Unicosdk_coreLogProvider>)provider __attribute__((swift_name("insert(provider:)")));
- (BOOL)removeId:(NSString *)id __attribute__((swift_name("remove(id:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependencyInjection")))
@interface Unicosdk_coreDependencyInjection : Unicosdk_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dependencyInjection __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreDependencyInjection *shared __attribute__((swift_name("shared")));
- (void)factoryKclass:(id<Unicosdk_coreKotlinKClass>)kclass classCallback:(id (^)(void))classCallback __attribute__((swift_name("factory(kclass:classCallback:)")));
- (id _Nullable)getKclass:(id<Unicosdk_coreKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (void)loadInjectors:(NSArray<id<Unicosdk_coreInjector>> *)injectors __attribute__((swift_name("load(injectors:)")));
@end;

__attribute__((swift_name("Injector")))
@protocol Unicosdk_coreInjector
@required
- (void)inject __attribute__((swift_name("inject()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateKMM")))
@interface Unicosdk_coreDateKMM : Unicosdk_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dateKMM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreDateKMM *shared __attribute__((swift_name("shared")));
- (int64_t)getTimestamp __attribute__((swift_name("getTimestamp()")));
@end;

__attribute__((swift_name("UseCaseDecorator")))
@interface Unicosdk_coreUseCaseDecorator<P, R> : Unicosdk_coreBase <Unicosdk_coreUseCase>
- (instancetype)initWithUseCase:(id<Unicosdk_coreUseCase>)useCase __attribute__((swift_name("init(useCase:)"))) __attribute__((objc_designated_initializer));
- (R _Nullable)executeParam:(P _Nullable)param __attribute__((swift_name("execute(param:)")));
- (void)onEmpty __attribute__((swift_name("onEmpty()")));
- (void)onErrorError:(Unicosdk_coreEitherError *)error __attribute__((swift_name("onError(error:)")));
- (void)onSuccessValue:(Unicosdk_coreEitherSuccess<R> *)value __attribute__((swift_name("onSuccess(value:)")));
- (void)processParam:(P _Nullable)param __attribute__((swift_name("process(param:)")));
@end;

__attribute__((swift_name("Either")))
@interface Unicosdk_coreEither<__covariant T> : Unicosdk_coreBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherEmpty")))
@interface Unicosdk_coreEitherEmpty : Unicosdk_coreEither<Unicosdk_coreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreEitherEmpty *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherError")))
@interface Unicosdk_coreEitherError : Unicosdk_coreEither<Unicosdk_coreKotlinNothing *>
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Unicosdk_coreKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreKotlinThrowable *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreEitherError *)doCopyMessage:(NSString * _Nullable)message cause:(Unicosdk_coreKotlinThrowable *)cause __attribute__((swift_name("doCopy(message:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreKotlinThrowable *cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherSuccess")))
@interface Unicosdk_coreEitherSuccess<T> : Unicosdk_coreEither<T>
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreEitherSuccess<T> *)doCopyValue:(T _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExceptionParam")))
@interface Unicosdk_coreExceptionParam : Unicosdk_coreBase
- (instancetype)initWithMessage:(NSString *)message throwable:(Unicosdk_coreKotlinThrowable *)throwable __attribute__((swift_name("init(message:throwable:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreKotlinThrowable *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (Unicosdk_coreExceptionParam *)doCopyMessage:(NSString *)message throwable:(Unicosdk_coreKotlinThrowable *)throwable __attribute__((swift_name("doCopy(message:throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) Unicosdk_coreKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadInjectionsKt")))
@interface Unicosdk_coreLoadInjectionsKt : Unicosdk_coreBase
+ (void)factoryClassCallback:(id (^)(void))classCallback __attribute__((swift_name("factory(classCallback:)")));
+ (id)get __attribute__((swift_name("get()")));
+ (void)loadInjectionsInjectors:(NSArray<id<Unicosdk_coreInjector>> *)injectors __attribute__((swift_name("loadInjections(injectors:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface Unicosdk_coreKotlinEnumCompanion : Unicosdk_coreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) Unicosdk_coreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Unicosdk_coreKotlinArray<T> : Unicosdk_coreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(Unicosdk_coreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Unicosdk_coreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Unicosdk_coreKotlinNothing : Unicosdk_coreBase
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Unicosdk_coreKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Unicosdk_coreKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Unicosdk_coreKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Unicosdk_coreKotlinKClass <Unicosdk_coreKotlinKDeclarationContainer, Unicosdk_coreKotlinKAnnotatedElement, Unicosdk_coreKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Unicosdk_coreKotlinThrowable : Unicosdk_coreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Unicosdk_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Unicosdk_coreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Unicosdk_coreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Unicosdk_coreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Unicosdk_coreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
