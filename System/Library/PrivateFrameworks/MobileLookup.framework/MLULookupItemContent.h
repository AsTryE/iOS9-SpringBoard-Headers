/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileLookup/MobileLookup-Structs.h>
@class UIViewController, NSURL, CNContact;

@interface MLULookupItemContent : NSObject {

	BOOL _valid;
	UIViewController* _previewViewController;
	unsigned long long _commitType;
	UIViewController* _commitViewController;
	NSURL* _commitURL;

}

@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,readonly) CNContact * contact; 
@property (assign,nonatomic) unsigned long long commitType;                         //@synthesize commitType=_commitType - In the implementation block
@property (nonatomic,retain) UIViewController * commitViewController;               //@synthesize commitViewController=_commitViewController - In the implementation block
@property (nonatomic,retain) NSURL * commitURL;                                     //@synthesize commitURL=_commitURL - In the implementation block
@property (assign) BOOL valid;                                                      //@synthesize valid=_valid - In the implementation block
+(id)contentWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
+(id)contentWithText:(id)arg1 range:(NSRange)arg2 ;
-(CNContact *)contact;
-(UIViewController *)previewViewController;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(BOOL)valid;
-(unsigned long long)commitType;
-(id)requiredEntitlements;
-(void)setValid:(BOOL)arg1 ;
-(NSURL *)commitURL;
-(BOOL)wantsSeamlessCommit;
-(void)dismissViewController;
-(void)setupViewControllerInCommitMode;
-(BOOL)commitPreviewInController:(id)arg1 ;
-(void)setCommitType:(unsigned long long)arg1 ;
-(UIViewController *)commitViewController;
-(void)setCommitViewController:(UIViewController *)arg1 ;
-(void)setCommitURL:(NSURL *)arg1 ;
-(id)children;
@end
