//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKApplicationPageCollectionCellBase.h"

@class UIImageView, UILabel, UILongPressGestureRecognizer;

@interface WWKAppItemCollectionCell : WWKApplicationPageCollectionCellBase
{
    UIImageView *_imageView;
    UILabel *_textLabel;
    UIImageView *_editImageView;
    UILongPressGestureRecognizer *_mLongPressGR;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *mLongPressGR; // @synthesize mLongPressGR=_mLongPressGR;
@property(retain, nonatomic) UIImageView *editImageView; // @synthesize editImageView=_editImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)p_onLongPressed:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setState:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

