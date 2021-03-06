/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <Foundation/NSValue.h>

@interface CMTimeAsValue : NSValue {

	SCD_Struct_CM4 _time;

}
+(id)valueWithCMTime:(SCD_Struct_CM4)arg1 ;
-(unsigned short)unsignedShortValue;
-(char)boolValue;
-(id)description;
-(double)doubleValue;
-(int)integerValue;
-(void)getValue:(void*)arg1 ;
-(float)floatValue;
-(unsigned)unsignedIntegerValue;
-(long long)longLongValue;
-(unsigned)unsignedIntValue;
-(const char*)objCType;
-(unsigned long long)unsignedLongLongValue;
-(unsigned long)unsignedLongValue;
-(long)longValue;
-(unsigned char)unsignedCharValue;
-(char)charValue;
-(short)shortValue;
-(int)intValue;
-(SCD_Struct_CM4)CMTimeValue;
@end

