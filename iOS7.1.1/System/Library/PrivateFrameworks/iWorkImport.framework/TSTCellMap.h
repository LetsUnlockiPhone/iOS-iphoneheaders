/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSTCellMap <NSObject>
@property (assign,nonatomic) bool appliesToHidden; 
@required
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS267)arg2;
-(bool)containsCellID:(SCD_Struct_TS267)arg1;
-(SCD_Struct_TS267*)cellIDAtIndex:(unsigned long long)arg1;
-(void)popLastCell;
-(SCD_Struct_TS267*)cellIDs;
-(bool)mayModifyFormulasInCells;
-(bool)mayModifyValuesReferencedByFormulas;
-(void)setMayModifyValuesReferencedByFormulas:(bool)arg1;
-(bool)appliesToHidden;
-(void)setAppliesToHidden:(bool)arg1;
-(unsigned long long)count;
-(id)cellAtIndex:(unsigned long long)arg1;
@end

