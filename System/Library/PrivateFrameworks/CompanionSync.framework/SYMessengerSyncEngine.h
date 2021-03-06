/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYSyncEngine.h>
#import <libobjc.A.dylib/NMSMessageCenterDelegate.h>

@protocol OS_dispatch_queue;
@class NMSMessageCenter, NSDictionary, NSObject, NSString;

@interface SYMessengerSyncEngine : SYSyncEngine <NMSMessageCenterDelegate> {

	NMSMessageCenter* _messageCenter;
	NSMapTable* _requestLookup;
	NSMapTable* _callbackLookup;
	NSDictionary* _customIDSOptions;
	NSObject*<OS_dispatch_queue> _idsQueue;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions;                        //@synthesize customIDSOptions=_customIDSOptions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> idsQueue;              //@synthesize idsQueue=_idsQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(NSDictionary *)customIDSOptions;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)_updateMessageCenterPrefs:(id)arg1 ;
-(BOOL)_checkMessageHeader:(id)arg1 messageID:(id)arg2 ;
-(void)_recordLastSeqNo:(id)arg1 ;
-(void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3 ;
-(void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)_hookupMessageHandler;
-(id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3 ;
-(id)_fileTransferHeader;
-(void)_handleError:(id)arg1 forMessageID:(unsigned short)arg2 ;
-(id)_getRequestHeader:(id)arg1 ;
-(void)_suspendIncomingMessages;
-(void)_resumeIncomingMessages;
-(id)_getResponseHeader:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)idsQueue;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2 ;
-(BOOL)resume:(id*)arg1 ;
@end

