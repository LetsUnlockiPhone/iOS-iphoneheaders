/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSourceListController.h>
#import <Podcasts/MTEmptyContainerViewController.h>

@class NSString;

@interface MTPodcastsSourceListController : MTSourceListController <MTEmptyContainerViewController> {

	NSString* _derivedPropertyCallbackToken;
	char hadDeletions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultsKey;
-(void)configureRowHeight;
-(void)getObjectId:(id*)arg1 andIndexPath:(id*)arg2 forItemWithUuid:(id)arg3 ;
-(id)firstValidIndexPath;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)explicitContentChanged:(id)arg1 ;
-(void)reloadCellForPodcastUuid:(id)arg1 ;
-(id)emptyContainerView;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)dealloc;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

