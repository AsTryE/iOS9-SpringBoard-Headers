/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GEONavdServerProxy : NSObject
-(void)dealloc;
-(id)init;
-(void)close;
-(void)open;
-(void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getDirectionsForClient:(id)arg1 withRouteHypothesisRequest:(id)arg2 andCallback:(/*^block*/id)arg3 ;
-(void)startMonitoringSuggestionsForClient:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)forceWork;
-(void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 ;
-(void)stopMonitoringSuggestionsForClient:(id)arg1 ;
-(void)statusWithCallback:(/*^block*/id)arg1 ;
-(void)forceHome;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg1 ;
-(void)forceCacheRefresh;
-(void)forceNone;
-(void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3 ;
@end
