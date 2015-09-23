//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _SBNotificationCenterTransitionContext : NSObject
{
    _Bool _presenting;
    _Bool _interactive;
    _Bool _fromCurrentState;
    CDUnknownBlockType _stepper;
    CDUnknownBlockType _setupPrelude;
    CDUnknownBlockType _setupPostlude;
    CDUnknownBlockType _animationPrelude;
    CDUnknownBlockType _presentationBegunHandler;
    CDUnknownBlockType _animationPostlude;
    CDUnknownBlockType _pendingTransition;
    CDUnknownBlockType _completion;
    struct CGPoint _initialTouchLocation;
}

@property(nonatomic) struct CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType pendingTransition; // @synthesize pendingTransition=_pendingTransition;
@property(copy, nonatomic) CDUnknownBlockType animationPostlude; // @synthesize animationPostlude=_animationPostlude;
@property(copy, nonatomic) CDUnknownBlockType presentationBegunHandler; // @synthesize presentationBegunHandler=_presentationBegunHandler;
@property(copy, nonatomic) CDUnknownBlockType animationPrelude; // @synthesize animationPrelude=_animationPrelude;
@property(copy, nonatomic) CDUnknownBlockType setupPostlude; // @synthesize setupPostlude=_setupPostlude;
@property(copy, nonatomic) CDUnknownBlockType setupPrelude; // @synthesize setupPrelude=_setupPrelude;
@property(copy, nonatomic) CDUnknownBlockType stepper; // @synthesize stepper=_stepper;
@property(nonatomic, getter=isFromCurrentState) _Bool fromCurrentState; // @synthesize fromCurrentState=_fromCurrentState;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)dealloc;

@end
