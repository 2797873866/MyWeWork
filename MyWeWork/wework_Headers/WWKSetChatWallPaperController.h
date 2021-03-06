//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "NotificationProxyObserverDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "WWKPreviewImageControllerDelegate-Protocol.h"

@class NSArray, NSString;

@interface WWKSetChatWallPaperController : UITableViewController <UIImagePickerControllerDelegate, WWKPreviewImageControllerDelegate, NotificationProxyObserverDelegate>
{
    NSArray *_cellTypes;
    scoped_refptr_fd92d7bf _conversation;
    struct unique_ptr<NotificationProxyObserver, std::__1::default_delete<NotificationProxyObserver>> _push_notification_observer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)exposeRedPointsReport;
- (unsigned long long)cellTypeForIndexPath:(id)arg1;
- (id)redPointKeysWithCellType:(unsigned long long)arg1;
- (id)titleForCellType:(unsigned long long)arg1;
- (void)saveImageAndPostNotificationWithImage:(id)arg1;
- (void)saveGroupImage;
- (void)onNotification:(int)arg1 source:(const struct NotificationSource *)arg2 details:(const struct NotificationDetails *)arg3;
- (void)didClickSaveItemInPreviewImageController:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConversation:(scoped_refptr_fd92d7bf)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

