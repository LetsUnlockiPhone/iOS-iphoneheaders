/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDWorkbook, EDResources, NSMutableArray;

@interface EDProcessor : NSObject {

	EDWorkbook* mWorkbook;
	EDResources* mResources;
	NSMutableArray* mObjects;

}
-(void)dealloc;
-(BOOL)isObjectSupported:(id)arg1 ;
-(void)applyProcessorToObject:(id)arg1 sheet:(id)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)markObjectForPostProcessing:(id)arg1 ;
-(void)applyProcessorWithSheet:(id)arg1 ;
@end

