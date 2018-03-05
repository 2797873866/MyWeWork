//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMUIToastView.h"

@class UIView;

@interface QMUITips : QMUIToastView
{
    UIView *_contentCustomView;
}

+ (id)createTipsToView:(id)arg1;
+ (id)showInfo:(id)arg1 detailText:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4;
+ (id)showInfo:(id)arg1 detailText:(id)arg2 inView:(id)arg3;
+ (id)showInfo:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
+ (id)showInfo:(id)arg1 inView:(id)arg2;
+ (id)showError:(id)arg1 detailText:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4;
+ (id)showError:(id)arg1 detailText:(id)arg2 inView:(id)arg3;
+ (id)showError:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
+ (id)showError:(id)arg1 inView:(id)arg2;
+ (id)showSucceed:(id)arg1 detailText:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4;
+ (id)showSucceed:(id)arg1 detailText:(id)arg2 inView:(id)arg3;
+ (id)showSucceed:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
+ (id)showSucceed:(id)arg1 inView:(id)arg2;
+ (id)showLoading:(id)arg1 detailText:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4;
+ (id)showLoading:(id)arg1 detailText:(id)arg2 inView:(id)arg3;
+ (id)showLoading:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
+ (id)showLoadingInView:(id)arg1 hideAfterDelay:(double)arg2;
+ (id)showLoading:(id)arg1 inView:(id)arg2;
+ (id)showLoadingInView:(id)arg1;
+ (id)showWithText:(id)arg1 detailText:(id)arg2 inView:(id)arg3 hideAfterDelay:(double)arg4;
+ (id)showWithText:(id)arg1 detailText:(id)arg2 inView:(id)arg3;
+ (id)showWithText:(id)arg1 inView:(id)arg2 hideAfterDelay:(double)arg3;
+ (id)showWithText:(id)arg1 inView:(id)arg2;
@property(retain, nonatomic) UIView *contentCustomView; // @synthesize contentCustomView=_contentCustomView;
- (void).cxx_destruct;
- (void)showTipWithText:(id)arg1 detailText:(id)arg2 hideAfterDelay:(double)arg3;
- (void)showInfo:(id)arg1 detailText:(id)arg2 hideAfterDelay:(double)arg3;
- (void)showInfo:(id)arg1 detailText:(id)arg2;
- (void)showInfo:(id)arg1 hideAfterDelay:(double)arg2;
- (void)showInfo:(id)arg1;
- (void)showError:(id)arg1 detailText:(id)arg2 hideAfterDelay:(double)arg3;
- (void)showError:(id)arg1 detailText:(id)arg2;
- (void)showError:(id)arg1 hideAfterDelay:(double)arg2;
- (void)showError:(id)arg1;
- (void)showSucceed:(id)arg1 detailText:(id)arg2 hideAfterDelay:(double)arg3;
- (void)showSucceed:(id)arg1 detailText:(id)arg2;
- (void)showSucceed:(id)arg1 hideAfterDelay:(double)arg2;
- (void)showSucceed:(id)arg1;
- (void)showLoading:(id)arg1 detailText:(id)arg2 hideAfterDelay:(double)arg3;
- (void)showLoading:(id)arg1 detailText:(id)arg2;
- (void)showLoading:(id)arg1 hideAfterDelay:(double)arg2;
- (void)showLoading:(id)arg1;
- (void)showLoadingHideAfterDelay:(double)arg1;
- (void)showLoading;
- (void)showWithText:(id)arg1 detailText:(id)arg2 hideAfterDelay:(double)arg3;
- (void)showWithText:(id)arg1 detailText:(id)arg2;
- (void)showWithText:(id)arg1 hideAfterDelay:(double)arg2;
- (void)showWithText:(id)arg1;

@end
