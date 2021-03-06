//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXCNetWorkDelegate-Protocol.h"

@class NSData, NSString, WXCAccountShowInfo;
@protocol IWXCAccountExt;

@interface WXCAccountManager : NSObject <WXCNetWorkDelegate>
{
    _Bool _hasRegisted;
    _Bool _hasWxInfo;
    _Bool _hasUpload;
    _Bool _isAuthTimeOut;
    _Bool _hasSkipped;
    unsigned int _nUuid;
    int _nPublicCertVersion;
    int _isFirst;
    NSString *_strSessionKey;
    NSString *_strRefreshKey;
    NSString *_strPhoneNum;
    NSString *_strArea;
    NSString *_strPublicCert;
    NSString *_strSdkActiveClientID;
    WXCAccountShowInfo *_showInfo;
    NSData *_strRandomKey;
    NSData *_strRandomRefleshKey;
    NSString *_strRandomCertKey;
    NSString *_wxActiveRandomKey;
    NSData *_wxBuffer;
    NSString *_strSdkActiveAppID;
    id <IWXCAccountExt> _mAccountDelegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property id <IWXCAccountExt> mAccountDelegate; // @synthesize mAccountDelegate=_mAccountDelegate;
@property(copy) NSString *strSdkActiveAppID; // @synthesize strSdkActiveAppID=_strSdkActiveAppID;
@property _Bool hasSkipped; // @synthesize hasSkipped=_hasSkipped;
@property _Bool isAuthTimeOut; // @synthesize isAuthTimeOut=_isAuthTimeOut;
@property(copy) NSData *wxBuffer; // @synthesize wxBuffer=_wxBuffer;
@property(copy) NSString *wxActiveRandomKey; // @synthesize wxActiveRandomKey=_wxActiveRandomKey;
@property(copy) NSString *strRandomCertKey; // @synthesize strRandomCertKey=_strRandomCertKey;
@property(copy) NSData *strRandomRefleshKey; // @synthesize strRandomRefleshKey=_strRandomRefleshKey;
@property(copy) NSData *strRandomKey; // @synthesize strRandomKey=_strRandomKey;
@property(retain) WXCAccountShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(copy) NSString *strSdkActiveClientID; // @synthesize strSdkActiveClientID=_strSdkActiveClientID;
@property _Bool hasUpload; // @synthesize hasUpload=_hasUpload;
@property int isFirst; // @synthesize isFirst=_isFirst;
@property _Bool hasWxInfo; // @synthesize hasWxInfo=_hasWxInfo;
@property int nPublicCertVersion; // @synthesize nPublicCertVersion=_nPublicCertVersion;
@property(copy) NSString *strPublicCert; // @synthesize strPublicCert=_strPublicCert;
@property(copy) NSString *strArea; // @synthesize strArea=_strArea;
@property(copy) NSString *strPhoneNum; // @synthesize strPhoneNum=_strPhoneNum;
@property(copy) NSString *strRefreshKey; // @synthesize strRefreshKey=_strRefreshKey;
@property(copy) NSString *strSessionKey; // @synthesize strSessionKey=_strSessionKey;
@property _Bool hasRegisted; // @synthesize hasRegisted=_hasRegisted;
@property unsigned int nUuid; // @synthesize nUuid=_nUuid;
- (void)setAuthSkipped:(_Bool)arg1;
- (_Bool)onRespAuthWxActive:(id)arg1 retCode:(int)arg2;
- (void)onRespData:(id)arg1 taskId:(int)arg2 retCode:(int)arg3 retBuf:(id)arg4 backfillData:(id)arg5;
- (void)handleLogoutResp:(id)arg1 retCode:(int)arg2;
- (void)handleRefreshCertResp:(id)arg1 retCode:(int)arg2;
- (void)handleRefreshKeyResp:(id)arg1 retCode:(int)arg2;
- (void)handleSDKActiveResp:(id)arg1 retCode:(int)arg2;
- (_Bool)reqAuthWxActive:(id)arg1 appid:(id)arg2 appKey:(id)arg3 token:(id)arg4 wxbuff:(id)arg5;
- (void)postNotification:(id)arg1 uesrInfo:(id)arg2;
- (void)updatePublicCertInfo;
- (void)updateAccountInfo;
- (void)doAccountClearWithoutNotify;
- (void)doAccountClear:(_Bool)arg1;
- (_Bool)checkAndHandleKickedOutByMultiDevice:(int)arg1 retInfo:(id)arg2;
- (void)forceToLogOut:(id)arg1;
- (void)doSendLogoutReq;
- (void)doSendRefreshCertReq:(int)arg1;
- (void)doSendRefreshKeyReq:(id)arg1 refreshKey:(id)arg2;
- (_Bool)doSendSDKActiveReq:(id)arg1;
- (void)uninitSDKAccountInfo;
- (_Bool)initSDKAccountInfo:(id)arg1 clientID:(id)arg2 delegate:(id)arg3;
- (id)getRandomString:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

