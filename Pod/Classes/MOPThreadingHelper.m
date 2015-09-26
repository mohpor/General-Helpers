//
//  MOPThreadingHelper.m
//  Pods
//
//  Created by Mohammad on 9/26/15.
//
//

#import "MOPThreadingHelper.h"

@implementation MOPThreadingHelper
void runOnMainQueueWithoutDeadlocking(void (^block)(void))
{
    if ([NSThread isMainThread])
    {
        block();
    }
    else
    {
        dispatch_async(dispatch_get_main_queue(), block);
    }
}
@end
