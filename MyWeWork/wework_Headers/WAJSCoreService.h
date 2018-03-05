//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WAJSEventHandlerContextDelegate-Protocol.h"

@class CContact, JSContext, JSVirtualMachine, NSArray, NSCondition, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, WAAppTaskExtInfo, WAJSContextPluginScheduler, WAJSCoreServiceOpenData, WAPackageConfig, WAWebViewController, WxaExternalInfo;
@protocol WAJSCoreServiceDelegate;

@interface WAJSCoreService : NSObject <WAJSEventHandlerContextDelegate>
{
    unsigned int _debugModeType;
    _Bool _isDebugAndVConsoleOpen;
    WxaExternalInfo *_wxaExternalInfo;
    unsigned long long _appVersion;
    unsigned int _appServiceMaxDataSize;
    WAAppTaskExtInfo *_taskExtInfo;
    NSString *_enterPath;
    unsigned int _enterScene;
    NSArray *_templates;
    unsigned int _nativeBufferSizeLimit;
    unsigned int _nativeBufferQueueLimit;
    CContact *_contact;
    WAPackageConfig *_packageConfig;
    unsigned long long _taskRunningState;
    _Bool _jsThreadSuspended;
    _Bool _jsThreadDying;
    NSCondition *_condition;
    NSString *lastError;
    NSMutableSet *_setInjectedModule;
    unsigned int _loggedJSErrorCount;
    _Bool _isGameApp;
    _Bool _m_bIsStartFromPreloadAppTask;
    _Bool _threadInjected;
    _Bool _hasInjectErr;
    _Bool _useCompatibleModeConvertData;
    _Bool _executingExceptionHandler;
    id <WAJSCoreServiceDelegate> _delegate;
    WAWebViewController *_currentWebView;
    NSString *_serviceJSUrl;
    WAJSContextPluginScheduler *_pluginScheduler;
    unsigned long long _runningState;
    WAJSCoreServiceOpenData *_launchData;
    NSThread *_thread;
    JSVirtualMachine *_jsVirtualMachine;
    JSContext *_context;
    JSContext *_isolatedContext;
    NSString *_appID;
    NSMutableDictionary *_timerObjs;
    NSMutableSet *_eventHandlers;
    NSMutableArray *_prevEvents;
    NSMutableDictionary *_extraInfo;
}

