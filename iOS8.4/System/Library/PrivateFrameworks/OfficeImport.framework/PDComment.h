/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSDate;

@interface PDComment : NSObject {

	CGPoint mPosition;
	NSString* mText;
	unsigned mAuthorId;
	NSDate* mDate;
	unsigned mIndex;

}
-(void)dealloc;
-(id)init;
-(id)date;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setDate:(id)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(void)setAuthorId:(unsigned)arg1 ;
-(unsigned)authorId;
@end

