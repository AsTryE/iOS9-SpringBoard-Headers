/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSPortDelegate.h>

@class NSThread, NSString;

@interface AOSContext : NSObject <NSPortDelegate> {

	AOSAccountRef _account;
	AOSTransactionC* _transaction;
	/*function pointer*/void* _callback;
	NSThread* _callbackThread;
	id _info;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithAccount:(AOSAccountRef)arg1 andTransaction:(AOSTransactionC*)arg2 ;
-(AOSTransactionC*)transaction;
-(void)dealloc;
-(id)init;
-(id)info;
-(void)setInfo:(id)arg1 ;
-(id)_callbackThread;
-(void)_performCallback;
-(BOOL)scheduleCallback;
-(void)setTransaction:(AOSTransactionC*)arg1 ;
-(void)finalize;
-(void)setAccount:(AOSAccountRef)arg1 ;
-(AOSAccountRef)account;
@end

