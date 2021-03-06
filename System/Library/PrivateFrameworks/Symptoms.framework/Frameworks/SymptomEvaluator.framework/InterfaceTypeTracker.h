/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol flowDispositionObserver;
@class NSMutableDictionary, TrackerPolicy, NSArray;

@interface InterfaceTypeTracker : NSObject {

	NSMutableDictionary* trackerCache;
	TrackerPolicy* _defaultPolicy;
	NSArray* _alwaysNote;
	NSArray* _neverNote;
	NSArray* _daemonCheck;
	id<flowDispositionObserver> _observer;

}

@property (retain) NSArray * alwaysNote;                              //@synthesize alwaysNote=_alwaysNote - In the implementation block
@property (retain) NSArray * neverNote;                               //@synthesize neverNote=_neverNote - In the implementation block
@property (retain) NSArray * daemonCheck;                             //@synthesize daemonCheck=_daemonCheck - In the implementation block
@property (retain) id<flowDispositionObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(id)init;
-(id)description;
-(id<flowDispositionObserver>)observer;
-(void)setObserver:(id<flowDispositionObserver>)arg1 ;
-(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 ;
-(void)noteFlow:(id)arg1 withOwner:(id)arg2 ;
-(void)configurePolicies:(id)arg1 ;
-(void)_trackerCachePrune;
-(void)removeLinkages:(id)arg1 ;
-(id)infoDir;
-(void)getNetworkActivity:(/*^block*/id)arg1 ;
-(NSArray *)alwaysNote;
-(void)setAlwaysNote:(NSArray *)arg1 ;
-(NSArray *)neverNote;
-(void)setNeverNote:(NSArray *)arg1 ;
-(NSArray *)daemonCheck;
-(void)setDaemonCheck:(NSArray *)arg1 ;
@end

