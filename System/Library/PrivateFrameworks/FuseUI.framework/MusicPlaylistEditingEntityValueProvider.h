/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@class NSMutableDictionary, UIImage, MusicProductDescription, NSString;

@interface MusicPlaylistEditingEntityValueProvider : NSObject <MusicEntityValueProviding> {

	NSMutableDictionary* _properties;
	UIImage* _artworkImage;

}

@property (nonatomic,retain) UIImage * artworkImage;                                  //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) MusicProductDescription * productDescription; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)setProductDescription:(MusicProductDescription *)arg1 ;
-(MusicProductDescription *)productDescription;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
@end
