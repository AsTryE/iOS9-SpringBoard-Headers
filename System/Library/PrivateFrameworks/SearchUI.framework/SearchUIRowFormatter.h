/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFont;

@interface SearchUIRowFormatter : NSObject {

	BOOL _centerText;
	BOOL _thumbnailFillsWidth;
	BOOL _requiresTwoLineTitles;
	double _spacingBetweenTitleAndTopView;
	double _spacingBetweenTitleAndDescription;
	double _spacingBetweenDescriptions;
	double _spacingBetweenDescriptionAndFootnote;
	UIFont* _titleFont;
	UIFont* _descriptionFont;
	UIFont* _footnoteFont;
	double _interResultSpacing;

}

@property (assign) double spacingBetweenTitleAndTopView;                     //@synthesize spacingBetweenTitleAndTopView=_spacingBetweenTitleAndTopView - In the implementation block
@property (assign) double spacingBetweenTitleAndDescription;                 //@synthesize spacingBetweenTitleAndDescription=_spacingBetweenTitleAndDescription - In the implementation block
@property (assign) double spacingBetweenDescriptions;                        //@synthesize spacingBetweenDescriptions=_spacingBetweenDescriptions - In the implementation block
@property (assign) double spacingBetweenDescriptionAndFootnote;              //@synthesize spacingBetweenDescriptionAndFootnote=_spacingBetweenDescriptionAndFootnote - In the implementation block
@property (retain) UIFont * titleFont;                                       //@synthesize titleFont=_titleFont - In the implementation block
@property (retain) UIFont * descriptionFont;                                 //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (retain) UIFont * footnoteFont;                                    //@synthesize footnoteFont=_footnoteFont - In the implementation block
@property (assign) BOOL centerText;                                          //@synthesize centerText=_centerText - In the implementation block
@property (assign) BOOL thumbnailFillsWidth;                                 //@synthesize thumbnailFillsWidth=_thumbnailFillsWidth - In the implementation block
@property (assign) double interResultSpacing;                                //@synthesize interResultSpacing=_interResultSpacing - In the implementation block
@property (assign) BOOL requiresTwoLineTitles;                               //@synthesize requiresTwoLineTitles=_requiresTwoLineTitles - In the implementation block
-(BOOL)requiresTwoLineTitles;
-(UIFont *)titleFont;
-(id)initWithResults:(id)arg1 style:(unsigned long long)arg2 ;
-(id)initWithResult:(id)arg1 style:(unsigned long long)arg2 ;
-(id)initWithResult:(id)arg1 style:(unsigned long long)arg2 scrollable:(BOOL)arg3 ;
-(id)initWithRowType:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(void)setSpacingBetweenTitleAndTopView:(double)arg1 ;
-(void)setSpacingBetweenTitleAndDescription:(double)arg1 ;
-(void)setSpacingBetweenDescriptions:(double)arg1 ;
-(void)setSpacingBetweenDescriptionAndFootnote:(double)arg1 ;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(void)setFootnoteFont:(UIFont *)arg1 ;
-(void)setInterResultSpacing:(double)arg1 ;
-(void)setThumbnailFillsWidth:(BOOL)arg1 ;
-(void)setRequiresTwoLineTitles:(BOOL)arg1 ;
-(double)spacingBetweenTitleAndTopView;
-(double)spacingBetweenTitleAndDescription;
-(double)spacingBetweenDescriptions;
-(double)spacingBetweenDescriptionAndFootnote;
-(UIFont *)descriptionFont;
-(UIFont *)footnoteFont;
-(BOOL)centerText;
-(BOOL)thumbnailFillsWidth;
-(double)interResultSpacing;
-(void)setCenterText:(BOOL)arg1 ;
-(void)setTitleFont:(UIFont *)arg1 ;
@end

