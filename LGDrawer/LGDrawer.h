//
// LGDrawer.h
// LGDrawer
//
// SPDX-License-Identifier: MIT
// Copyright (c) 2015 Grigorii Lutkov <grigorii@lutkov.dev>
//

#import <UIKit/UIKit.h>

@interface LGDrawer : NSObject

typedef NS_ENUM(NSUInteger, LGDrawerDirection)
{
    // стороны
    LGDrawerDirectionTop    = 0,
    LGDrawerDirectionBottom = 1,
    LGDrawerDirectionLeft   = 2,
    LGDrawerDirectionRight  = 3,

    // углы
    LGDrawerDirectionTopLeft     = 4,
    LGDrawerDirectionLeftTop     = LGDrawerDirectionTopLeft,
    LGDrawerDirectionTopRight    = 5,
    LGDrawerDirectionRightTop    = LGDrawerDirectionTopRight,
    LGDrawerDirectionBottomLeft  = 6,
    LGDrawerDirectionLeftBottom  = LGDrawerDirectionBottomLeft,
    LGDrawerDirectionBottomRight = 7,
    LGDrawerDirectionRightBottom = LGDrawerDirectionBottomRight
};

typedef NS_ENUM(NSUInteger, LGDrawerLineDirection)
{
    LGDrawerLineDirectionHorizontal       = 0,
    LGDrawerLineDirectionVertical         = 1,
    LGDrawerLineDirectionDiagonalTopRight = 2,
    LGDrawerLineDirectionDiagonalRightTop = LGDrawerLineDirectionDiagonalTopRight,
    LGDrawerLineDirectionDiagonalTopLeft  = 3,
    LGDrawerLineDirectionDiagonalLeftTop  = LGDrawerLineDirectionDiagonalTopLeft
};

typedef NS_ENUM(NSUInteger, LGDrawerMenuDotsPosition)
{
    LGDrawerMenuDotsPositionLeft  = 0,
    LGDrawerMenuDotsPositionRight = 1,
};

typedef NS_ENUM(NSUInteger, LGDrawerStrokeType)
{
    LGDrawerStrokeTypeInside  = 0,
    LGDrawerStrokeTypeCenter  = 1,
    LGDrawerStrokeTypeOutside = 2
};

+ (instancetype)alloc __attribute__((unavailable("use + methods")));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable("use + methods")));
+ (instancetype)new __attribute__((unavailable("use + methods")));
- (instancetype)init __attribute__((unavailable("use + methods")));
- (id)copy __attribute__((unavailable("use + methods")));

/**
 strockDash for example @[@4.f, @2.f]
 first - length of line
 second - length of space
 you can use more arguments in array
 */

#pragma mark - Rectangle

+ (UIImage *)drawRectangleWithImageSize:(CGSize)imageSize
                                   size:(CGSize)size
                                 offset:(CGPoint)offset
                                 rotate:(CGFloat)degrees
                         roundedCorners:(UIRectCorner)roundedCorners
                           cornerRadius:(CGFloat)cornerRadius
                        backgroundColor:(UIColor *)backgroundColor
                              fillColor:(UIColor *)fillColor
                            strokeColor:(UIColor *)strokeColor
                        strokeThickness:(CGFloat)strokeThickness
                             strokeDash:(NSArray *)strokeDash
                             strokeType:(LGDrawerStrokeType)strokeType
                            shadowColor:(UIColor *)shadowColor
                           shadowOffset:(CGPoint)shadowOffset
                             shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Ellipse

+ (UIImage *)drawEllipseWithImageSize:(CGSize)imageSize
                                 size:(CGSize)size
                               offset:(CGPoint)offset
                               rotate:(CGFloat)degrees
                      backgroundColor:(UIColor *)backgroundColor
                            fillColor:(UIColor *)fillColor
                          strokeColor:(UIColor *)strokeColor
                      strokeThickness:(CGFloat)strokeThickness
                           strokeDash:(NSArray *)strokeDash
                           strokeType:(LGDrawerStrokeType)strokeType
                          shadowColor:(UIColor *)shadowColor
                         shadowOffset:(CGPoint)shadowOffset
                           shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Triangle

