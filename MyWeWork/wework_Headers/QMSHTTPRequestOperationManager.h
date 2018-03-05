//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, QMSHTTPRequestSerializer, QMSHTTPResponseSerializer;

@interface QMSHTTPRequestOperationManager : NSObject
{
    NSURL *_baseURL;
    QMSHTTPRequestSerializer *_requestSerializer;
    QMSHTTPResponseSerializer *_responseSerializer;
}

+ (id)manager;
@property(retain, nonatomic) QMSHTTPResponseSerializer *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
@property(retain, nonatomic) QMSHTTPRequestSerializer *requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)GET:(id)arg1 parameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)HTTPRequestOperationWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBaseURL:(id)arg1;

@end
