//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WWKShareAppPreviewView : UIView
{
    UIView *_seperator;
    UIImageView *_appIconView;
    UILabel *_appNameLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) UIImageView *appIconView; // @synthesize appIconView=_appIconView;
- (void).cxx_destruct;
- (double)_heightForLabel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)layoutSubViewsWithWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initSubViews;
- (void)updateIcon:(id)arg1 desText:(id)arg2 appName:(id)arg3;
- (id)init;

@end

