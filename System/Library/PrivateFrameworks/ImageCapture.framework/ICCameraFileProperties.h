/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSMutableDictionary, NSString, NSMutableArray;

@interface ICCameraFileProperties : NSObject {

	long long _fileSize;
	BOOL _hasThumbnail;
	BOOL _hasMetadata;
	BOOL _raw;
	int _fetchingThumbnailLock;
	BOOL _fetchingThumbnail;
	int _fetchingMetadataLock;
	BOOL _fetchingMetadata;
	CGImageRef _originalThumbnail;
	CGImageRef _thumbnail;
	NSMutableDictionary* _metadata;
	NSMutableDictionary* _metadata_hidden;
	unsigned long long _orientation;
	BOOL _hasOverriddenOrientation;
	double _duration;
	NSString* _burstUUID;
	BOOL _burstFavorite;
	BOOL _burstPicked;
	BOOL _highFramerate;
	BOOL _timeLapse;
	NSMutableArray* _sidecarFiles;

}

@property (assign) long long fileSize;                                 //@synthesize fileSize=_fileSize - In the implementation block
@property (assign) BOOL hasThumbnail;                                  //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (assign) BOOL hasMetadata;                                   //@synthesize hasMetadata=_hasMetadata - In the implementation block
@property (getter=isRaw) BOOL raw;                                     //@synthesize raw=_raw - In the implementation block
@property (assign) BOOL fetchingThumbnail; 
@property (assign) BOOL fetchingMetadata; 
@property (assign) CGImageRef originalThumbnail; 
@property (assign) CGImageRef thumbnail; 
@property (retain) NSMutableDictionary * metadata;                     //@synthesize metadata=_metadata - In the implementation block
@property (retain) NSMutableDictionary * metadata_hidden;              //@synthesize metadata_hidden=_metadata_hidden - In the implementation block
@property (assign) unsigned long long orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (assign) BOOL hasOverriddenOrientation;                      //@synthesize hasOverriddenOrientation=_hasOverriddenOrientation - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (retain) NSMutableArray * sidecarFiles;                      //@synthesize sidecarFiles=_sidecarFiles - In the implementation block
@property (retain) NSString * burstUUID;                               //@synthesize burstUUID=_burstUUID - In the implementation block
@property (assign) BOOL burstFavorite;                                 //@synthesize burstFavorite=_burstFavorite - In the implementation block
@property (assign) BOOL burstPicked;                                   //@synthesize burstPicked=_burstPicked - In the implementation block
@property (assign) BOOL highFramerate;                                 //@synthesize highFramerate=_highFramerate - In the implementation block
@property (assign) BOOL timeLapse;                                     //@synthesize timeLapse=_timeLapse - In the implementation block
-(void)dealloc;
-(double)duration;
-(void)setOrientation:(unsigned long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)orientation;
-(BOOL)hasMetadata;
-(CGImageRef)thumbnail;
-(void)setThumbnail:(CGImageRef)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(void)setFetchingThumbnail:(BOOL)arg1 ;
-(void)setFetchingMetadata:(BOOL)arg1 ;
-(void)setOriginalThumbnail:(CGImageRef)arg1 ;
-(void)setMetadata_hidden:(NSMutableDictionary *)arg1 ;
-(CGImageRef)originalThumbnail;
-(BOOL)fetchingThumbnail;
-(BOOL)fetchingMetadata;
-(void)setHasMetadata:(BOOL)arg1 ;
-(void)setRaw:(BOOL)arg1 ;
-(NSMutableDictionary *)metadata_hidden;
-(BOOL)hasOverriddenOrientation;
-(void)setHasOverriddenOrientation:(BOOL)arg1 ;
-(void)setSidecarFiles:(NSMutableArray *)arg1 ;
-(NSString *)burstUUID;
-(void)setBurstUUID:(NSString *)arg1 ;
-(BOOL)burstPicked;
-(void)setBurstPicked:(BOOL)arg1 ;
-(BOOL)burstFavorite;
-(void)setBurstFavorite:(BOOL)arg1 ;
-(BOOL)highFramerate;
-(void)setHighFramerate:(BOOL)arg1 ;
-(BOOL)timeLapse;
-(void)setTimeLapse:(BOOL)arg1 ;
-(long long)fileSize;
-(void)finalize;
-(NSMutableDictionary *)metadata;
-(BOOL)isRaw;
-(NSMutableArray *)sidecarFiles;
-(void)setFileSize:(long long)arg1 ;
-(BOOL)hasThumbnail;
@end

