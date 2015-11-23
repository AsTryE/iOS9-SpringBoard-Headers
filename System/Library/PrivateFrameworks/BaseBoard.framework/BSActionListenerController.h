/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSActionListener;

@interface BSActionListenerController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _transactionCount;
	BSActionListener* _listener;
	unsigned _listenerCount;
	unsigned _listenerTearDownToken;

}
+(id)sharedInstance;
-(void)endTransaction;
-(void)dealloc;
-(id)init;
-(id)listener;
-(void)beginTransactionForListener:(id)arg1 ;
-(void)endTransactionForListener:(id)arg1 ;
-(void)beginTransaction;
@end
