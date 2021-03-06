/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:24:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class CDDevice, CDAttribute;

@interface ABLEMockCDAttributeWithDevice : NSObject <ABLEMockCDAttributeProtocol> {

	CDDevice* _device;
	CDAttribute* _attribute;

}

@property (readonly) CDDevice * device;                    //@synthesize device=_device - In the implementation block
@property (readonly) CDAttribute * attribute;              //@synthesize attribute=_attribute - In the implementation block
-(id)initWithDevice:(id)arg1 attribute:(id)arg2 ;
-(CDAttribute *)attribute;
-(id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(int)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(CDDevice *)device;
@end

