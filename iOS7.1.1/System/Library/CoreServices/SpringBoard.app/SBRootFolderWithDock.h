/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:01 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBRootFolder.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class SBIconListModel;

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver> {

	SBIconListModel* _dock;

}
-(id)listContainingLeafIconWithIdentifier:(id)arg1 ;
-(void)removeEmptyList:(id)arg1 ;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(BOOL)supportsDock;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(unsigned)indexOfList:(id)arg1 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)_setDock:(id)arg1 ;
-(void)_notifyIndexChange:(int)arg1 identifiers:(id)arg2 withValidationBlock:(/*^block*/ id)arg3 ;
-(id)listContainingIcon:(id)arg1 ;
-(void)dealloc;
-(id)dock;
-(id)listAtIndex:(unsigned)arg1 ;
@end
