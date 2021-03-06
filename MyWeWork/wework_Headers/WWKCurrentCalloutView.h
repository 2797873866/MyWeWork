//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIImage, UILabel, WWKNinePatchImage;

@interface WWKCurrentCalloutView : UIView
{
    UILabel *_labelTitle;
    UILabel *_labelSubtitle;
    WWKNinePatchImage *_ninePatchImage;
    UIImage *_bkImage;
    long long _direction;
    NSLayoutConstraint *_labelTitleTopConstaint;
}

@property(nonatomic) __weak NSLayoutConstraint *labelTitleTopConstaint; // @synthesize labelTitleTopConstaint=_labelTitleTopConstaint;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) UIImage *bkImage; // @synthesize bkImage=_bkImage;
@property(retain, nonatomic) WWKNinePatchImage *ninePatchImage; // @synthesize ninePatchImage=_ninePatchImage;
@property(nonatomic) __weak UILabel *labelSubtitle; // @synthesize labelSubtitle=_labelSubtitle;
@property(nonatomic) __weak UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initUI;

@end

