//
//  UIViewWithHole.h
//  CaptureAcesso
//
//  Created by Matheus Domingos on 29/10/19.
//  Created by unico idtech. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

@interface UIViewWithHole : UIView {
    CGRect rectTransparent;
    UIColor *backgroundColor;
    CGFloat cornerRadius;
    CAShapeLayer *shapeLayerSuccess;
    
    UIBezierPath *clipPath;
    CGContextRef context;
}


@property (strong, nonatomic)  CAShapeLayer *shapeLayer;

- (void)startAnimationSuccess;
- (void)startAnimationError;

- (id)initWithFrame:(CGRect)frame backgroundColor:(UIColor*)color andTransparentRect:(CGRect)rect cornerRadius: (CGFloat)radius;

@end

NS_ASSUME_NONNULL_END
