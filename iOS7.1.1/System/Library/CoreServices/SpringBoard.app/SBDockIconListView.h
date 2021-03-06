/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRootIconListView.h>

@interface SBDockIconListView : SBRootIconListView
+(unsigned)iconRowsForInterfaceOrientation:(int)arg1 ;
+(unsigned)iconColumnsForInterfaceOrientation:(int)arg1 ;
+(float)defaultHeight;
-(id)initWithModel:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 ;
-(float)sideIconInset;
-(id)iconAtPoint:(CGPoint)arg1 index:(unsigned*)arg2 proposedOrder:(int*)arg3 grabbedIcon:(id)arg4 ;
-(unsigned)iconsInRowForSpacingCalculation;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)arg1 ;
-(float)_additionalSideInsetToCenterIcons;
-(unsigned)columnAtPoint:(CGPoint)arg1 ;
-(float)topIconInset;
-(unsigned)rowAtPoint:(CGPoint)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(int)iconLocation;
@end

