//
//  SCLogger.h
//  SCLogger
//
//  Created by Siriuscode Solutions on 05/09/14.
//  Copyright (c) 2014 Siriuscode Solutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

#define NSLog(...) managerLogger(__VA_ARGS__)

@interface SCLogger : UIViewController <UITextViewDelegate, UIScrollViewDelegate, MFMailComposeViewControllerDelegate>

+ (void)showDebug;
+ (void)log:(NSString *)format;

void managerLogger(NSString *format, ...);

@end

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com
