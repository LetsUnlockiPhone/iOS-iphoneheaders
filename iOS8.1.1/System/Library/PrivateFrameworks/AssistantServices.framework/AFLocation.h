/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFTranscriptionType.h>

@class NSURL, NSString, NSData;

@interface AFLocation : NSObject <AFTranscriptionType> {

	NSURL* _addressBookID;
	NSString* _addressLabel;
	NSString* _contactName;
	NSData* _geoResult;
	long long _resultType;

}

@property (nonatomic,copy) NSURL * addressBookID;                   //@synthesize addressBookID=_addressBookID - In the implementation block
@property (nonatomic,copy) NSString * addressLabel;                 //@synthesize addressLabel=_addressLabel - In the implementation block
@property (nonatomic,copy) NSString * contactName;                  //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,copy) NSData * geoResult;                      //@synthesize geoResult=_geoResult - In the implementation block
@property (assign,nonatomic) long long resultType;                  //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSURL *)addressBookID;
-(void)setAddressBookID:(NSURL *)arg1 ;
-(NSData *)geoResult;
-(void)setGeoResult:(NSData *)arg1 ;
-(NSString *)contactName;
-(void)setResultType:(long long)arg1 ;
-(NSString *)addressLabel;
-(void)setAddressLabel:(NSString *)arg1 ;
-(void)setContactName:(NSString *)arg1 ;
-(long long)resultType;
@end
