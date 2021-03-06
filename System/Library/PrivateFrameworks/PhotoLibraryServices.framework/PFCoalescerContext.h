/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class PFCoalescer, NSObject;

@interface PFCoalescerContext : NSObject {

	unsigned long long _coalescedUpdatesCount;
	PFCoalescer* _coalescer;
	NSObject*<OS_dispatch_group> _group;

}

@property (assign) unsigned long long coalescedUpdatesCount;              //@synthesize coalescedUpdatesCount=_coalescedUpdatesCount - In the implementation block
@property (__weak) PFCoalescer * coalescer;                               //@synthesize coalescer=_coalescer - In the implementation block
@property (retain) NSObject*<OS_dispatch_group> group;                    //@synthesize group=_group - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)activityToken;
-(void)delayNextInvocationByTimeInterval:(double)arg1 ;
-(void)setCoalescer:(PFCoalescer *)arg1 ;
-(PFCoalescer *)coalescer;
-(id)initWithCoalescer:(id)arg1 ;
-(void)pushBack:(/*^block*/id)arg1 ;
-(void)waitForActivityTokens;
-(unsigned long long)coalescedUpdatesCount;
-(void)setCoalescedUpdatesCount:(unsigned long long)arg1 ;
@end

