/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class CSLHexAppNode;


@protocol CSLUIHexIconView <NSObject>
@property (assign,setter=setJiggling:,nonatomic) BOOL isJiggling; 
@property (nonatomic,retain) CSLHexAppNode * node; 
@required
-(void)endDraggingToLayoutAttributes:(SCD_Struct_CS1)arg1;
-(void)dragToPoint:(CGPoint)arg1;
-(void)setJiggling:(BOOL)arg1;
-(BOOL)isJiggling;
-(void)beginDraggingAtPoint:(CGPoint)arg1;
-(CSLHexAppNode *)node;
-(void)applyLayoutAttributes:(SCD_Struct_CS1)arg1;
-(void)setNode:(id)arg1;

@end

