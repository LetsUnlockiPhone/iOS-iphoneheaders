/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PDIterate : NSObject {

	int mType;
	BOOL mIsBackwards;
	BOOL mIsPercentage;
	double mValue;

}
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)value;
-(void)setValue:(double)arg1 ;
-(BOOL)isBackwards;
-(BOOL)isValuePercentage;
-(void)setIsBackwards:(BOOL)arg1 ;
-(void)setIsValuePercentage:(BOOL)arg1 ;
@end
