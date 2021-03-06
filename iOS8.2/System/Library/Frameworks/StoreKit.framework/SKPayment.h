/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <StoreKit/NSCopying.h>
#import <StoreKit/NSMutableCopying.h>

@class NSString, NSData, NSDictionary;

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * productIdentifier; 
@property (nonatomic,copy,readonly) NSData * requestData; 
@property (nonatomic,readonly) int quantity; 
@property (nonatomic,copy,readonly) NSString * applicationUsername; 
@property (nonatomic,copy,readonly) NSString * partnerIdentifier; 
@property (nonatomic,copy,readonly) NSString * partnerTransactionIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * requestParameters; 
+(id)paymentWithProduct:(id)arg1 ;
+(id)paymentWithProductIdentifier:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSString *)applicationUsername;
-(NSString *)partnerTransactionIdentifier;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSData *)requestData;
-(int)quantity;
-(NSString *)partnerIdentifier;
-(NSDictionary *)requestParameters;
@end

