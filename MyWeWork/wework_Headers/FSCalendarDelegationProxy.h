//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSDictionary, Protocol;

@interface FSCalendarDelegationProxy : NSProxy
{
    id _delegation;
    Protocol *_protocol;
    NSDictionary *_deprecations;
}

@property(retain, nonatomic) NSDictionary *deprecations; // @synthesize deprecations=_deprecations;
@property(retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) __weak id delegation; // @synthesize delegation=_delegation;
- (void).cxx_destruct;
- (SEL)deprecatedSelectorOfSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)init;

@end

