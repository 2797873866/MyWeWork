//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WWKOrganizationCell.h"

@class QMUILabel;

@interface WWYunPanMemberCell : WWKOrganizationCell
{
    _Bool _showDownArrow;
    _Bool _hidePermissonInfo;
    long long _permissionType;
    QMUILabel *_mPermissionLabel;
}

@property(retain, nonatomic) QMUILabel *mPermissionLabel; // @synthesize mPermissionLabel=_mPermissionLabel;
@property(nonatomic) _Bool hidePermissonInfo; // @synthesize hidePermissonInfo=_hidePermissonInfo;
@property(nonatomic) _Bool showDownArrow; // @synthesize showDownArrow=_showDownArrow;
@property(nonatomic) long long permissionType; // @synthesize permissionType=_permissionType;
- (void).cxx_destruct;
- (void)setDepartmentItem:(scoped_refptr_85c18dd7)arg1;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 underDepartmentID:(unsigned long long)arg2;
- (void)setUserItem:(const scoped_refptr_e1f85e48 *)arg1 showCompleteName:(_Bool)arg2;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

