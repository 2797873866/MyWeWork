//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWPstnContactWriteBackMgr : NSObject
{
    _Bool _hasCorpName;
}

+ (id)sharedInstance;
- (id)p_genPstnContactInfoFromPBNum:(struct PstnDialBackNums *)arg1;
- (void)p_updateLastWriteBackSysInfoWithVersion:(unsigned int)arg1;
- (unsigned int)p_lastWriteBackSysInfoVersion;
- (void)p_writePstnContactRecordId:(id)arg1 isMulti:(_Bool)arg2;
- (void)p_loadAndSaveContactRecordIDByWeworkUrlForMulti:(_Bool)arg1;
- (id)p_pstnContactRecordIdForMulti:(_Bool)arg1;
- (id)p_fillContactDetail:(id)arg1 WithPstnContactInfo:(id)arg2 isNewContact:(_Bool)arg3;
- (id)p_handleCreateContactWithPstnInfo:(id)arg1;
- (id)p_handleOverwriteContactWithContactID:(id)arg1 pstnInfo:(id)arg2;
- (void)p_handleWriteBackPstnContact:(id)arg1 isMulti:(_Bool)arg2;
- (void)p_checkAndWriteBackInternal;
- (void)p_checkAndWriteBack;
- (void)noti_foreground;
- (void)p_doInit;
- (id)init;
- (void)dealloc;

@end

