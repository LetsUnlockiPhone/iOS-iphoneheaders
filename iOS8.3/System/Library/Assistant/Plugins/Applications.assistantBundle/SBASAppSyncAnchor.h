/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:00:31 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Applications/Applications-Structs.h>
#import <Applications/NSCopying.h>
#import <Applications/NSCoding.h>

@class NSString;

@interface SBASAppSyncAnchor : NSObject <NSCopying, NSCoding> {

	unsigned _mainIndex;
	unsigned _subIndex;
	long _stringOnce;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(id)anchorFromStringRepresentation:(id)arg1 ;
+(id)anchorFromStringRepresentation:(id)arg1 error:(id*)arg2 ;
+(char)isValidStringRepresentation:(id)arg1 withMainIndex:(unsigned*)arg2 subIndex:(unsigned*)arg3 ;
-(char)isOlderThanAnchor:(id)arg1 ;
-(id)_initWithMainIndex:(unsigned)arg1 subIndex:(unsigned)arg2 ;
-(char)isEqualToAnchor:(id)arg1 ;
-(id)primitiveAnchor;
-(id)anchorByIncrementingSubIndex;
-(char)isPrimitiveAnchor;
-(char)isNewerThanAnchor:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringRepresentation;
@end

