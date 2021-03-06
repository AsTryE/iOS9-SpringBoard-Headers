/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, NSDate;

@interface _UIPlatterPanningVelocityIntegrator : NSObject {

	NSMutableArray* _samples;
	NSDate* _firstTouchTime;
	CGVector _offset;
	CGVector _totalTranslation;
	CGPoint _initialTouchPosition;

}

@property (nonatomic,readonly) CGVector velocity; 
@property (assign,nonatomic) CGVector offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) NSMutableArray * samples;                  //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) CGVector totalTranslation;                 //@synthesize totalTranslation=_totalTranslation - In the implementation block
@property (nonatomic,retain) NSDate * firstTouchTime;                   //@synthesize firstTouchTime=_firstTouchTime - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchPosition;              //@synthesize initialTouchPosition=_initialTouchPosition - In the implementation block
-(id)init;
-(void)reset;
-(CGVector)velocity;
-(void)setOffset:(CGVector)arg1 ;
-(CGVector)offset;
-(void)addTouchLocation:(CGPoint)arg1 ;
-(NSDate *)firstTouchTime;
-(void)setFirstTouchTime:(NSDate *)arg1 ;
-(void)setInitialTouchPosition:(CGPoint)arg1 ;
-(NSMutableArray *)samples;
-(void)setTotalTranslation:(CGVector)arg1 ;
-(CGVector)totalTranslation;
-(CGVector)_computedVelocity;
-(CGPoint)initialTouchPosition;
-(void)setSamples:(NSMutableArray *)arg1 ;
@end

