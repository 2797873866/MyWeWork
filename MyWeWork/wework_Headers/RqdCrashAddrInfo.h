//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface RqdCrashAddrInfo : NSObject
{
    int index;
    NSNumber *addr;
    NSString *moduleName;
    NSString *lineStr;
    unsigned long long offset;
}

@property(nonatomic) int index; // @synthesize index;
@property(nonatomic) unsigned long long offset; // @synthesize offset;
@property(retain, nonatomic) NSString *lineStr; // @synthesize lineStr;
@property(retain, nonatomic) NSString *moduleName; // @synthesize moduleName;
@property(retain, nonatomic) NSNumber *addr; // @synthesize addr;
- (id)description;
- (id)getFullStackLine;
- (void)dealloc;

@end
