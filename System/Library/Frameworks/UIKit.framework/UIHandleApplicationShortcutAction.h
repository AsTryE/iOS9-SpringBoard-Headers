/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,copy,readonly) UIApplicationShortcutItem * uiShortcutItem; 
-(long long)UIActionType;
-(UIApplicationShortcutItem *)uiShortcutItem;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSBSShortcutItem:(id)arg1 ;
@end

