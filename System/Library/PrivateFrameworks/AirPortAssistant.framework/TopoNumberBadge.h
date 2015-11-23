/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIFont;

@interface TopoNumberBadge : CALayer {

	id _owningView;
	long long _count;
	CGSize _imageSize;
	CGSize _textSize;
	UIFont* _font;

}

@property (assign,nonatomic) id owningView; 
@property (assign,nonatomic) long long count;              //@synthesize count=_count - In the implementation block
+(int)initImageCache;
+(void)deallocImageCache;
+(id)imageBadgeForCount:(long long)arg1 ;
-(void)dealloc;
-(long long)count;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)layoutSublayers;
-(CGSize)preferredFrameSize;
-(id)initWithOwningView:(id)arg1 ;
-(void)calculateBadgeMetrics;
-(CGImageRef)newNumberBadge;
@end
