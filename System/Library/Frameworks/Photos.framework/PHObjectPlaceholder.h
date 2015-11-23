/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString;

@interface PHObjectPlaceholder : PHObject {

	NSString* _localIdentifier;
	long long _assetMediaType;

}

@property (assign) long long assetMediaType;              //@synthesize assetMediaType=_assetMediaType - In the implementation block
-(id)initWithLocalIdentifier:(id)arg1 ;
-(void)setAssetMediaType:(long long)arg1 ;
-(long long)assetMediaType;
-(id)localIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
