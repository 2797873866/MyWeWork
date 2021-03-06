//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MWXCMService.h"

#import "AVVideoDeviceDelegate-Protocol.h"
#import "MWXCMService-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface WXCTalkMultiVideoMgr : MWXCMService <MWXCMService, AVVideoDeviceDelegate>
{
    int _preRenderDataSizeWidth;
    int _preRenderDataSizeHeight;
    unsigned long long _preSharedScreenClientID;
    struct WXCNewScale *_pObjScale;
    struct WXCNewScale *_pObjScaleUV;
    _Bool _mIsLocalMultiVideoOn;
    _Bool _mHasSomeOneWatchMe;
    _Bool _mHasReceivedFirstSharedScreenData;
    NSMutableDictionary *_mAllGroupMemberDic;
    NSMutableSet *_mRemoteOpenVideoUuids;
    NSDictionary *_mMemberIdToUuidDic;
    NSMutableDictionary *_mClientIDToVideoRenderMap;
    NSDictionary *_mMemberIdToClientIDDic;
}

+ (float)getVideoWHRatio;
@property(retain) NSDictionary *mMemberIdToClientIDDic; // @synthesize mMemberIdToClientIDDic=_mMemberIdToClientIDDic;
@property(retain) NSMutableDictionary *mClientIDToVideoRenderMap; // @synthesize mClientIDToVideoRenderMap=_mClientIDToVideoRenderMap;
@property(retain) NSDictionary *mMemberIdToUuidDic; // @synthesize mMemberIdToUuidDic=_mMemberIdToUuidDic;
@property(retain, nonatomic) NSMutableSet *mRemoteOpenVideoUuids; // @synthesize mRemoteOpenVideoUuids=_mRemoteOpenVideoUuids;
@property(retain, nonatomic) NSMutableDictionary *mAllGroupMemberDic; // @synthesize mAllGroupMemberDic=_mAllGroupMemberDic;
@property(nonatomic) _Bool mHasReceivedFirstSharedScreenData; // @synthesize mHasReceivedFirstSharedScreenData=_mHasReceivedFirstSharedScreenData;
@property(nonatomic) _Bool mHasSomeOneWatchMe; // @synthesize mHasSomeOneWatchMe=_mHasSomeOneWatchMe;
@property(nonatomic) _Bool mIsLocalMultiVideoOn; // @synthesize mIsLocalMultiVideoOn=_mIsLocalMultiVideoOn;
- (void).cxx_destruct;
- (void)notifyScreenShareEnded;
- (void)notifyScreenShareStarted:(unsigned long long)arg1;
- (void)videoDevice:(id)arg1 didFailWithError:(id)arg2;
- (void)videoDeviceSessionFinished:(id)arg1;
- (void)videoDeviceSessionBegan:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)makeSureMultiVideoStatusRequest;
- (void)onLonglinkConnected;
- (id)getMultiVideoEngineDebugStr;
- (_Bool)isCloseMultiVideoEntry;
- (void)processReceivedMultiVideoData:(long long)arg1 param:(int)arg2 memberID:(int)arg3 remoteMode:(int)arg4 clientID:(unsigned long long)arg5;
- (void)handleRoomMemberChange:(id)arg1 newMemberId2ClientIdDic:(id)arg2;
- (void)handleRoomMemberChange:(id)arg1 newMemberId2UuidDic:(id)arg2 newAllGroupMemberDic:(id)arg3 newOpenVideoUuidArray:(id)arg4;
- (void)updateHasSomeoneWatchMe:(id)arg1;
- (void)handleRoomMemberChange:(id)arg1;
- (id)getRemoteOpenVideoMemberUuids;
- (id)getAllGroupMemberUuids;
- (_Bool)isSupportMultiVideo:(int)arg1;
- (_Bool)isVideoOpen:(int)arg1;
- (_Bool)IsRemoteVideoOpen;
- (id)getRemoteMultiVideoMember:(long long)arg1;
- (_Bool)getLocalMultiVideoOn;
- (_Bool)sendMultiVideoRequest:(_Bool)arg1;
- (void)renderPeer:(long long)arg1 param:(int)arg2 remoteMode:(int)arg3 withClientID:(unsigned long long)arg4;
- (_Bool)removeVideoViewForMember:(unsigned long long)arg1;
- (_Bool)createVideoViewForMember:(unsigned long long)arg1 withParentView:(id)arg2;
- (void)openLocalCamera;
- (void)onRetryVideoDeviceFailed;
- (void)flipLocalCamera;
- (void)closeLocalCamera;
- (void)resetMulitVideoStatus;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

