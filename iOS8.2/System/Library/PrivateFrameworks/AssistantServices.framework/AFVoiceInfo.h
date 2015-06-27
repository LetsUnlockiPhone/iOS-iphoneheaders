/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/NSSecureCoding.h>
#import <AssistantServices/NSCopying.h>

@class NSString;

@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying> {

	char _isCustom;
	NSString* _languageCode;
	int _gender;

}

@property (nonatomic,readonly) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) int gender;                             //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) char isCustom;                          //@synthesize isCustom=_isCustom - In the implementation block
+(char)supportsSecureCoding;
-(char)isCustom;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(id)initWithLanguageCode:(id)arg1 gender:(int)arg2 isCustom:(char)arg3 ;
-(void)setIsCustom:(char)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
@end
