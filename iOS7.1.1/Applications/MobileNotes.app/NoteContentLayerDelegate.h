/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NoteContentLayerDelegate <NSObject>
@required
-(void)noteContentLayer:(id)arg1 setEditing:(BOOL)arg2 animated:(BOOL)arg3;
-(BOOL)noteContentLayerShouldBeginEditing:(id)arg1;
-(void)noteContentLayerContentDidChange:(id)arg1 updatedTitle:(BOOL)arg2;
-(void)noteContentLayer:(id)arg1 containsCJK:(BOOL)arg2;
@end
