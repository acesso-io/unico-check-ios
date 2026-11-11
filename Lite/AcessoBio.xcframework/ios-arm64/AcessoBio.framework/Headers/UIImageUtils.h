@import UIKit;

@interface UIImageUtils: NSObject

+ (UIImage *)flipImage:(UIImage *)image;

+ (UIImage *)imageRotatedByDegrees:(UIImage *)oldImage deg:(CGFloat)degrees;

+ (NSString *)getBase64Image:(UIImage *)image;

@end
