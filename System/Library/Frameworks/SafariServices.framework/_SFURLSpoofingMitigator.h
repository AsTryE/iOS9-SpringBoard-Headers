/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface _SFURLSpoofingMitigator : NSObject {

	NSDate* _dateOfStartOfLastProvisionalNavigation;
	unsigned long long _recentlyInterruptedNavigationCount;
	BOOL _UIShouldReflectCommittedURLInsteadOfCurrentURL;

}

@property (nonatomic,readonly) BOOL UIShouldReflectCommittedURLInsteadOfCurrentURL;              //@synthesize UIShouldReflectCommittedURLInsteadOfCurrentURL=_UIShouldReflectCommittedURLInsteadOfCurrentURL - In the implementation block
+(BOOL)automaticallyNotifiesObserversOfUIShouldReflectCommittedURLInsteadOfCurrentURL;
-(BOOL)UIShouldReflectCommittedURLInsteadOfCurrentURL;
-(void)didStartProvisionalNavigation;
-(void)didCommitNavigation;
-(void)didFailProvisionalNavigationWithError:(id)arg1 ;
-(void)_determineIfPageIsTryingToSpoofAddressFieldWhenInterruptingProvisionalNavigation;
-(void)_stopTrackingInterruptedProvisionalNavigations;
-(void)_setUIShouldReflectCommittedURLInsteadOfCurrentURL:(BOOL)arg1 ;
@end
