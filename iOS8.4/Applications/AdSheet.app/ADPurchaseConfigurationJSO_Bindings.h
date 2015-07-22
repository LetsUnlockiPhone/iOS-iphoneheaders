/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class JSValue, NSString, NSArray;


@protocol ADPurchaseConfigurationJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * shippingDelegate; 
@property (nonatomic,retain) JSValue * merchantResponseHandler; 
@property (nonatomic,copy) NSString * currencyCode; 
@property (assign,nonatomic) int requiredShippingAddressFields; 
@property (assign,nonatomic) int requiredBillingAddressFields; 
@property (nonatomic,copy) NSString * purchaseData; 
@property (assign,nonatomic) NSArray * lineItems; 
@property (assign,nonatomic) NSArray * shippingMethods; 
@optional
-(void)requestShippingDetails:(id)arg1 completionHandler:(id)arg2 __JS_EXPORT_AS__requestShippingDetails:(id)arg3;

@required
-(NSString *)purchaseData;
-(JSValue *)shippingDelegate;
-(JSValue *)merchantResponseHandler;
-(void)cancelPurchaseRequest;
-(void)requestShippingDetails:(id)arg1 completionHandler:(id)arg2;
-(void)setShippingDelegate:(id)arg1;
-(void)setMerchantResponseHandler:(id)arg1;
-(void)setPurchaseData:(id)arg1;
-(NSArray *)lineItems;
-(void)setLineItems:(id)arg1;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(void)setRequiredShippingAddressFields:(int)arg1;
-(void)setRequiredBillingAddressFields:(int)arg1;
-(void)setShippingMethods:(id)arg1;
-(int)requiredShippingAddressFields;
-(int)requiredBillingAddressFields;
-(NSArray *)shippingMethods;

@end
