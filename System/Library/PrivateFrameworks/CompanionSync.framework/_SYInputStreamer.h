/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class SYCompressedFileInputStream, NSMutableArray, NSObject, NSString;

@interface _SYInputStreamer : NSObject <NSStreamDelegate> {

	SYCompressedFileInputStream* _stream;
	NSMutableArray* _items;
	/*^block*/id _onComplete;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)close;
-(void)_completeAllItemsWithError:(id)arg1 ;
-(id)initWithCompressedFileURL:(id)arg1 callbackQueue:(id)arg2 ;
-(void)whenComplete:(/*^block*/id)arg1 ;
-(void)_tryToReadData;
-(void)readDataOfLength:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

