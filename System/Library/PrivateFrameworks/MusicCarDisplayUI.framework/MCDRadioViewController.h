/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>
#import <libobjc.A.dylib/RURadioDataSourceDelegate.h>

@class RURadioDataSource, NSArray, NSString, MCDNoContentView, UIView, RadioRecentStationsController;

@interface MCDRadioViewController : MCD_OLD_TableViewController <RURadioDataSourceDelegate> {

	RURadioDataSource* _dataSource;
	NSArray* _featuredStations;
	NSArray* _myStations;
	NSString* _featuredStationNamesBrief;
	MCDNoContentView* _placeholderView;
	UIView* _MCD_tableView;
	RadioRecentStationsController* _recentStationsController;

}

@property (assign,nonatomic,__weak) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecentStationsController:(RadioRecentStationsController *)arg1 ;
-(RadioRecentStationsController *)recentStationsController;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(void)_updateViewForNetworkType:(long long)arg1 ;
-(void)_categorizeStations;
-(id)_stationFromIndexPath:(id)arg1 ;
-(BOOL)_isNetworkTypeAllowed:(long long)arg1 ;
-(id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2 ;
-(void)radioDataSourceDidInvalidate:(id)arg1 ;
@end

