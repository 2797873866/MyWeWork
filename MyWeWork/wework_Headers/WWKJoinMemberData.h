//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface WWKJoinMemberData : NSObject
{
    int _useStatus;
    NSString *_name;
    NSString *_time;
    NSString *_platform;
    NSMutableArray *_departments;
    unsigned long long _vid;
}

@property(nonatomic) unsigned long long vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSMutableArray *departments; // @synthesize departments=_departments;
@property(nonatomic) int useStatus; // @synthesize useStatus=_useStatus;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCRTXUseLog:(const struct CorpUserLog *)arg1;

@end

