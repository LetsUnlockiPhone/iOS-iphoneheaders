/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:22:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WBSCreditCardData : NSObject {

	NSString* _cardName;
	NSString* _cardholderName;
	NSString* _cardNumber;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * cardName;                           //@synthesize cardName=_cardName - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                     //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                         //@synthesize cardNumber=_cardNumber - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)description;
-(void)setCardholderName:(NSString *)arg1 ;
-(NSString *)cardholderName;
-(NSDate *)expirationDate;
-(id)initWithCameraReaderOutput:(id)arg1 ;
-(NSString *)cardNumber;
-(id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1 ;
-(id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 ;
-(id)initWithKeychainRepresentation:(id)arg1 ;
-(id)keychainRepresentation;
-(NSString *)cardName;
-(void)setCardName:(NSString *)arg1 ;
-(void)setCardNumber:(NSString *)arg1 ;
@end

