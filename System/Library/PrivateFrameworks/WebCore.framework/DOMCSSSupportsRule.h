/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMCSSRule.h>

@class DOMCSSRuleList, NSString;

@interface DOMCSSSupportsRule : DOMCSSRule

@property (readonly) DOMCSSRuleList * cssRules; 
@property (copy,readonly) NSString * conditionText; 
-(DOMCSSRuleList *)cssRules;
-(void)deleteRule:(unsigned)arg1 ;
-(unsigned)insertRule:(id)arg1 index:(unsigned)arg2 ;
-(NSString *)conditionText;
@end

