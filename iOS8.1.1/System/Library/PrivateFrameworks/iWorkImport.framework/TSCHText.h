/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUCache;

@interface TSCHText : NSObject {

	TSUCache* mTSWPTextCache;
	TSUCache* mTSWPColumnCache;
	TSUCache* mNumberWidthCache;
	TSUCache* mDigitWidthFonts;

}
+(id)sharedText;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 wrapWidth:(double)arg4 atPosition:(CGPoint)arg5 viewScale:(double)arg6 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(CGRect*)arg4 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 outErasableFrame:(CGRect*)arg3 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 atPosition:(CGPoint)arg4 range:(NSRange)arg5 viewScale:(double)arg6 ;
-(CGRect)frameForRange:(NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 outErasableFrame:(CGRect*)arg4 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 wrapWidth:(double)arg4 atPosition:(CGPoint)arg5 range:(NSRange)arg6 viewScale:(double)arg7 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 viewScale:(double)arg4 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 atPosition:(CGPoint)arg4 viewScale:(double)arg5 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 ;
-(CGRect)frameForRange:(NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 wrapWidth:(double)arg4 outErasableFrame:(CGRect*)arg5 ;
-(CTFontRef)retainedCTFontForParagraphStyle:(id)arg1 ;
-(id)p_wpTextForParagraphStyle:(id)arg1 textBlack:(BOOL)arg2 ;
-(id)p_newWPColumnForText:(id)arg1 wpTextObject:(id)arg2 wrapWidth:(double)arg3 ;
-(id)p_wpColumnForText:(id)arg1 paragraphStyle:(id)arg2 textBlack:(BOOL)arg3 wrapWidth:(double)arg4 ;
-(id)p_wpStorageForAttributedString:(CFAttributedStringRef)arg1 paragraphStyle:(id)arg2 ;
-(CGSize)measureText:(id)arg1 paragraphStyle:(id)arg2 wrapWidth:(double)arg3 outErasableFrame:(CGRect*)arg4 checkNumberTemplates:(BOOL)arg5 ;
-(BOOL)p_styleSupportsEqualDigits:(id)arg1 ;
-(CGSize)p_wpWidthForNumberTemplate:(id)arg1 paragraphStyle:(id)arg2 ;
-(CGSize)measureAttributedString:(CFAttributedStringRef)arg1 paragraphStyle:(id)arg2 outErasableFrame:(CGRect*)arg3 ;
-(CGRect)frameForRange:(NSRange)arg1 inText:(id)arg2 paragraphStyle:(id)arg3 ;
-(void)drawAttributedString:(CFAttributedStringRef)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 atPosition:(CGPoint)arg4 range:(NSRange)arg5 viewScale:(double)arg6 ;
-(void)drawText:(id)arg1 paragraphStyle:(id)arg2 intoContext:(CGContextRef)arg3 range:(NSRange)arg4 viewScale:(double)arg5 ;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(void)clearCaches;
@end

