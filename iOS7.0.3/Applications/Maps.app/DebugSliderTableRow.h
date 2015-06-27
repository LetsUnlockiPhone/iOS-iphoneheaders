/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/DebugTableRow.h>

@class NSString;

@interface DebugSliderTableRow : DebugTableRow {

	float _minimum;
	float _maximum;
	NSString* _subtitleFormatString;
	/*^block*/ id _set;
	/*^block*/ id _get;

}

@property (assign,nonatomic) float minimum;                              //@synthesize minimum=_minimum - In the implementation block
@property (assign,nonatomic) float maximum;                              //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,copy) id set;                                       //@synthesize set=_set - In the implementation block
@property (nonatomic,copy) id get;                                       //@synthesize get=_get - In the implementation block
@property (nonatomic,copy) NSString * subtitleFormatString;              //@synthesize subtitleFormatString=_subtitleFormatString - In the implementation block
-(void)setGet:(/*^block*/ id)arg1 ;
-(void)setSubtitleFormatString:(id)arg1 ;
-(void)configureCell:(id)arg1 ;
-(id)subtitleFormatString;
-(void)_sliderDidChangeValue:(id)arg1 ;
-(void)setSet:(/*^block*/ id)arg1 ;
-(float)minimum;
-(void)setMinimum:(float)arg1 ;
-(float)maximum;
-(void)setMaximum:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(/*^block*/ id)set;
-(id)reuseIdentifier;
-(int)cellStyle;
-(/*^block*/ id)get;
@end
