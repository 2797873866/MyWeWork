//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKShareCardContentStyleBaseView.h"

@class NSLayoutConstraint, WWKAvatarImageView;

@interface WWKShareCardContentStyle0 : WWKShareCardContentStyleBaseView
{
    WWKAvatarImageView *_avatarImageView;
    NSLayoutConstraint *_nameTopContraints;
    NSLayoutConstraint *_nameBottomContraints;
}

@property(retain, nonatomic) NSLayoutConstraint *nameBottomContraints; // @synthesize nameBottomContraints=_nameBottomContraints;
@property(retain, nonatomic) NSLayoutConstraint *nameTopContraints; // @synthesize nameTopContraints=_nameTopContraints;
@property(retain, nonatomic) WWKAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)onEitherOptionFieldShow;
- (void)onAllOptionFieldHidden;
- (void)updateExtraInfo;
- (void)awakeFromNib;

@end

