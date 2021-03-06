//
//  MTTAvoidCrashStubProxy.h
//  MyTwitter
//
//  Created by WangJunZi on 2018/1/29.
//  Copyright © 2018年 waitWalker. All rights reserved.
//

#import <Foundation/Foundation.h>


#define AvoidCrashNotification @"AvoidCrashNotification"
#define AvoidCrashIsiOS(version) ([[UIDevice currentDevice].systemVersion floatValue] >= version)


//user can ignore below define
#define AvoidCrashDefaultReturnNil  @"AvoidCrash default is to return nil to avoid crash."
#define AvoidCrashDefaultIgnore     @"AvoidCrash default is to ignore this operation to avoid crash."

#define AvoidCrashSeparator         @"================================================================"
#define AvoidCrashSeparatorWithFlag @"========================AvoidCrash Log=========================="


#ifdef DEBUG

#define  AvoidCrashLog(...) NSLog(@"%@",[NSString stringWithFormat:__VA_ARGS__])

#else

#define AvoidCrashLog(...)
#endif

@interface MTTAvoidCrashStubProxy : NSObject

- (void)proxyMethod;

@end
