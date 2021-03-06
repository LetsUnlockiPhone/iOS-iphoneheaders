/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDPageSetup : NSObject {

	int mOrientation;
	int mPageOrder;
	BOOL mCustomFirstPageNumber;
	unsigned long mFirstPageNumber;
	unsigned long mFitToHeight;
	unsigned long mFitToWidth;
	unsigned long mScale;
	float mLeftMargin;
	float mRightMargin;
	float mTopMargin;
	float mBottomMargin;
	float mHeaderMargin;
	float mFooterMargin;

}
+(id)pageSetup;
-(float)topMargin;
-(void)setTopMargin:(float)arg1 ;
-(id)init;
-(int)orientation;
-(unsigned long)scale;
-(void)setScale:(unsigned long)arg1 ;
-(void)setRightMargin:(float)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(float)rightMargin;
-(float)leftMargin;
-(float)headerMargin;
-(float)bottomMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(void)setFirstPageNumber:(unsigned long)arg1 ;
-(void)setCustomFirstPageNumber:(BOOL)arg1 ;
-(void)setFitToHeight:(unsigned long)arg1 ;
-(void)setFitToWidth:(unsigned long)arg1 ;
-(void)setHeaderMargin:(float)arg1 ;
-(void)setFooterMargin:(float)arg1 ;
-(BOOL)customFirstPageNumber;
-(unsigned long)firstPageNumber;
-(unsigned long)fitToHeight;
-(unsigned long)fitToWidth;
-(float)footerMargin;
@end

