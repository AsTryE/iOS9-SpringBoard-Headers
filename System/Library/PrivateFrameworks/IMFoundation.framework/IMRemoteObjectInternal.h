/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSRecursiveLock, NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSRecursiveLock* _lock;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _deathPostPredicate;
	Protocol* _protocol;
	NSString* _portName;
	NSString* _processName;
	BOOL _willBeTerminated;
	int _pid;

}
@end

