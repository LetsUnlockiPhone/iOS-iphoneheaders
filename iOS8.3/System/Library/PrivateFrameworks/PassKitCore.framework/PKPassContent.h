/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKContent.h>
#import <PassKitCore/NSSecureCoding.h>

@class PKImage, NSString, NSArray;

@interface PKPassContent : PKContent <NSSecureCoding> {

	int _transitType;
	PKImage* _footerImage;
	NSString* _logoText;
	NSArray* _frontFieldBuckets;
	NSArray* _backFieldBuckets;

}

@property (assign,nonatomic) int transitType;                        //@synthesize transitType=_transitType - In the implementation block
@property (nonatomic,retain) PKImage * footerImage;                  //@synthesize footerImage=_footerImage - In the implementation block
@property (nonatomic,copy) NSString * logoText;                      //@synthesize logoText=_logoText - In the implementation block
@property (nonatomic,copy) NSArray * frontFieldBuckets;              //@synthesize frontFieldBuckets=_frontFieldBuckets - In the implementation block
@property (nonatomic,copy) NSArray * backFieldBuckets;               //@synthesize backFieldBuckets=_backFieldBuckets - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)flushFormattedFieldValues;
-(NSArray *)frontFieldBuckets;
-(NSArray *)backFieldBuckets;
-(PKImage *)footerImage;
-(NSString *)logoText;
-(int)transitType;
-(void)setFooterImage:(PKImage *)arg1 ;
-(void)setLogoText:(NSString *)arg1 ;
-(void)setTransitType:(int)arg1 ;
-(void)setFrontFieldBuckets:(NSArray *)arg1 ;
-(void)setBackFieldBuckets:(NSArray *)arg1 ;
@end

