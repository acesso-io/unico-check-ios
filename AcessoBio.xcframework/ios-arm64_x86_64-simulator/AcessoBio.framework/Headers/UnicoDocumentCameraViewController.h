//
//  DocumentInsertView.h
//  CaptureAcesso
//
//  Created by Matheus Domingos on 20/05/19.
//  Created by unico idtech. All rights reserved.
//

@import Foundation;
@import UIKit;
@import CoreImage;
#import "UnicoCameraViewController.h"
#import "UnicoCheck.h"

typedef NS_ENUM(NSInteger, OperationType) {
    Default,
    OCR,
    Facematch
};

NS_ASSUME_NONNULL_BEGIN

@interface UnicoDocumentCameraViewController : UnicoCameraViewController {
    UIView *vFlash;
    UIImageView *ivMask;
    UILabel *lbStatus;
    UIActivityIndicatorView *spinFlash;
    NSTimer *timerToTimeoutSession;
}

@property (readwrite) double secondsTimeoutSession;
@property (assign, nonatomic)NSInteger type;
@property (assign, nonatomic) OperationType operationType;
@end

NS_ASSUME_NONNULL_END
