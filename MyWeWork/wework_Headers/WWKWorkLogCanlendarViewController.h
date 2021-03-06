//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FOXMonthCalendarViewDelegate-Protocol.h"

@class FOXMonthCalendarViewController, NSDate, NSString, UILabel, UIView;
@protocol WWKWorkLogCanlendarViewControllerDelegate;

@interface WWKWorkLogCanlendarViewController : UIViewController <FOXMonthCalendarViewDelegate>
{
    NSDate *_toDate;
    UILabel *_titleLabel;
    UIView *_maskView;
    UIView *_gestureView;
    UIView *_topContainerView;
    FOXMonthCalendarViewController *_monthCalendarController;
    id <WWKWorkLogCanlendarViewControllerDelegate> _delegate;
    long long _worklogEventType;
}

@property(nonatomic) long long worklogEventType; // @synthesize worklogEventType=_worklogEventType;
@property(nonatomic) __weak id <WWKWorkLogCanlendarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didMonthCalendarScrollEnd:(long long)arg1 month:(long long)arg2;
- (void)changeRowTo:(long long)arg1 animated:(_Bool)arg2;
- (void)didMonthCalendarSelected:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (void)updateUI:(_Bool)arg1 withMothCalendarHeith:(double)arg2;
- (void)initCalendarView:(id)arg1;
- (void)showOrDimissCalendarView:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadCalendarDataWithScrollToDate:(id)arg1 animated:(_Bool)arg2;
- (void)didRotateFromInterfaceOrientationWithViewFrame:(struct CGRect)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)onTapView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