/** Stroke type is center */
+ (UIImage *)drawTriangleWithImageSize:(CGSize)imageSize
                                  size:(CGSize)size
                                offset:(CGPoint)offset
                                rotate:(CGFloat)degrees
                          cornerRadius:(CGFloat)cornerRadius
                             direction:(LGDrawerDirection)direction
                       backgroundColor:(UIColor *)backgroundColor
                             fillColor:(UIColor *)fillColor
                           strokeColor:(UIColor *)strokeColor
                       strokeThickness:(CGFloat)strokeThickness
                            strokeDash:(NSArray *)strokeDash
                           shadowColor:(UIColor *)shadowColor
                          shadowOffset:(CGPoint)shadowOffset
                            shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Shadow

+ (UIImage *)drawShadowWithImageSize:(CGSize)imageSize
                           direction:(LGDrawerDirection)direction
                     backgroundColor:(UIColor *)backgroundColor
                         shadowColor:(UIColor *)shadowColor
                        shadowOffset:(CGPoint)shadowOffset
                          shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Plus

+ (UIImage *)drawPlusWithImageSize:(CGSize)imageSize
                              size:(CGSize)size
                            offset:(CGPoint)offset
                            rotate:(CGFloat)degrees
                         thickness:(CGFloat)thickness
                    roundedCorners:(UIRectCorner)roundedCorners
                      cornerRadius:(CGFloat)cornerRadius
                   backgroundColor:(UIColor *)backgroundColor
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                   strokeThickness:(CGFloat)strokeThickness
                        strokeDash:(NSArray *)strokeDash
                        strokeType:(LGDrawerStrokeType)strokeType
                       shadowColor:(UIColor *)shadowColor
                      shadowOffset:(CGPoint)shadowOffset
                        shadowBlur:(CGFloat)shadowBlur;

+ (UIImage *)drawPlusWithImageSize:(CGSize)imageSize
                              size:(CGSize)size
                            offset:(CGPoint)offset
                            rotate:(CGFloat)degrees
                         thickness:(CGFloat)thickness
                   backgroundColor:(UIColor *)backgroundColor
                             color:(UIColor *)color
                              dash:(NSArray *)dash
                       shadowColor:(UIColor *)shadowColor
                      shadowOffset:(CGPoint)shadowOffset
                        shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Cross

+ (UIImage *)drawCrossWithImageSize:(CGSize)imageSize
                               size:(CGSize)size
                             offset:(CGPoint)offset
                             rotate:(CGFloat)degrees
                          thickness:(CGFloat)thickness
                     roundedCorners:(UIRectCorner)roundedCorners
                       cornerRadius:(CGFloat)cornerRadius
                    backgroundColor:(UIColor *)backgroundColor
                          fillColor:(UIColor *)fillColor
                        strokeColor:(UIColor *)strokeColor
                    strokeThickness:(CGFloat)strokeThickness
                         strokeDash:(NSArray *)strokeDash
                         strokeType:(LGDrawerStrokeType)strokeType
                        shadowColor:(UIColor *)shadowColor
                       shadowOffset:(CGPoint)shadowOffset
                         shadowBlur:(CGFloat)shadowBlur;

+ (UIImage *)drawCrossWithImageSize:(CGSize)imageSize
                               size:(CGSize)size
                             offset:(CGPoint)offset
                             rotate:(CGFloat)degrees
                          thickness:(CGFloat)thickness
                    backgroundColor:(UIColor *)backgroundColor
                              color:(UIColor *)color
                               dash:(NSArray *)dash
                        shadowColor:(UIColor *)shadowColor
                       shadowOffset:(CGPoint)shadowOffset
                         shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Line

+ (UIImage *)drawLineWithImageSize:(CGSize)imageSize
                            length:(CGFloat)length
                            offset:(CGPoint)offset
                            rotate:(CGFloat)degrees
                         thickness:(CGFloat)thickness
                         direction:(LGDrawerLineDirection)direction
                   backgroundColor:(UIColor *)backgroundColor
                             color:(UIColor *)color
                              dash:(NSArray *)dash
                       shadowColor:(UIColor *)shadowColor
                      shadowOffset:(CGPoint)shadowOffset
                        shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Tick

