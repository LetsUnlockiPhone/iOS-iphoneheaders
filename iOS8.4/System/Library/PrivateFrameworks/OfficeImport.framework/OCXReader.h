/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDEncryptedReader.h>

@class OCPZipPackage;

@interface OCXReader : OCDEncryptedReader {

	OCPZipPackage* mZipPackage;

}

@property (nonatomic,retain) OCPZipPackage * zipPackage; 
-(void)dealloc;
-(BOOL)start;
-(BOOL)retainDecryptorWithErrorCode:(int*)arg1 ;
-(BOOL)isBinaryReader;
-(id)read;
-(OCPZipPackage *)zipPackage;
-(BOOL)verifyFileFormat;
-(void)setZipPackage:(OCPZipPackage *)arg1 ;
-(void)restartReaderToUseDecryptedDocument;
@end

