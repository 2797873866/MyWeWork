//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWFavoritesMgr : NSObject
{
}

+ (id)shareInstance;
- (_Bool)isFavoriteUsageExceed;
- (id)getFavoritesSearchResult:(id)arg1 searchType:(unsigned long long)arg2;
- (_Bool)delFavItemByFavIdList:(id)arg1;
- (_Bool)innerbatchAddConvMsgToFavItem:(vector_9daaf2d9)arg1 withConvName:(id)arg2;
- (_Bool)batchAddConvMsgToFavItem:(vector_9daaf2d9)arg1 withConvName:(id)arg2;
- (_Bool)batchAddImageMsgToEmotionFav:(vector_9daaf2d9)arg1;
- (id)getAllFavItemList;
- (id)init;

@end

