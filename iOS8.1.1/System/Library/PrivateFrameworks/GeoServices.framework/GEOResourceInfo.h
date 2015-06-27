/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GEOResourceInfo : NSObject {

	NSString* _name;
	long long _type;
	NSString* _checksum;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * checksum;              //@synthesize checksum=_checksum - In the implementation block
-(void)dealloc;
-(long long)type;
-(NSString *)name;
-(id)initWithName:(id)arg1 type:(long long)arg2 checksum:(id)arg3 ;
-(NSString *)checksum;
@end
