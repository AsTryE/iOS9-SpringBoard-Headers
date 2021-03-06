/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <libobjc.A.dylib/KeychainSyncPasscodeFieldDelegate.h>

@protocol UIKeyInput;
@class PSTableCell, UIView, PSSpecifier, NSString;

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {

	PSTableCell* _textEntryCell;
	UIView*<UIKeyInput> _textEntryView;
	PSSpecifier* _textEntrySpecifier;
	BOOL _hidesNextButton;
	BOOL _secureTextEntry;
	BOOL _textFieldHasRoundBorder;
	BOOL _convertsNumeralsToASCII;
	int _textEntryType;
	unsigned long long _numberOfPasscodeFields;
	NSString* _textValue;

}

@property (assign,nonatomic) int textEntryType;                                      //@synthesize textEntryType=_textEntryType - In the implementation block
@property (assign,nonatomic) BOOL hidesNextButton;                                   //@synthesize hidesNextButton=_hidesNextButton - In the implementation block
@property (assign,nonatomic) BOOL secureTextEntry;                                   //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic) BOOL textFieldHasRoundBorder;                           //@synthesize textFieldHasRoundBorder=_textFieldHasRoundBorder - In the implementation block
@property (assign,nonatomic) BOOL convertsNumeralsToASCII;                           //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPasscodeFields;              //@synthesize numberOfPasscodeFields=_numberOfPasscodeFields - In the implementation block
@property (nonatomic,retain) NSString * textValue;                                   //@synthesize textValue=_textValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldChanged:(id)arg1 ;
-(id)specifiers;
-(id)placeholderText;
-(id)textEntryView;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(void)loadView;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setTextEntryType:(int)arg1 ;
-(void)setHidesNextButton:(BOOL)arg1 ;
-(int)textEntryType;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(void)nextPressed;
-(void)setTextFieldHasRoundBorder:(BOOL)arg1 ;
-(void)updateNextButton;
-(void)setTextEntryText:(id)arg1 ;
-(id)textEntryText;
-(void)setNumberOfPasscodeFields:(unsigned long long)arg1 ;
-(void)textEntryViewDidChange:(id)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)willBecomeActive;
-(void)setConvertsNumeralsToASCII:(BOOL)arg1 ;
-(void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2 ;
-(BOOL)convertsNumeralsToASCII;
-(BOOL)hidesNextButton;
-(NSString *)textValue;
-(void)setTextValue:(NSString *)arg1 ;
-(id)textEntrySpecifier;
-(void)setTextValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getTextValueForSpecifier:(id)arg1 ;
-(unsigned long long)numberOfPasscodeFields;
-(BOOL)textFieldHasRoundBorder;
-(BOOL)secureTextEntry;
@end

