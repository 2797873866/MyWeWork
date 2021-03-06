//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol IReporter;

@interface GYLogReportOptions : NSObject
{
    long long _logRollingRule;
    long long _maxLogFileSize;
    long long _maxReportBufferSize;
    NSString *_logSavePath;
    id <IReporter> _logReporter;
    NSString *_logQueueIdentifier;
}

@property(copy, nonatomic) NSString *logQueueIdentifier; // @synthesize logQueueIdentifier=_logQueueIdentifier;
@property(nonatomic) __weak id <IReporter> logReporter; // @synthesize logReporter=_logReporter;
@property(copy, nonatomic) NSString *logSavePath; // @synthesize logSavePath=_logSavePath;
@property(nonatomic) long long maxReportBufferSize; // @synthesize maxReportBufferSize=_maxReportBufferSize;
@property(nonatomic) long long maxLogFileSize; // @synthesize maxLogFileSize=_maxLogFileSize;
@property(nonatomic) long long logRollingRule; // @synthesize logRollingRule=_logRollingRule;
- (void).cxx_destruct;

@end

