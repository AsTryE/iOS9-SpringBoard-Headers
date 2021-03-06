/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUPhotosGridViewController.h>

@class WallpaperMagicGridViewControllerSpec, NSArray, PLWallpaperImageViewController;

@interface WallpaperMotionGridViewController : PUPhotosGridViewController {

	WallpaperMagicGridViewControllerSpec* _wallpaperSpec;
	NSArray* _photoIrisAssets;
	PLWallpaperImageViewController* _imageViewController;

}

@property (nonatomic,retain) WallpaperMagicGridViewControllerSpec * wallpaperSpec;              //@synthesize wallpaperSpec=_wallpaperSpec - In the implementation block
@property (nonatomic,retain) NSArray * photoIrisAssets;                                         //@synthesize photoIrisAssets=_photoIrisAssets - In the implementation block
@property (nonatomic,retain) PLWallpaperImageViewController * imageViewController;              //@synthesize imageViewController=_imageViewController - In the implementation block
-(id)initWithSpec:(id)arg1 ;
-(void)updatePeripheralInterfaceAnimated:(BOOL)arg1 ;
-(BOOL)canNavigateToPhotoInteractively:(BOOL)arg1 ;
-(void)configureGridCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)newGridLayout;
-(void)updateLayoutMetrics;
-(BOOL)allowSlideshowButton;
-(BOOL)allowsPeeking;
-(BOOL)isPreheatingEnabled;
-(BOOL)shouldShowMenu;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(WallpaperMagicGridViewControllerSpec *)wallpaperSpec;
-(void)setImageViewController:(PLWallpaperImageViewController *)arg1 ;
-(PLWallpaperImageViewController *)imageViewController;
-(void)dismissDidSetWallpaper:(BOOL)arg1 ;
-(void)setWallpaperSpec:(WallpaperMagicGridViewControllerSpec *)arg1 ;
-(id)_irisAssetsPath;
-(id)_idForIrisAssetFilename:(id)arg1 ;
-(BOOL)_isMovieFile:(id)arg1 ;
-(void)setPhotoIrisAssets:(NSArray *)arg1 ;
-(NSArray *)photoIrisAssets;
-(void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2 ;
-(void)editImageViewControllerDidCancel:(id)arg1 ;
@end

