/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLAssetContainerChangeNotification.h>

@class PLShuffledAlbum, PLAssetContainerChangeNotification, NSIndexSet, NSOrderedSet;

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification {

	PLShuffledAlbum* _album;
	PLAssetContainerChangeNotification* _backingNotification;
	NSIndexSet* _changedIndexes;
	NSOrderedSet* _newSet;

}
+(id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3 ;
-(id)album;
-(id)insertedIndexes;
-(id)changedIndexes;
-(BOOL)shouldReload;
-(id)deletedIndexes;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)object;
-(void)_calculateDiffs;
-(id)_diffDescription;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(id)_changedObjects;
-(BOOL)titleDidChange;
-(BOOL)keyAssetDidChange;
-(BOOL)countDidChange;
-(id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2 ;
@end

