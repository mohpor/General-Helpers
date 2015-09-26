//
//  MOPLogger.h
//  Pods
//
//  Created by Mohammad on 9/26/15.
//
//

#import <Foundation/Foundation.h>

#ifdef DEBUG

#define MCRelease(x) [x release]
#define DLog(...) NSLog(@"%s(%p) %@", __PRETTY_FUNCTION__, self, [NSString stringWithFormat:__VA_ARGS__])
#define ALog(...) {NSLog(@"%s(%p) %@", __PRETTY_FUNCTION__, self, [NSString stringWithFormat:__VA_ARGS__]);[[NSAssertionHandler currentHandler] handleFailureInFunction:[NSString stringWithCString:__PRETTY_FUNCTION__ encoding:NSUTF8StringEncoding] file:[NSString stringWithCString:__FILE__ encoding:NSUTF8StringEncoding] lineNumber:__LINE__ description:__VA_ARGS__];}
#else
#define MCRelease(x) [x release], x = nil
#define DLog(...) do { } while (0)
#ifndef NS_BLOCK_ASSERTIONS
#define NS_BLOCK_ASSERTIONS
#endif
#define ALog(...) NSLog(@"%s(%p) %@", __PRETTY_FUNCTION__, self, [NSString stringWithFormat:__VA_ARGS__])
#endif

#define ZAssert(condition, ...) do { if (!(condition)) { ALog(__VA_ARGS__); }} while(0)

#define XCODE_COLORS_ESCAPE @"\033["
#define XCODE_COLORS_RESET_FG  XCODE_COLORS_ESCAPE @"fg;" // Clear any foreground color
#define XCODE_COLORS_RESET_BG  XCODE_COLORS_ESCAPE @"bg;" // Clear any background color
#define XCODE_COLORS_RESET     XCODE_COLORS_ESCAPE @";"   // Clear any foreground or background color
#define LogBlue(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg0,0,255;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogRed(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg255,0,0;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogGreen(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg0,173,71;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogGray(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg128,128,128;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogOrange(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg255,109,40;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogPink(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg235,70,169;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogViolet(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg107,51,116;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogBrown(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg165,90,48;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)
#define LogPlum(frmt, ...) DLog((XCODE_COLORS_ESCAPE @"fg128,0,128;" frmt XCODE_COLORS_RESET), ##__VA_ARGS__)


@interface MOPLogger : NSObject

@end
