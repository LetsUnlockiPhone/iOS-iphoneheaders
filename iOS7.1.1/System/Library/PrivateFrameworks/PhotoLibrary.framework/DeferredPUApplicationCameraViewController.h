/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLApplicationCameraViewController.h>

@class CAMCameraRollSpec, DeferredFrameworkLoader;

@interface DeferredPUApplicationCameraViewController : PLApplicationCameraViewController {

	CAMCameraRollSpec* _spec;
	DeferredFrameworkLoader* _deferredLoader;

}

@property (nonatomic,retain) CAMCameraRollSpec * spec;                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,retain) DeferredFrameworkLoader * deferredLoader;              //@synthesize deferredLoader=_deferredLoader - In the implementation block
-(void)dealloc;
-(void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)definesPresentationContext;
-(id)navigationController:(id)arg1 animatorForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)navigationController:(id)arg1 interactionControllerUsingAnimator:(id)arg2 ;
-(bool)_navigationControllerShouldCrossFadeBottomBars:(id)arg1 ;
-(id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(bool)arg2 ;
-(id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3 ;
-(id)newAlbumNavigationControllerForAlbum:(NSObject*)arg1 ;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(NSObject*)arg2 ;
-(id)deferredLoader;
-(void)setDeferredLoader:(id)arg1 ;
-(id)spec;
-(void)setSpec:(id)arg1 ;
@end

