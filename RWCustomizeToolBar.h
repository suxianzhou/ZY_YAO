//
//  RWCustomizeToolBar.h
//  ZhongYuSubjectHubKY
//
//  Created by RyeWhiskey on 16/4/29.
//  Copyright © 2016年 RyeWhiskey. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RWCustomizeToolBar;

typedef NS_OPTIONS(NSInteger, RWToolsBarClick)
{
    RWToolsBarClickPrevious = 1,
    RWToolsBarClickShare    = 2,
    RWToolsBarClickCollect  = 3,
    RWToolsBarClickCorrect  = 4,
    RWToolsBarClickNext     = 5
};

@protocol RWCustomizeToolBarClickDelegate <NSObject>

- (void)toolBar:(RWCustomizeToolBar *)bar ClickWithBotton:(RWToolsBarClick)botton;

@end

@interface RWCustomizeToolBar : UIView

@property (nonatomic,assign)id<RWCustomizeToolBarClickDelegate> delegate;

@property (nonatomic,assign,readonly)BOOL isCollect;

@property (nonatomic,assign,readonly)BOOL isShowCorrectAnswer;

- (void)didCollect;

- (void)didShowCorrectAnswer;

- (void)replaceBottonState;

- (void)cancelWithBotton:(RWToolsBarClick)botton;

@end
