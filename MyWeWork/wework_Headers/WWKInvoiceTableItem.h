//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WWKInvoiceTableItem : NSObject
{
    unsigned long long _type;
    NSString *_value;
    NSString *_key;
    long long _keyboardType;
    struct CGSize _cachedSize;
}

+ (long long)keybordType:(unsigned long long)arg1;
+ (id)placeholderFromType:(unsigned long long)arg1;
+ (id)keyFromType:(unsigned long long)arg1;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic) struct CGSize cachedSize; // @synthesize cachedSize=_cachedSize;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;

@end

