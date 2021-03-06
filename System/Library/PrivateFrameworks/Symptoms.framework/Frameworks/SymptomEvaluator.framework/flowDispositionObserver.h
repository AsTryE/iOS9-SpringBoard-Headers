/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol flowDispositionObserver <NSObject>
@property (assign,nonatomic) BOOL enabled; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3;
-(unsigned)noteFlow:(id)arg1 withDisposition:(unsigned)arg2 present:(BOOL)arg3 trackedBy:(id)arg4;
-(void)configurePolicies:(id)arg1;

@end

