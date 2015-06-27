/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:05:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Notes.siriUIBundle/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NoteContext, NSMutableArray, UICollectionViewFlowLayout, UICollectionView, SiriUIContentCollectionViewCell, NSString;

@interface NotesAssistantSnippetController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NoteContext* _context;
	NSMutableArray* _notes;
	UICollectionViewFlowLayout* _flowLayout;
	UICollectionView* _collectionView;
	SiriUIContentCollectionViewCell* _viewCell;
	NSString* _viewCellReuseIdentifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAceObject:(id)arg1 error:(id*)arg2 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
