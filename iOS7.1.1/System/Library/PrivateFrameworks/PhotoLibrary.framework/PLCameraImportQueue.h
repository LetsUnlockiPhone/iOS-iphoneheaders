/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLCameraImportQueue : NSObject {

	NSMutableArray* _items;
	unsigned long long _index;

}
-(void)_removeItem:(id)arg1 ;
-(bool)isCompleted;
-(void)dealloc;
-(id)description;
-(id)items;
-(void)setItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)currentItem;
-(id)itemsNotCompleted;
-(id)completedItems;
-(void)didCompleteItem:(id)arg1 ;
@end

