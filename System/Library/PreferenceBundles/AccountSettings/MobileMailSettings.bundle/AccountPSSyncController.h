/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>

@class MailAccount;

@interface AccountPSSyncController : ACUIDataclassConfigurationViewController

@property (nonatomic,readonly) MailAccount * mailAccount; 
-(MailAccount *)mailAccount;
-(id)specifiers;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(Class)accountInfoControllerClass;
-(BOOL)shouldVerifyBeforeAccountSave;
-(id)valueForAccountSummaryCell;
@end
