/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECSpotlightItem : _DECItem {

	long long _domain;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) long long domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)spotlightItemWithDomain:(long long)arg1 itemIdentifier:(id)arg2 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)domain;
-(id)initWithDomain:(long long)arg1 itemIdentifier:(id)arg2 ;
-(NSString *)itemIdentifier;
@end
