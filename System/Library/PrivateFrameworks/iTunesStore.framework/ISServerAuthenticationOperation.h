/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSAuthenticationContext, ISDialog, ISDialogButton, NSURL;

@interface ISServerAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedAccountDSID;
	SSAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	BOOL _performsButtonAction;
	ISDialogButton* _performedButton;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;

}

@property (retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) ISDialog * dialog;                                            //@synthesize dialog=_dialog - In the implementation block
@property (assign) BOOL performsButtonAction;                                    //@synthesize performsButtonAction=_performsButtonAction - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                          //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) ISDialogButton * performedButton;                             //@synthesize performedButton=_performedButton - In the implementation block
@property (retain) NSURL * redirectURL;                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (retain) ISDialogButton * selectedButton;                              //@synthesize selectedButton=_selectedButton - In the implementation block
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setDialog:(ISDialog *)arg1 ;
-(ISDialog *)dialog;
-(NSURL *)redirectURL;
-(void)setRedirectURL:(NSURL *)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setAuthenticatedAccountDSID:(NSNumber *)arg1 ;
-(void)setSelectedButton:(ISDialogButton *)arg1 ;
-(ISDialogButton *)selectedButton;
-(BOOL)performsButtonAction;
-(void)setPerformsButtonAction:(BOOL)arg1 ;
-(ISDialogButton *)performedButton;
-(void)setPerformedButton:(ISDialogButton *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSNumber *)authenticatedAccountDSID;
@end

