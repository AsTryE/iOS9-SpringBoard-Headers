/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier {

	UIGradient* _gradient;
	double _reflectionHeight;

}

@property (nonatomic,retain) UIGradient * gradient;                //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) double reflectionHeight;              //@synthesize reflectionHeight=_reflectionHeight - In the implementation block
-(void)dealloc;
-(void)setGradient:(UIGradient *)arg1 ;
-(UIGradient *)gradient;
-(double)reflectionHeight;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)setReflectionHeight:(double)arg1 ;
@end

