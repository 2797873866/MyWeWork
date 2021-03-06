//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, UIColor, UIImageView, UILabel;

@interface FOXMonthCalendarViewCell : UITableViewCell
{
    NSDate *_todayDate;
    NSMutableArray *_labelArray;
    NSMutableArray *_lunarLabelArray;
    NSMutableArray *_shouldDrawArray;
    UILabel *_yearLabel;
    NSMutableArray *_checkinOkImageArray;
    double kCalendarTextHeight;
    double marginX;
    NSArray *_eventCircles;
    NSArray *_checkinOkCircles;
    NSArray *_checkinErrorCircles;
    UIImageView *_selectedEventCircle;
    UIImageView *_todayEnventCircle;
    _Bool _isSelected;
    _Bool _isInBigCalendarView;
    _Bool _showLunarCalenar;
    _Bool _showCalendarEvents;
    _Bool _fullWeek;
    _Bool _isGettingVisibleCell;
    _Bool _isCheckinCalendar;
    long long _year;
    long long _month;
    long long _day;
    long long _lastDay;
    long long _leapYear;
    long long _firstDayInWeek;
    long long _daysInMonth;
    long long _weekInMonth;
    long long _totalWeeksInMonth;
    NSDate *_cellStartDate;
    NSDate *_cellEndDate;
    long long _selectedIndex;
    long long _todayIndex;
    unsigned long long _calendarEventIndex;
    long long _startWeekDay;
    long long _monthOffset;
    long long _weekOffset;
    NSDate *_unselectableTime;
    NSMutableDictionary *_tagsDict;
    NSArray *_checkinState;
    UIColor *_specialEventDotNormalColor;
}

@property(retain, nonatomic) UIColor *specialEventDotNormalColor; // @synthesize specialEventDotNormalColor=_specialEventDotNormalColor;
@property(nonatomic) _Bool isCheckinCalendar; // @synthesize isCheckinCalendar=_isCheckinCalendar;
@property(retain, nonatomic) NSArray *checkinState; // @synthesize checkinState=_checkinState;
@property(retain, nonatomic) NSMutableDictionary *tagsDict; // @synthesize tagsDict=_tagsDict;
@property(retain, nonatomic) NSDate *unselectableTime; // @synthesize unselectableTime=_unselectableTime;
@property(nonatomic) _Bool isGettingVisibleCell; // @synthesize isGettingVisibleCell=_isGettingVisibleCell;
@property(nonatomic) _Bool fullWeek; // @synthesize fullWeek=_fullWeek;
@property(nonatomic) _Bool showCalendarEvents; // @synthesize showCalendarEvents=_showCalendarEvents;
@property(nonatomic) long long weekOffset; // @synthesize weekOffset=_weekOffset;
@property(nonatomic) long long monthOffset; // @synthesize monthOffset=_monthOffset;
@property(nonatomic) long long startWeekDay; // @synthesize startWeekDay=_startWeekDay;
@property(nonatomic) _Bool showLunarCalenar; // @synthesize showLunarCalenar=_showLunarCalenar;
@property(nonatomic) _Bool isInBigCalendarView; // @synthesize isInBigCalendarView=_isInBigCalendarView;
@property(nonatomic) unsigned long long calendarEventIndex; // @synthesize calendarEventIndex=_calendarEventIndex;
@property(nonatomic) long long todayIndex; // @synthesize todayIndex=_todayIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic, getter=getCellEndDate) NSDate *cellEndDate; // @synthesize cellEndDate=_cellEndDate;
@property(retain, nonatomic, getter=getCellStartDate) NSDate *cellStartDate; // @synthesize cellStartDate=_cellStartDate;
@property(nonatomic) long long totalWeeksInMonth; // @synthesize totalWeeksInMonth=_totalWeeksInMonth;
@property(nonatomic) long long weekInMonth; // @synthesize weekInMonth=_weekInMonth;
@property(nonatomic) long long daysInMonth; // @synthesize daysInMonth=_daysInMonth;
@property(nonatomic) long long firstDayInWeek; // @synthesize firstDayInWeek=_firstDayInWeek;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) long long leapYear; // @synthesize leapYear=_leapYear;
@property(nonatomic) long long lastDay; // @synthesize lastDay=_lastDay;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
- (void).cxx_destruct;
- (void)drawItemByDay:(struct CGRect)arg1 day:(long long)arg2 index:(long long)arg3;
- (void)drawItemEvent:(struct CGRect)arg1 hasCalendarEvent:(_Bool)arg2 today:(_Bool)arg3 selected:(_Bool)arg4;
- (void)drawItemTextInAdvanceMode:(struct CGRect)arg1 day:(long long)arg2 weekend:(_Bool)arg3 today:(_Bool)arg4 hasImportant:(_Bool)arg5 selected:(_Bool)arg6 firstDay:(_Bool)arg7 index:(long long)arg8;
- (void)drawItemBackground:(struct CGRect)arg1 firstDay:(_Bool)arg2 today:(_Bool)arg3 selected:(_Bool)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)fox_checkUnselectableWithIndex:(long long)arg1;
- (void)drawItemBackgroundInRect:(struct CGRect)arg1;
- (void)updateEventCircleForIndex:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (void)updateEventCircles;
- (void)updateCheckinStateForIndex:(unsigned long long)arg1 inRect:(struct CGRect)arg2;
- (void)updateCheckinStates;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (id)drawSquare:(struct CGRect)arg1;
- (id)circleImageForColor:(id)arg1;
- (void)initTodayEventCircle;
- (void)initCheckInOkImages;
- (void)initSelectedEventCircle;
- (void)initNormalEventCircles;
- (void)initCheckinErrorCircles;
- (void)initCheckinOkCircles;
- (void)initEventCircles;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isInBigCalendarView:(_Bool)arg3;

@end

