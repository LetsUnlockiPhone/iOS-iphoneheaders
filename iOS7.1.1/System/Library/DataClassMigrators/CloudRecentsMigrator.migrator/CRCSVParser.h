/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSInputStream, NSData, NSMutableData, NSError, NSString;

@interface CRCSVParser : NSObject {

	bool _shouldAbort;
	NSInputStream* _stream;
	NSData* _separatorData;
	NSMutableData* _data;
	unsigned long long _head;
	bool _consumedNullText;
	/*^block*/ id _parsedLineBlock;
	NSError* _parserError;
	NSString* _separator;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
-(id)_parseLineSeparator;
-(id)_parseDoubleQuote;
-(bool)parseableDataAvailable;
-(id)_parseEscapedText;
-(bool)_ensureBufferSize:(unsigned long long)arg1 ;
-(id)_parseField;
-(id)_parseTwoDoubleQuotes;
-(id)_consumeSingleCharacter:(BOOL)arg1 ;
-(void)setParsedLineBlock:(/*^block*/ id)arg1 ;
-(id)_parseSeparator;
-(id)_parseText;
-(unsigned long long)_availableBytes;
-(void)_fillBuffer:(unsigned long long)arg1 ;
-(id)_parseRecord;
-(void)setSeparator:(id)arg1 ;
-(bool)parse;
-(void)abortParsing;
-(id)parserError;
-(bool)shouldProceedParsing;
-(void)didFinishParsing;
-(void)didFindError:(id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)separator;
@end

