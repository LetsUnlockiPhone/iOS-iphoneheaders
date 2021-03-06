/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TSUNumberFormatting <TSUDataFormat,NSObject>
@required
-(double)scaleFactor;
-(unsigned short)base;
-(id)formatString;
-(id)formatName;
-(void)setFormatName:(id)arg1;
-(unsigned short)decimalPlaces;
-(id)currencyCode;
-(BOOL)showThousandsSeparator;
-(BOOL)usesAccountingStyle;
-(int)negativeStyle;
-(int)fractionAccuracy;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)isCustom;
-(id)numberFormatBySettingValueType:(int)arg1;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1;
-(id)numberFormatByIncrementingDecimalPlaces:(short)arg1;
-(id)numberFormatBySettingCurrencyCode:(id)arg1;
-(id)numberFormatBySettingSuffixString:(id)arg1;
-(id)numberFormatBySettingNegativeStyle:(int)arg1;
-(id)numberFormatBySettingShowThousandsSeparator:(BOOL)arg1;
-(id)numberFormatBySettingFractionAccuracy:(int)arg1;
-(id)numberFormatBySettingUseAccountingStyle:(BOOL)arg1;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(BOOL)isTextFormat;
-(BOOL)canFormatText;
-(BOOL)usesTextFormatForValue:(double)arg1;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(BOOL)baseUseMinusSign;
-(BOOL)usesTabs;
-(BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1;
-(id)stringFromDouble:(double)arg1;
-(id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2;
-(id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3;
-(id)chartLabelStringFromDouble:(double)arg1;
-(id)stringFromString:(id)arg1;
-(BOOL)isEquivalent:(id)arg1;
-(int)valueType;
@end

