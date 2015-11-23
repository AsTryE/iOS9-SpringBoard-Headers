/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, PKPaymentSetupHeroView, PKPaymentSetupInfoView;

@interface PKPaymentSetupIntroView : UIView {

	UIView* _maskView;
	PKPaymentSetupHeroView* _heroView;
	long long _context;
	PKPaymentSetupInfoView* _infoView;

}

@property (nonatomic,retain) PKPaymentSetupInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
-(BOOL)isBuddyiPad;
-(id)initWithContext:(long long)arg1 featuredPaymentNetworks:(id)arg2 ;
-(id)initWithContext:(long long)arg1 featuredPaymentNetwork:(long long)arg2 ;
-(void)_createSubviewsWithNetworks:(id)arg1 ;
-(PKPaymentSetupInfoView *)infoView;
-(void)setInfoView:(PKPaymentSetupInfoView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)stopAnimation;
-(void)startAnimation;
-(id)initWithContext:(long long)arg1 ;
@end
