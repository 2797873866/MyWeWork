//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKMessageMedia.h"

@class NSString;

@interface WWKMessagePersonalCard : WWKMessageMedia
{
    unsigned long long _vid;
    NSString *_name;
    NSString *_avatarUrl;
    NSString *_corpName;
    NSString *_job;
}

+ (_Bool)supportsMergeForwarding;
+ (_Bool)supportsForwarding;
@property(copy, nonatomic) NSString *job; // @synthesize job=_job;
@property(copy, nonatomic) NSString *corpName; // @synthesize corpName=_corpName;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (id)htmlRepresentationToWeixin;
- (id)htmlRepresentation;

@end
