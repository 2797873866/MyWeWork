//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WWKWSBottomItemView;

@interface WWKWSBottomView : UIView
{
    WWKWSBottomItemView *_heartMeView;
    WWKWSBottomItemView *_shareView;
    UIView *_seperator;
}

- (void).cxx_destruct;
- (void)showHeartMe;
- (void)share;
- (void)setHeartMeTotalCount:(long long)arg1 andNewCount:(long long)arg2;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

