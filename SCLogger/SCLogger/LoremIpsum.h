//
//  LoremIpsum.h
//
//  Created by dav on 12/24/10.
//  Public domain where appropriate; free for everyone, for all usages, elsewhere.
//

#import <Foundation/Foundation.h>

@interface LoremIpsum : NSObject

- (NSString*) words:(NSUInteger)count;
- (NSString*) sentences:(NSUInteger)count;

- (NSString*) randomWord;

@end

// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com
