/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@class UIScreen, CADisplayLink, NSString;

@interface FIUIGLViewController : UIViewController <GLKViewDelegate> {

	UIScreen* _screen;
	CADisplayLink* _displayLink;
	long long _displayLinkFrameInterval;
	BOOL _displayLinkPaused;
	BOOL _viewIsVisible;
	double _lastUpdateTime;
	BOOL _needsRender;
	unsigned _latestDrawErrror;
	BOOL _synchronizesWithCA;
	long long _preferredFramesPerSecond;

}

@property (assign,nonatomic) BOOL synchronizesWithCA;                         //@synthesize synchronizesWithCA=_synchronizesWithCA - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)viewIsVisible;
-(BOOL)isPaused;
-(long long)preferredFramesPerSecond;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setView:(id)arg1 ;
-(void)loadView;
-(unsigned)drawInRect:(CGRect)arg1 ;
-(id)snapshot;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)_update;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)update;
-(void)setPaused:(BOOL)arg1 ;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(void)_updateScreenIfChanged;
-(void)_pauseByNotification;
-(void)_resumeByNotification;
-(void)_invalidateLastUpdateTime;
-(BOOL)_needsDisplayLink;
-(void)_displayLinkFired;
-(id)glkView;
-(void)_createDisplayLinkForScreen:(id)arg1 ;
-(BOOL)_isLastUpdateTimeValid;
-(void)hack_forceUnpause;
-(double)timeSinceLastUpdate;
-(void)_loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned*)arg4 cache:(BOOL)arg5 ;
-(BOOL)synchronizesWithCA;
-(void)setSynchronizesWithCA:(BOOL)arg1 ;
-(void)setNeedsRender;
@end
