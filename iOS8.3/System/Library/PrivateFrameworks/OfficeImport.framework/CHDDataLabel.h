/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, OADGraphicProperties;

@interface CHDDataLabel : NSObject {

	EDResources* mResources;
	unsigned mStringIndex;
	unsigned mContentFormatId;
	int mPosition;
	BOOL mShowLeaderLines;
	BOOL mShowCategoryName;
	BOOL mShowSeriesName;
	BOOL mShowPercent;
	BOOL mShowBubbleSize;
	BOOL mShowValue;
	BOOL mShowLegendKey;
	BOOL mIsPositionAffineTransform;
	double mRotation;
	OADGraphicProperties* mGraphicProperties;

}
+(id)dataLabelWithResources:(id)arg1 ;
-(void)dealloc;
-(id)string;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)setShowValue:(BOOL)arg1 ;
-(void)setString:(id)arg1 ;
-(id)graphicProperties;
-(unsigned)contentFormatId;
-(id)contentFormat;
-(BOOL)isShowValue;
-(void)setContentFormatId:(unsigned)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isShowLeaderLines;
-(void)setShowLeaderLines:(BOOL)arg1 ;
-(BOOL)isShowCategoryName;
-(void)setShowCategoryName:(BOOL)arg1 ;
-(BOOL)isShowSeriesName;
-(void)setShowSeriesName:(BOOL)arg1 ;
-(BOOL)isShowPercent;
-(void)setShowPercent:(BOOL)arg1 ;
-(BOOL)isShowBubbleSize;
-(void)setShowBubbleSize:(BOOL)arg1 ;
-(BOOL)isShowLegendKey;
-(void)setShowLegendKey:(BOOL)arg1 ;
-(void)setIsPositionAffineTransform:(BOOL)arg1 ;
-(BOOL)isPositionAffineTransform;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(unsigned)stringIndex;
-(void)setStringIndex:(unsigned)arg1 ;
@end
