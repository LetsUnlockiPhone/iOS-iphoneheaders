/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPreheatItem.h>

@class PLImageTable;

@interface _PLDataPreheatItem : PLPreheatItem {

	unsigned long long _thumbIndex;
	PLImageTable* _imageTable;

}
-(void)dealloc;
-(id)initWithThumbIndex:(unsigned long long)arg1 imageTable:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(CGSize)arg4 ;
-(void)startPreheatRequestWithCompletionHandler:(/*^block*/id)arg1 ;
@end
