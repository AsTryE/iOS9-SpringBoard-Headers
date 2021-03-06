/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface SSVSubscriptionResponse : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _accountUniqueIdentifierToSubscriptionStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubscriptionStatus:(id)arg1 forAccountUniqueIdentifier:(unsigned long long)arg2 ;
@end

