//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WWKWallPaperHelper : NSObject
{
}

+ (_Bool)deleteGroupWallPaper;
+ (_Bool)saveGroupWallPaper:(id)arg1;
+ (_Bool)deleteAllCustomWallPaper;
+ (_Bool)saveDownloadWallpaper:(id)arg1 sourceURL:(const basic_string_a490aa4c *)arg2;
+ (_Bool)hasWallPaperWithConversation:(scoped_refptr_fd92d7bf)arg1;
+ (_Bool)saveConversationWallPaper:(id)arg1 conversation:(scoped_refptr_fd92d7bf)arg2;
+ (id)imageWithDownloadSourceURL:(const basic_string_a490aa4c *)arg1;
+ (id)imagePathWithSourceURL:(const basic_string_a490aa4c *)arg1;
+ (id)conversationSystemWallPaperDirectory;
+ (id)conversationCustomWallPaperDirectory;
+ (id)conversationWallPaperDirectory;
+ (id)groupWallPaperPath;
+ (id)conversationWallPaperPath:(scoped_refptr_fd92d7bf)arg1;

@end
