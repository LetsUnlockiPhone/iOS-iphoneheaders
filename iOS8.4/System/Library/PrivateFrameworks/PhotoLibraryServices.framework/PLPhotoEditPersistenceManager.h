/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PLPhotoEditPersistenceManager : NSObject

@property (nonatomic,readonly) NSString * latestFormatIdentifier; 
@property (nonatomic,readonly) NSString * latestFormatVersion; 
-(NSString *)latestFormatIdentifier;
-(NSString *)latestFormatVersion;
-(id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 exifOrientation:(int)arg4 ;
-(BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(long long)arg5 ;
-(BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 ;
-(id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 ;
-(id)_allConverterClasses;
-(Class)_latestExporterClass;
-(id)_allImporterClasses;
-(id)debugDescriptionForAdjustmentData:(id)arg1 ;
@end

