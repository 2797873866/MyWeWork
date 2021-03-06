//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WXCCommonUtil : NSObject
{
}

+ (_Bool)isWXCOCRGoodCaseUploadImgEnable;
+ (_Bool)isWXCOCRUploadImgEnable;
+ (unsigned int)p_wxcFeature;
+ (_Bool)isDebugOrRDMBundleId;
+ (id)wxcLogEncryptWithData:(id)arg1;
+ (id)aesEncryptForKey:(id)arg1 andData:(id)arg2;
+ (id)JSONStringFromDictionary:(id)arg1;
+ (id)DictionaryFromJSONData:(id)arg1;
+ (id)DictionaryFromJSONString:(id)arg1;
+ (id)imageWithView:(id)arg1;
+ (void)_wxc_logConvert:(id)arg1 level:(int)arg2 function:(id)arg3;
+ (id)i18n_attendance_static_loading;
+ (id)i18n_worklog_writeMonthlyJ;
+ (id)i18n_worklog_writeWeeklyJ;
+ (id)i18n_worklog_writeDailyJ;
+ (id)i18n_worklog_fontSizeBigger;
+ (id)i18n_worklog_fontSizeBig;
+ (id)i18n_worklog_fontSizeStandard;
+ (id)i18n_worklog_presentMore;
+ (id)i18n_redenv_hongbaoThatSent;
+ (id)i18n_redenv_hongbaoThatRecv;
+ (id)i18n_redenv_yuanWithAmount:(double)arg1;
+ (id)i18n_redenv_totalGe:(int)arg1;
+ (id)i18n_voip_singleTalk;
+ (id)i18n_voip_multiTalk;
+ (id)i18n_voip_invalidCallkitCallog;
+ (id)i18n_voip_cannotUseCallLogWithOtherVid;
+ (id)i18n_voip_defaultOutCallDetail;
+ (id)i18n_voip_defaultOutCall;
+ (id)i18n_voip_wework;
+ (id)i18n_voip_weworkVOIP;
+ (id)i18n_voip_gotoFirstPage;
+ (id)i18n_voip_shareOwner:(id)arg1;
+ (id)i18n_voip_shareTime:(id)arg1;
+ (id)i18n_voip_sysphone;
+ (id)i18n_voip_sysphoneAccept;
+ (id)i18n_voip_docShare;
+ (id)i18n_voip_toAudioAccept;
+ (id)i18n_voip_pstn;
+ (id)i18n_voip_camera;
+ (id)i18n_voip_mute;
+ (id)i18n_voip_speaker;
+ (id)i18n_pstn_gotoSetting;
+ (id)i18n_pstn_visitPhoneBookMethod;
+ (id)i18n_pstn_noAccessToPhoneBook;
+ (id)i18n_pstn_waitForAccept;
+ (id)i18n_pstn_oClockDot;
+ (id)i18n_pstn_moreInfo;
+ (id)i18n_pstn_showMore;
+ (id)i18n_pstn_homePageLabel;
+ (id)i18n_pstn_pagerLabel;
+ (id)i18n_pstn_workFaxLabel;
+ (id)i18n_pstn_homeFaxLabel;
+ (id)i18n_pstn_phoneMainLabel;
+ (id)i18n_pstn_mobileLabel;
+ (id)i18n_pstn_anniLabel;
+ (id)i18n_pstn_otherLabel;
+ (id)i18n_pstn_homeLabel;
+ (id)i18n_pstn_workLabel;
+ (id)i18n_processingDoc;
+ (id)i18n_moveDocOutSideFrame;
+ (id)i18n_scaningDoc;
+ (id)i18n_cameraDoc;
+ (id)i18n_cameraPhoto;
+ (id)i18n_cameraVideo;
+ (id)i18n_ocrScanHintExceedMaxLimits;
+ (id)i18n_ocrScanHintForVCard;
+ (id)i18n_ocrScanHintForDoc;
+ (id)i18n_photoRetake;
+ (id)i18n_useVideo;
+ (id)i18n_usePhoto;
+ (id)i18n_drawMark;
+ (id)i18n_scanPreviewStrWithNum:(int)arg1;
+ (id)i18n_ocrScanExceedSingleLimits:(int)arg1;
+ (id)i18n_stringForTorchLight:(int)arg1;
+ (id)i18n_common_CallLogLoading;
+ (id)i18n_common_LoadFailed;
+ (id)i18n_common_LoadFinish;
+ (id)i18n_common_Loading;
+ (id)i18n_commonConfirm;
+ (id)i18n_commonCancel;
+ (_Bool)lanIsEnglish;
+ (id)generateUUIDString:(id)arg1;
+ (_Bool)isOtherCompanyWithVidFromCache:(unsigned long long)arg1;
+ (id)fetchImgUrlFromVid:(unsigned long long)arg1;
+ (void)fetchNameFromVid:(unsigned long long)arg1 asyncUpdateBlock:(CDUnknownBlockType)arg2;
+ (id)fetchNameFromVid:(unsigned long long)arg1;
+ (id)_rtxUserCellPhone;
+ (unsigned long long)fetchSelfVid;
+ (id)weworkSelfName;
+ (unsigned long long)currentRTXUserVid;
+ (id)_rtxUserRemoteID;
+ (id)userPhone;
+ (id)_wxc_deviceID;
+ (id)_rtx_deviceID;
+ (id)deviceID;
+ (id)currentOSVersion;
+ (id)deviceVersionReadableString;
+ (int)appBuildNumber;
+ (id)_stringByRemoveSpecialChar:(id)arg1;
+ (id)_nameFirstStringToDrawWithFullString:(id)arg1;
+ (struct CGRect)_centerStringInImage:(id)arg1 rect:(struct CGRect)arg2 font:(id)arg3;
+ (id)_headImageForString:(id)arg1 isSmaller:(_Bool)arg2;
+ (id)headImageForSmallerString:(id)arg1;
+ (id)headImageForString:(id)arg1;
+ (void)renderStatusBarStyleLight;
+ (void)renderStatusBarStyleDark;
+ (id)formatedTimeDuration:(unsigned long long)arg1;
+ (id)scaleToSizeByMin:(id)arg1 size:(struct CGSize)arg2;
+ (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
+ (float)globalIosVersion;
+ (_Bool)compareArrayIsEqualWithOrigArray:(id)arg1 newArray:(id)arg2 origSortComparator:(CDUnknownBlockType)arg3 newSortComparator:(CDUnknownBlockType)arg4 arrayComparator:(CDUnknownBlockType)arg5 isStrict:(_Bool)arg6;
+ (_Bool)compareArrayIsEqualWithOrigArray:(id)arg1 newArray:(id)arg2 comparator:(CDUnknownBlockType)arg3 isStrict:(_Bool)arg4;
+ (void)compareArrayChangeWithOrigArray:(id)arg1 newArray:(id)arg2 outAddArray:(id)arg3 outRemoveArray:(id)arg4 outSameArray:(id)arg5 comparator:(CDUnknownBlockType)arg6;
+ (void)ipadWidthFitWithTargetView:(id)arg1 parentView:(id)arg2 maxWidth:(double)arg3 fitWidth:(double)arg4;

@end

