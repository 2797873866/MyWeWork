//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSDate, NSString;

@interface WWKMessageAttendanceSummaryRecord : WWKMessageMedia
{
    NSString *_title;
    NSString *_summary;
    NSDate *_summarySelectDate;
    NSString *_row1Text;
    NSString *_row2Text;
    NSString *_row3Text;
    long long _cardVersion;
}

@property(nonatomic) long long cardVersion; // @synthesize cardVersion=_cardVersion;
@property(copy, nonatomic) NSString *row3Text; // @synthesize row3Text=_row3Text;
@property(copy, nonatomic) NSString *row2Text; // @synthesize row2Text=_row2Text;
@property(copy, nonatomic) NSString *row1Text; // @synthesize row1Text=_row1Text;
@property(retain, nonatomic) NSDate *summarySelectDate; // @synthesize summarySelectDate=_summarySelectDate;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
