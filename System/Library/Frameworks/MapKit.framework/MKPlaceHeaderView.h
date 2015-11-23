/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:29 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKStackingViewControllerSizableView.h>
#import <libobjc.A.dylib/MKPlaceHeaderViewCinematics.h>
#import <libobjc.A.dylib/MKPlaceHeaderBackgroundViewDelegate.h>

@protocol MKPlaceHeaderViewDelegate;
@class MKPlaceHeaderBackgroundView, UIView, MKStarRatingAndLabelView, MKTransitInfoLabelView, _MKEnvironmentLabel, NSArray, UIFont, UILayoutGuide, NSLayoutConstraint, MKMapItem, NSMutableArray, NSString;

@interface MKPlaceHeaderView : UIView <MKStackingViewControllerSizableView, MKPlaceHeaderViewCinematics, MKPlaceHeaderBackgroundViewDelegate> {

	MKPlaceHeaderBackgroundView* _background;
	UIView* _screen;
	BOOL _compressedMode;
	MKStarRatingAndLabelView* _ratingView;
	UILabel* _titleLabel;
	UILabel* _distanceToPlaceLabel;
	MKTransitInfoLabelView* _transitInfoView;
	_MKEnvironmentLabel* _environmentLabel;
	NSArray* _environmentsLabelConstraints;
	UIFont* _titleFont;
	UIFont* _subtitleFont;
	UIFont* _reviewsFont;
	UIFont* _transitFont;
	UILayoutGuide* _topLayoutSpacer;
	UILayoutGuide* _bottomLayoutSpacer;
	NSLayoutConstraint* _topSpacerToTitleConstraint;
	NSLayoutConstraint* _titleToBottomConstraint;
	NSLayoutConstraint* _topBottomDifferenceConstraint;
	NSLayoutConstraint* _distanceLabelToBottomConstraint;
	NSLayoutConstraint* _distanceLabelToTitleConstraint;
	NSLayoutConstraint* _transitViewToTitleConstraint_Text;
	NSLayoutConstraint* _transitViewToDistanceLabelConstraint_Text;
	NSLayoutConstraint* _transitViewToBottomConstraint_Text;
	NSLayoutConstraint* _transitViewToTitleConstraint_Shield;
	NSLayoutConstraint* _transitViewToDistanceLabelConstraint_Shield;
	NSLayoutConstraint* _transitViewToBottomConstraint_Shield;
	NSLayoutConstraint* _ratingViewToTitleConstraint;
	NSLayoutConstraint* _ratingViewToDistanceLabelConstraint;
	NSLayoutConstraint* _ratingViewToBottomConstraint;
	struct {
		unsigned isPresenting;
	}  _headerViewFlags;
	BOOL _needsToUpdateTitleLabel;
	MKMapItem* _mapItem;
	long long _backgroundTypeOverride;
	id<MKPlaceHeaderViewDelegate> _delegate;
	NSArray* _labelWidthConstraints;
	NSMutableArray* _viewDidAppearBlocks;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                        //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) long long backgroundTypeOverride;                           //@synthesize backgroundTypeOverride=_backgroundTypeOverride - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subTitle; 
@property (assign,nonatomic) unsigned long long numberOfReviews; 
@property (nonatomic,copy) NSString * reviewsSourceName; 
@property (assign,nonatomic) double rating; 
@property (nonatomic,readonly) UIFont * subtitleFont; 
@property (assign,nonatomic,__weak) id<MKPlaceHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL needsToUpdateTitleLabel;                               //@synthesize needsToUpdateTitleLabel=_needsToUpdateTitleLabel - In the implementation block
@property (nonatomic,retain) NSArray * labelWidthConstraints;                            //@synthesize labelWidthConstraints=_labelWidthConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * viewDidAppearBlocks;                       //@synthesize viewDidAppearBlocks=_viewDidAppearBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewDidAppearBlocks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)viewDidAppearBlocks;
-(void)setShowInlineMapInHeader:(BOOL)arg1 ;
-(void)prepareForPresentation;
-(void)presentBackgroundIfNeeded;
-(long long)backgroundTypeOverride;
-(NSArray *)labelWidthConstraints;
-(void)setBackgroundViewTransform:(CATransform3D)arg1 ;
-(void)_updateFontBasedConstraints;
-(id)initWithFrame:(CGRect)arg1 withCompressedMode:(BOOL)arg2 ;
-(void)resetAnimations;
-(void)_configureLabelForHeader:(id)arg1 ;
-(void)addConstraints;
-(BOOL)needsToUpdateTitleLabel;
-(UILabel*)newInfoLabel;
-(void)restartAnimations;
-(void)setLabelWidthConstraints:(NSArray *)arg1 ;
-(NSString *)subTitle;
-(void)setNeedsToUpdateTitleLabel:(BOOL)arg1 ;
-(void)refreshContent;
-(void)setBackgroundTypeOverride:(long long)arg1 ;
-(void)updateTitleLabel;
-(void)addContent;
-(NSString *)reviewsSourceName;
-(void)_updateCurrentEnvironmentName;
-(void)setReviewsSourceName:(NSString *)arg1 ;
-(id)viewsForPresentation;
-(void)headerViewBackgroundDidFinishLoading:(id)arg1 ;
-(void)setSubTitle:(NSString *)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)_updateFonts;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKPlaceHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MKPlaceHeaderViewDelegate>)delegate;
-(NSString *)title;
-(void)reset;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)resume;
-(void)present;
-(UIFont *)subtitleFont;
-(void)pause;
-(CATransform3D)perspectiveTransform;
-(unsigned long long)numberOfReviews;
-(void)setNumberOfReviews:(unsigned long long)arg1 ;
-(void)setRating:(double)arg1 ;
-(double)rating;
@end