+ (UIImage *)drawTickWithImageSize:(CGSize)imageSize
                              size:(CGSize)size
                            offset:(CGPoint)offset
                            rotate:(CGFloat)degrees
                         thickness:(CGFloat)thickness
                   backgroundColor:(UIColor *)backgroundColor
                             color:(UIColor *)color
                              dash:(NSArray *)dash
                       shadowColor:(UIColor *)shadowColor
                      shadowOffset:(CGPoint)shadowOffset
                        shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Arrow

+ (UIImage *)drawArrowWithImageSize:(CGSize)imageSize
                               size:(CGSize)size
                             offset:(CGPoint)offset
                             rotate:(CGFloat)degrees
                          thickness:(CGFloat)thickness
                          direction:(LGDrawerDirection)direction
                    backgroundColor:(UIColor *)backgroundColor
                              color:(UIColor *)color
                               dash:(NSArray *)dash
                        shadowColor:(UIColor *)shadowColor
                       shadowOffset:(CGPoint)shadowOffset
                         shadowBlur:(CGFloat)shadowBlur;

+ (UIImage *)drawArrowTailedWithImageSize:(CGSize)imageSize
                                     size:(CGSize)size
                                   offset:(CGPoint)offset
                                   rotate:(CGFloat)degrees
                                thickness:(CGFloat)thickness
                                direction:(LGDrawerDirection)direction
                          backgroundColor:(UIColor *)backgroundColor
                                    color:(UIColor *)color
                                     dash:(NSArray *)dash
                              shadowColor:(UIColor *)shadowColor
                             shadowOffset:(CGPoint)shadowOffset
                               shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Heart

/** Stroke type is center */
+ (UIImage *)drawHeartWithImageSize:(CGSize)imageSize
                               size:(CGSize)size
                             offset:(CGPoint)offset
                             rotate:(CGFloat)degrees
                    backgroundColor:(UIColor *)backgroundColor
                          fillColor:(UIColor *)fillColor
                        strokeColor:(UIColor *)strokeColor
                    strokeThickness:(CGFloat)strokeThickness
                         strokeDash:(NSArray *)strokeDash
                        shadowColor:(UIColor *)shadowColor
                       shadowOffset:(CGPoint)shadowOffset
                         shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Star

/** Stroke type is center */
+ (UIImage *)drawStarWithImageSize:(CGSize)imageSize
                              size:(CGSize)size
                            offset:(CGPoint)offset
                            rotate:(CGFloat)degrees
                   backgroundColor:(UIColor *)backgroundColor
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                   strokeThickness:(CGFloat)strokeThickness
                        strokeDash:(NSArray *)strokeDash
                       shadowColor:(UIColor *)shadowColor
                      shadowOffset:(CGPoint)shadowOffset
                        shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Menu

+ (UIImage *)drawMenuWithImageSize:(CGSize)imageSize
                              size:(CGSize)size
                            offset:(CGPoint)offset
                            rotate:(CGFloat)degrees
                         thickness:(CGFloat)thickness
                            dotted:(BOOL)dotted
                      dotsPosition:(LGDrawerMenuDotsPosition)dotsPosition
                  dotsCornerRadius:(CGFloat)dotsCornerRadius
                 linesCornerRadius:(CGFloat)linesCornerRadius
                   backgroundColor:(UIColor *)backgroundColor
                         fillColor:(UIColor *)fillColor
                       strokeColor:(UIColor *)strokeColor
                   strokeThickness:(CGFloat)strokeThickness
                        strokeDash:(NSArray *)strokeDash
                       shadowColor:(UIColor *)shadowColor
                      shadowOffset:(CGPoint)shadowOffset
                        shadowBlur:(CGFloat)shadowBlur;

#pragma mark - Images

+ (UIImage *)drawImage:(UIImage *)image1
               onImage:(UIImage *)image2
                 clear:(BOOL)clear;

+ (UIImage *)drawImageOnImage:(NSArray *)images;

+ (UIImage *)drawImagesWithFinishSize:(CGSize)finishSize
                               image1:(UIImage *)image1
                           image1Rect:(CGRect)rect1
                               image2:(UIImage *)image2
                           image2Rect:(CGRect)rect2
                                clear:(BOOL)clear;

+ (UIImage *)drawImagesWithFinishSize:(CGSize)finishSize
                               image1:(UIImage *)image1
                         image1Offset:(CGPoint)offset1
                               image2:(UIImage *)image2
                         image2Offset:(CGPoint)offset2
                                clear:(BOOL)clear;

@end
