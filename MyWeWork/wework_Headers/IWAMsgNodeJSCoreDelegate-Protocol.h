//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IWAMsgNodeJSCoreDelegate <NSObject>

@optional
- (void)onJSCore:(unsigned int)arg1 openApp:(NSString *)arg2;
- (void)onJSCore:(unsigned int)arg1 updateHeight:(double)arg2;
- (void)onJSCore:(unsigned int)arg1 executed:(NSArray *)arg2 reserve:(_Bool)arg3;
- (void)onJSCoreSetupFinished:(unsigned int)arg1;
@end

