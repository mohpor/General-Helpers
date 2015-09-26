//
//  MOPThreadingHelper.h
//  Pods
//
//  Created by Mohammad on 9/26/15.
//
//

#import <Foundation/Foundation.h>

@interface MOPThreadingHelper : NSObject
void runOnMainQueueWithoutDeadlocking(void (^block)(void));

@end
