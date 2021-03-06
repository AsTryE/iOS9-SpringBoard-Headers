/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface RTStateDepictionOnePredEl : NSObject {

	int _numOfClustEntries;
	double _aggregateTime_s;
	double _latestVisitTime_s;
	double _earliestVisitTime_s;
	NSMutableArray* _visitHist;
	double _density;

}

@property (assign,nonatomic) int numOfClustEntries;                   //@synthesize numOfClustEntries=_numOfClustEntries - In the implementation block
@property (assign,nonatomic) double aggregateTime_s;                  //@synthesize aggregateTime_s=_aggregateTime_s - In the implementation block
@property (assign,nonatomic) double latestVisitTime_s;                //@synthesize latestVisitTime_s=_latestVisitTime_s - In the implementation block
@property (assign,nonatomic) double earliestVisitTime_s;              //@synthesize earliestVisitTime_s=_earliestVisitTime_s - In the implementation block
@property (nonatomic,retain) NSMutableArray * visitHist;              //@synthesize visitHist=_visitHist - In the implementation block
@property (assign,nonatomic) double density;                          //@synthesize density=_density - In the implementation block
-(id)init;
-(void)setDensity:(double)arg1 ;
-(double)density;
-(void)setNumOfClustEntries:(int)arg1 ;
-(void)setAggregateTime_s:(double)arg1 ;
-(void)setLatestVisitTime_s:(double)arg1 ;
-(void)setVisitHist:(NSMutableArray *)arg1 ;
-(int)numOfClustEntries;
-(double)aggregateTime_s;
-(double)latestVisitTime_s;
-(double)earliestVisitTime_s;
-(void)setEarliestVisitTime_s:(double)arg1 ;
-(NSMutableArray *)visitHist;
@end

