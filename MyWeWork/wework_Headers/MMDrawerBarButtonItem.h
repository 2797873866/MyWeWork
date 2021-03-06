//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class MMDrawerMenuButtonView;

@interface MMDrawerBarButtonItem : UIBarButtonItem
{
    MMDrawerMenuButtonView *_buttonView;
}

+ (id)drawerButtonItemImage;
@property(retain, nonatomic) MMDrawerMenuButtonView *buttonView; // @synthesize buttonView=_buttonView;
- (void).cxx_destruct;
- (void)setTintColor:(id)arg1;
- (void)setShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)shadowColorForState:(unsigned long long)arg1;
- (void)setMenuButtonColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)menuButtonColorForState:(unsigned long long)arg1;
- (void)touchUpInside:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

