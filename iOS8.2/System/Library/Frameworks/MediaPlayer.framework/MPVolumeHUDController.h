/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface MPVolumeHUDController : NSObject {

	NSMutableArray* _contexts;
	NSMutableSet* _categories;

}

@property (nonatomic,readonly) id mainContext; 
+(id)sharedInstance;
-(void)registerView:(id)arg1 inContext:(id)arg2 ;
-(void)unregisterView:(id)arg1 inContext:(id)arg2 ;
-(id)pushContext;
-(void)_updateVisibility;
-(void)popContext;
-(id)init;
-(id)mainContext;
-(void)setNeedsUpdate;
@end

