/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIReportAConcernTemplateViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class NSArray, SKUIViewElementLayoutContext, SKUIReportAConcernTemplateView, SKUIReportAConcernTemplateViewElement, NSString;

@interface SKUIReportAConcernDocumentViewController : SKUIViewController <SKUIReportAConcernTemplateViewDelegate, SKUIDocumentViewController> {

	NSArray* _concernIdentifiers;
	NSArray* _concernStrings;
	BOOL _didSelectConcern;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIReportAConcernTemplateView* _reportAConcernView;
	SKUIReportAConcernTemplateViewElement* _templateElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_layoutContext;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)_sendCancelEventAndDismiss;
-(void)_layoutNavigation;
-(void)_doneButtonAction;
-(void)_cancelButtonAction;
-(void)_loadConcernsForConcernType:(long long)arg1 withReportAConcernBagDictionary:(id)arg2 ;
-(void)_loadViewWithConcernStrings;
-(void)_sendDoneEventAndDismissWithSelectedIndex:(long long)arg1 ;
-(void)_layoutReportAConcernView;
-(void)didSelectConcernInReportAConcernTemplateView:(id)arg1 ;
@end

