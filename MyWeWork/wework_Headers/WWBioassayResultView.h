//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WWBioassayResultView : UIView
{
    UIImageView *_iconView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)p_layoutInternal;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateSubText:(id)arg1;
- (void)updateResultIsSuc:(_Bool)arg1;
- (void)p_init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

