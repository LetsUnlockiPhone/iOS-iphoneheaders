/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIReedSolomon : NSObject {

	int _expTable[256];
	int _logTable[256];
	int _cachedGeneratorNum;
	int _memoryCapacity;
	SCD_Struct_CI33* _cachedGenerators;

}
-(SCD_Struct_CI33*)divide:(SCD_Struct_CI33*)arg1 by:(SCD_Struct_CI33*)arg2 ;
-(id)initReedSolomon;
-(BOOL)encode:(int*)arg1 length:(int)arg2 bytes:(int)arg3 ;
-(BOOL)fillPoly:(SCD_Struct_CI33*)arg1 coefficients:(int*)arg2 length:(int)arg3 ;
-(void)clearPoly:(SCD_Struct_CI33*)arg1 ;
-(BOOL)isZero:(SCD_Struct_CI33*)arg1 ;
-(SCD_Struct_CI33*)copyPoly:(SCD_Struct_CI33*)arg1 ;
-(int)addOrSubtract:(int)arg1 with:(int)arg2 ;
-(int)multiply:(int)arg1 with:(int)arg2 ;
-(int)Degree:(SCD_Struct_CI33*)arg1 ;
-(int)polyCoefficient:(SCD_Struct_CI33*)arg1 degree:(int)arg2 ;
-(int)inverse:(int)arg1 ;
-(SCD_Struct_CI33*)multiplyByMonomial:(SCD_Struct_CI33*)arg1 degree:(int)arg2 coefficient:(int)arg3 ;
-(SCD_Struct_CI33*)addOrSubtractPoly:(SCD_Struct_CI33*)arg1 with:(SCD_Struct_CI33*)arg2 ;
-(int)Exp:(int)arg1 ;
-(SCD_Struct_CI33*)multiplyPoly:(SCD_Struct_CI33*)arg1 with:(SCD_Struct_CI33*)arg2 ;
-(SCD_Struct_CI33*)buildGenerator:(int)arg1 ;
-(SCD_Struct_CI33*)createMonomial:(int)arg1 coefficient:(int)arg2 ;
-(int*)coefficients:(SCD_Struct_CI33*)arg1 ;
-(void)dealloc;
@end

