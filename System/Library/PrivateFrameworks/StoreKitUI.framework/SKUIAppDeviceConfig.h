/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/IKAppDeviceConfig.h>

@class NSString;

@interface SKUIAppDeviceConfig : NSObject <IKAppDeviceConfig>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)timeZone;
-(unsigned long long)preferredVideoFormat;
-(unsigned long long)preferredVideoPreviewFormat;
-(CGSize)screenSize;
-(BOOL)isTimeZoneSet;
-(id)systemLanguage;
-(id)storeFrontCountryCode;
@end

