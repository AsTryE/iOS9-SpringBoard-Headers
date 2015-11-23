/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/PLModalDimmingContained.h>

@class UIImageView, UIView, UINavigationBar, UINavigationController;

@interface PLTexturedCardViewController : UIViewController <PLModalDimmingContained> {

	UIImageView* _decorationView;
	UIImageView* _innerShadowView;
	UIView* _wrapperView;
	UINavigationBar* _navigationBar;
	UINavigationController* _navigationController;

}
-(CGSize)preferredSizeInParentViewController;
-(CGPoint)preferredOffsetInParentViewController;
-(void)dealloc;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_updateNavigationBarToOrientation:(long long)arg1 ;
-(void)_updateWrapperViewToOrientation:(long long)arg1 ;
@end
