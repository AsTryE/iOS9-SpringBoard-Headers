/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WBSHistoryItem;

@interface WBSFrequentlyVisitedSiteCandidate : NSObject {

	float _score;
	WBSHistoryItem* _historyItem;

}

@property (nonatomic,readonly) WBSHistoryItem * historyItem;              //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,readonly) float score;                               //@synthesize score=_score - In the implementation block
-(float)score;
-(id)initWithHistoryItem:(id)arg1 score:(float)arg2 ;
-(WBSHistoryItem *)historyItem;
@end

