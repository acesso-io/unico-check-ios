//
//  UIImageUtils.h
//  FaceCapture
//
//  Created by Arkivus on 09/03/17.
//  Copyright © 2017 Arkivus. All rights reserved.
//

@import Foundation;
@import UIKit;

@interface UIImageUtils : NSObject

+ (UIImage *)flipImage:(UIImage *)image;

+ (UIImage *)imageRotatedByDegrees:(UIImage*)oldImage deg:(CGFloat)degrees;

+ (NSString *)getBase64Image:(UIImage*)image;

+ (BOOL)fb_compareWithImage:(UIImage *)image imageToCompare: (UIImage *)imageToCompare tolerance:(CGFloat)tolerance;

+ (UIImage *)imageToGreyImage:(UIImage *)image;

+ (void)generateHashFromImage: (UIImage *)image;

+ (UIImage *)crop:(CGRect)rect image :(UIImage *)image;

@end
