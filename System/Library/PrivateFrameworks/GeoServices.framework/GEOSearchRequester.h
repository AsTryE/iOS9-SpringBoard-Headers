/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:19 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOSearchRequester : NSObject {

	NSMapTable* _pendingSearches;
	NSLock* _pendingSearchesLock;

}
+(id)sharedSearchRequester;
-(void)dealloc;
-(id)init;
-(void)completions:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/id)arg4 networkActivity:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)cancelSearch:(id)arg1 ;
@end

