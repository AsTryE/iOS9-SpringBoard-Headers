/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, BSSignal, NSString;

@interface BSBaseXPCClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	BSSignal* _invalidationSignal;
	NSObject*<OS_xpc_object> _serverEndpoint;
	NSString* _serviceName;
	BOOL _suspended;
	BOOL _clientInvalidated;
	int _notifyToken;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(id)initWithEndpoint:(id)arg1 ;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)initWithServiceName:(id)arg1 ;
-(id)_connection;
-(id)_notifyTokenName;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(void)queue_invalidate;
-(BOOL)queue_isSuspended;
-(void)queue_registerWithServerIfNecessary;
-(void)queue_suspendConnection;
-(void)queue_resumeConnection;
-(void)queue_clientWasInvalidated;
-(void)_sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 waitForReply:(BOOL)arg3 waitDuration:(unsigned long long)arg4 ;
-(void)queue_connectionWasResumed;
-(void)queue_connectionWasSuspended;
-(id)_connectionInstanceUUID;
-(void)queue_connectionWasInterrupted;
-(void)queue_reregister;
-(void)queue_connectionWasInvalidated;
-(void)queue_reconnectToResumedServerIfNecessary;
-(void)queue_connectionWasCreated;
-(void)reconnectIfNecessary;
-(void)queue_connectionWasDestroyed;
-(void)suspendConnection;
-(void)resumeConnection;
-(id)_errorFromMessageIfAny:(id)arg1 ;
-(void)_sendMessage:(/*^block*/id)arg1 ;
-(id)queue_connection;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_setEndpoint:(id)arg1 ;
@end
