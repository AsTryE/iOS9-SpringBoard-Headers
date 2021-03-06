/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:44 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UITextView.h>

@protocol MSCLTokenTextViewDelegate;
@class NSString, NSMutableArray;

@interface MSCLTokenTextView : UITextView {

	long long _maximumTagLength;
	NSString* _tagDelimeter;
	NSMutableArray* _tokenViews;
	id<MSCLTokenTextViewDelegate> _changeDelegate;
	NSString* _tagSuffix;

}

@property (assign,nonatomic,__weak) id<MSCLTokenTextViewDelegate> changeDelegate;              //@synthesize changeDelegate=_changeDelegate - In the implementation block
@property (assign,nonatomic) long long maximumTagLength;                                       //@synthesize maximumTagLength=_maximumTagLength - In the implementation block
@property (nonatomic,copy) NSString * tagDelimeter;                                            //@synthesize tagDelimeter=_tagDelimeter - In the implementation block
@property (nonatomic,copy) NSString * tagSuffix;                                               //@synthesize tagSuffix=_tagSuffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingTagForSelectedRange; 
-(void)setAttributedText:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
-(id<MSCLTokenTextViewDelegate>)changeDelegate;
-(void)setChangeDelegate:(id<MSCLTokenTextViewDelegate>)arg1 ;
-(id)pendingTagForRange:(NSRange)arg1 usedRange:(NSRange*)arg2 ;
-(NSString *)tagSuffix;
-(void)replaceTextInRange:(NSRange)arg1 withTokenAttachment:(id)arg2 suffix:(id)arg3 ;
-(NSRange)_tagRangeForRange:(NSRange)arg1 ;
-(void)reloadTokenSelection;
-(void)enumerateTokenAttachmentsUsingBlock:(/*^block*/id)arg1 ;
-(void)insertTokenWithAttachment:(id)arg1 ;
-(NSString *)pendingTagForSelectedRange;
-(void)reloadTokenViews;
-(BOOL)selectTokenAtIndex:(long long)arg1 ;
-(id)textWithResolvedTokenStrings;
-(NSString *)tagDelimeter;
-(void)setTagDelimeter:(NSString *)arg1 ;
-(long long)maximumTagLength;
-(void)setMaximumTagLength:(long long)arg1 ;
-(void)setTagSuffix:(NSString *)arg1 ;
@end

