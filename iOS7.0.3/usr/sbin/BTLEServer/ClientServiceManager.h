/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BTLEServer/BTLEServer-Structs.h>
#import <AXHearingAidSupport/CBPeripheralDelegate.h>
#import <BTLEServer/ClientServiceDelegate.h>

@class CBPeripheral, NSMapTable, NSMutableSet;

@interface ClientServiceManager : NSObject <CBPeripheralDelegate, ClientServiceDelegate> {

	CBPeripheral* _peripheral;
	NSMapTable* _clientServiceMap;
	unsigned _startPriority;
	NSMutableSet* _startingClientServices;

}
-(BOOL)getDesiredConnectionParameters:(SCD_Struct_Cl0*)arg1 ;
-(void)startClientServices;
-(void)analyzeError:(id)arg1 ;
-(void)clientServiceDidStart:(id)arg1 ;
-(id)clientServiceForUUID:(id)arg1 ;
-(void)dealloc;
-(void)peripheral:(id)arg1 didModifyServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverServices:(id)arg2 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3 ;
-(void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3 ;
-(id)initWithPeripheral:(id)arg1 ;
@end

