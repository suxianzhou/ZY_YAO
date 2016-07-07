//
//  AppDelegate+JPush.h
//  ZhongYuSubjectHubKY
//
//  Created by zhongyu on 16/5/21.
//  Copyright © 2016年 RyeWhiskey. All rights reserved.
//

#import "AppDelegate.h"
#import "JPUSHService.h"
#import "RWTabBarViewController.h"

#define JPUSH_KEY @"ea4373936c4ac23c3cb70d3a"

@interface AppDelegate (JPush)

- (void)initJPushWithLaunchOptions:(NSDictionary *) launchOptions;

- (void)examinePushInformation;

@end
