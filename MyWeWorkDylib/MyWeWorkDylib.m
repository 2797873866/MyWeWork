//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  MyWeWorkDylib.m
//  MyWeWorkDylib
//
//  Created by lzh on 2018/2/11.
//  Copyright (c) 2018年 harddog. All rights reserved.
//

#import "MyWeWorkDylib.h"
#import <UIKit/UIKit.h>
#import "HookFunctionsAndPropertys.h"
#ifdef DEBUG
#import <CaptainHook/CaptainHook.h>
#import <Cycript/Cycript.h>
#import <FLEX/FLEX.h>
#endif

static __attribute__((constructor)) void entry(){
    
#ifdef DEBUG
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
        CYListenServer(6666);
        
        // show FLEX
        [[FLEXManager sharedManager] showExplorer];
    }];
#endif
}
