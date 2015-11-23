/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSURLCompletionSessionProtocol, OS_dispatch_queue;
@class WBSHistoryConnectionProxy, NSObject;

@interface WBSURLCompletionSessionProxy : NSObject {

	WBSHistoryConnectionProxy* _historyConnectionProxy;
	id<WBSURLCompletionSessionProtocol> _completionSession;
	NSObject*<OS_dispatch_queue> _completionSessionAccessQueue;

}
+(BOOL)_shouldReturnCannedMatches;
+(id)_cannedMatchesWithTypedString:(id)arg1 ;
-(id)init;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_completionSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)userDidSelectCompletionMatch:(id)arg1 forTypedString:(id)arg2 ;
@end
