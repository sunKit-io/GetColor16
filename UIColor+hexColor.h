//
//  UIColor+hexColor.h
//  Aihuanji
//
//  Created by sugoqn on 2017/8/17.
//  Copyright © 2017年 FeiYing. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (hexColor)
/**
 将16进制颜色转换成color

 @param stringToConvert #ffffff
 @return 返回颜色
 */
+(UIColor *)hexStringToColor: (NSString *) stringToConvert;
@end
