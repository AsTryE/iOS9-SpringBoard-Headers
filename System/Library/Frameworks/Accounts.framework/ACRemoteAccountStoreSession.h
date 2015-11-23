/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:56 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@class NSXPCConnection, NSString;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating> {

	NSXPCConnection* _connection;
	BOOL _hasConfiguredRemoteAccountStore;
	BOOL _notificationsEnabled;
	NSString* _spoofedBundleID;

}

@property (nonatomic,copy) NSString * spoofedBundleID;               //@synthesize spoofedBundleID=_spoofedBundleID - In the implementation block
@property (assign,nonatomic) BOOL notificationsEnabled;              //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
-(void)setSpoofedBundleID:(NSString *)arg1 ;
-(void)_configureRemoteAccountStoreIfNecessary;
-(NSString *)spoofedBundleID;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)connect;
-(void)disconnect;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)notificationsEnabled;
@end
