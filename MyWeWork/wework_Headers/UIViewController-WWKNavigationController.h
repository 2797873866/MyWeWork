//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (WWKNavigationController)
- (id)backButtonTitle;
@property(readonly, nonatomic) double wwk_extraNavigationBarHeight;
- (void)wwk_transitionWithExtraNavigationBarHeight:(double)arg1;
- (void)wwk_updateNavigationBarAccessoryViewInternal;
- (void)wwk_updateNavigationBarAccessoryView;
@property(readonly, nonatomic) UIView *wwk_navigationBarAccessoryView;
- (void)wwk_rotateToPortraitAndPopBack:(id)arg1;
- (id)wwk_backBarButtonItem;
@end