@property _Bool executingExceptionHandler; // @synthesize executingExceptionHandler=_executingExceptionHandler;
@property _Bool useCompatibleModeConvertData; // @synthesize useCompatibleModeConvertData=_useCompatibleModeConvertData;
@property(retain) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain) NSMutableArray *prevEvents; // @synthesize prevEvents=_prevEvents;
@property(retain) NSMutableSet *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain) NSMutableDictionary *timerObjs; // @synthesize timerObjs=_timerObjs;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property _Bool hasInjectErr; // @synthesize hasInjectErr=_hasInjectErr;
@property _Bool threadInjected; // @synthesize threadInjected=_threadInjected;
@property(retain) JSContext *isolatedContext; // @synthesize isolatedContext=_isolatedContext;
@property(retain) JSContext *context; // @synthesize context=_context;
@property(retain) JSVirtualMachine *jsVirtualMachine; // @synthesize jsVirtualMachine=_jsVirtualMachine;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) _Bool m_bIsStartFromPreloadAppTask; // @synthesize m_bIsStartFromPreloadAppTask=_m_bIsStartFromPreloadAppTask;
@property(retain, nonatomic) WAJSCoreServiceOpenData *launchData; // @synthesize launchData=_launchData;
@property(nonatomic) unsigned long long runningState; // @synthesize runningState=_runningState;
@property(retain, nonatomic) WAJSContextPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(copy, nonatomic) NSString *serviceJSUrl; // @synthesize serviceJSUrl=_serviceJSUrl;
@property(nonatomic) __weak WAWebViewController *currentWebView; // @synthesize currentWebView=_currentWebView;
@property(nonatomic) __weak id <WAJSCoreServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isGameApp; // @synthesize isGameApp=_isGameApp;
- (void).cxx_destruct;
- (void)onAfterGameBridgeScriptEvaluated;
- (struct OpaqueJSContext *)getContext;
- (void)performSelectorOnService:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3;
- (void)workThread_injectModuleAppServiceScript:(id)arg1;
- (void)injectModuleAppServiceWithModuleName:(id)arg1;
- (unsigned int)nativeBufferTotalSize;
- (id)popNativeBuffer:(id)arg1;
- (id)addNativeBuffer:(id)arg1;
- (void)injectWeiXinNativeBuffer;
- (id)parseNative2SdkNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (id)parseInvokeHandlerNativeBufferParam:(id)arg1 getError:(id *)arg2;
- (void)executeDelayToForegroundJSAPI;
- (void)resumeWorkingThreadToDie:(_Bool)arg1;
- (void)threadDidReceiveSuspend;
- (void)suspendWorkingThread;
- (void)checkWorkingThreadStatusWhenRunningStateChanged;
- (void)onRunningStateDidChanged:(unsigned long long)arg1;
- (void)onRunningStateWillChanged:(unsigned long long)arg1;
- (void)onWeAppEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (void)onWeAppEnterBackground:(long long)arg1;
- (void)asyncPrintConsoleLogToCurrentWebView:(id)arg1;
- (void)printConsoleLog:(id)arg1;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)setWxaExternalInfo:(id)arg1;
- (id)getWxaExternalInfo;
- (void)setIsDebugAndVConsoleOpen:(_Bool)arg1;
- (_Bool)isDebugAndVConsoleOpen;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (id)getAppId;
- (id)getEventHandler:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)reportApiCallResult:(id)arg1;
- (void)workThread_invokeCallbackHandler:(id)arg1;
- (void)endWithResult:(id)arg1 handler:(id)arg2 callbackID:(unsigned int)arg3;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (void)onTimer:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(_Bool)arg3;
- (void)notifyJSInjectedOnMainThread:(id)arg1;
- (void)stopPlayingAudio;
- (_Bool)isPlayingAudio;
- (void)setupTimerBlock:(id)arg1;
- (void)setupAPIBlock:(id)arg1;
- (void)injectJSBaseForAppBrandThread:(id)arg1 wrapScript:(id)arg2 fromPreload:(_Bool)arg3;
- (void)reportJSError:(id)arg1;
- (id)getCurrentWebView;
- (id)wxAppInfoJSONWithTemplate:(id)arg1 contactAttribute:(id)arg2;
- (id)getAppLaunchConfig;
- (void)setRefererInfo:(id)arg1 toDicParam:(id)arg2;
- (void)injectJavaScript;
- (void)releaseJSContext;
- (void)initJSContext:(id)arg1;
- (void)setEnterPath:(id)arg1 withScene:(unsigned int)arg2 taskExtInfo:(id)arg3;
- (void)triggerStrictBanMode:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (_Bool)checkJSAPIRunInMainThread:(id)arg1;
- (_Bool)checkJSAPIRunMode:(id)arg1;
- (id)getPermissionWithJSAPI:(id)arg1;
- (void)onAppBeforPushNavigation:(id)arg1;
- (_Bool)isJSInjected;
- (void)performEventOnThread:(id)arg1;
- (void)sendInnerAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)sendAppBrandEvent:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)workthread_sendJSEventToService:(id)arg1;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 webViewId:(unsigned int)arg3;
- (void)sendWebviewEventToService:(id)arg1 webViewId:(unsigned int)arg2;
- (void)sendErrorEvent:(id)arg1;
- (void)workThread_runOperationBlock:(CDUnknownBlockType)arg1;
- (void)asyncRunOperationBlockOnWorkThread:(CDUnknownBlockType)arg1;
- (void)stopAppBrandAndThread;
- (void)stopAppBrand;
- (void)startAppBrand:(id)arg1 packageConfig:(id)arg2 extraInfo:(id)arg3;
- (void)injectGameScript:(id)arg1;
- (void)injectGameIsolatedContextScript;
- (void)injectGameIsolatedContext;
- (void)injectGameContext:(id)arg1;
- (void)startServiceThread;
- (void)runThread:(id)arg1;
- (void)loadAppConfig;
- (void)injectPublicServiceJSForPreload;
- (id)initForPreloadAppTask;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
