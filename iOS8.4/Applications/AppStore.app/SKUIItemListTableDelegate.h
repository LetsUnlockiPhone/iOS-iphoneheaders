/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SKUIItemListTableDelegate <NSObject>
@optional
-(char)itemList:(id)arg1 canRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
-(void)itemList:(id)arg1 willDisplayCellForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemListWillBeginDragging:(id)arg1;
-(id)itemList:(id)arg1 didConfirmItemOfferForItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
-(void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
-(id)itemList:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;

@end

