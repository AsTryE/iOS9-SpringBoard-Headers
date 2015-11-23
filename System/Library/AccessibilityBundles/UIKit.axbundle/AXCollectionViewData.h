/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject {

	NSMutableDictionary* _children;
	long long _childCount;

}

@property (assign,nonatomic) long long childCount;                          //@synthesize childCount=_childCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;              //@synthesize children=_children - In the implementation block
-(void)setChildCount:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)childCount;
-(NSMutableDictionary *)children;
@end
