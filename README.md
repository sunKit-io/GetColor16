# UIColor+hexColor
获取16进制颜色

使用方法：
引入：#import "UIColor+hexColor.h"

//生成颜色值
+(UIColor *)hexStringToColor: (NSString *) stringToConvert;

调用方法：[UIColor hexStringToColor:@"ffffff"];

返回值为UIColor
