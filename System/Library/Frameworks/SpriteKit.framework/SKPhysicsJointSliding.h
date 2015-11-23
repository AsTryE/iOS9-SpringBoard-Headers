/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint {

	BOOL _shouldEnableLimits;
	double _lowerDistanceLimit;
	double _upperDistanceLimit;

}

@property (assign,nonatomic) BOOL shouldEnableLimits;                //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerDistanceLimit;              //@synthesize lowerDistanceLimit=_lowerDistanceLimit - In the implementation block
@property (assign,nonatomic) double upperDistanceLimit;              //@synthesize upperDistanceLimit=_upperDistanceLimit - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
-(BOOL)shouldEnableLimits;
-(double)lowerDistanceLimit;
-(double)upperDistanceLimit;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(void)setLowerDistanceLimit:(double)arg1 ;
-(void)setUpperDistanceLimit:(double)arg1 ;
@end
