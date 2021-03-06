/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSettingsDiff.h>

@interface FBSSceneClientSettingsDiff : FBSSettingsDiff
+(id)diffFromSettings:(id)arg1 toSettings:(id)arg2 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg1 ;
-(BOOL)inspectPreferredLevel:(double*)arg1 ;
-(BOOL)inspectPreferredInterfaceOrientation:(long long*)arg1 ;
-(BOOL)inspectPreferredSceneHostIdentifier:(id*)arg1 ;
@end

