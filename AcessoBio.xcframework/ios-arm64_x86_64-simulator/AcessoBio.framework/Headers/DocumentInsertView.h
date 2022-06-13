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
#import "CameraMain.h"
#import "UnicoCheck.h"

typedef NS_ENUM(NSInteger, OperationType) {
    Default,
    OCR,
    Facematch
};

NS_ASSUME_NONNULL_BEGIN

@interface DocumentInsertView : CameraMain {
    UIView *vFlash;
    UIActivityIndicatorView *spinFlash;
}

@property (assign, nonatomic)NSInteger type; 
@property (strong, nonatomic) UnicoCheck *core;

@property (assign, nonatomic) OperationType operationType;

@end

NS_ASSUME_NONNULL_END
