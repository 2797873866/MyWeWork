//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RqdNetRequestBase.h"

@class RqdHttpRequest;

@interface RqdNetRequest : RqdNetRequestBase
{
    _Bool _uploadingCrash;
    RqdHttpRequest *_httpRequest;
}

@property(nonatomic) _Bool uploadingCrash; // @synthesize uploadingCrash=_uploadingCrash;
@property(retain, nonatomic) RqdHttpRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
- (void).cxx_destruct;
- (void)startAsync;
- (void)doSuccessOperation:(id)arg1;
- (void)doFailOperation:(id)arg1;
- (id)initWithUrl:(id)arg1 requestPkg:(id)arg2 delegate:(id)arg3;

@end

