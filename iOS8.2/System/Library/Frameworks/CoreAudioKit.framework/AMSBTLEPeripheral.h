/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBPeripheral, NSString, CBCentralManager;

@interface AMSBTLEPeripheral : NSObject {

	CBPeripheral* peripheral;
	NSString* uuid;
	NSString* name;
	CBCentralManager* centralManager;
	double lastSeen;
	char inputAvailable;
	char outputAvailable;
	char online;
	char shouldDisconnect;
	char available;
	char _changingState;

}

@property (readonly) CBPeripheral * peripheral; 
@property (retain,readonly) NSString * uuid; 
@property (retain) NSString * name; 
@property (assign) double lastSeen; 
@property (assign) char inputAvailable; 
@property (assign) char outputAvailable; 
@property (getter=isOnline) char online; 
@property (getter=isChangingState) char changingState;              //@synthesize changingState=_changingState - In the implementation block
@property (getter=isAvailable) char available; 
-(void)setChangingState:(char)arg1 ;
-(id)initWithID:(id)arg1 name:(id)arg2 manager:(id)arg3 ;
-(void)setInputAvailable:(char)arg1 ;
-(void)setOutputAvailable:(char)arg1 ;
-(char)updateAvailableStateChanged;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)connect;
-(char)disconnect;
-(NSString *)uuid;
-(char)isChangingState;
-(void)setLastSeen:(double)arg1 ;
-(double)lastSeen;
-(CBPeripheral *)peripheral;
-(char)inputAvailable;
-(char)outputAvailable;
-(char)isAvailable;
-(void)setAvailable:(char)arg1 ;
-(char)hidden;
-(void)setOnline:(char)arg1 ;
-(char)isOnline;
@end

