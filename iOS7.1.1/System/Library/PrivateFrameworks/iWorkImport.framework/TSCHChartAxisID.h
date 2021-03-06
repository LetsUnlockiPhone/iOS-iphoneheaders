/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCHChartAxisID : NSObject <NSCopying> {

	int mType;
	unsigned long long mOrdinal;

}

@property (readonly) int type; 
@property (readonly) unsigned long long ordinal; 
+(id)axisIDWithType:(int)arg1 ordinal:(unsigned long long)arg2 ;
-(void)saveToArchive:(ChartAxisIDArchive*)arg1 ;
-(bool)intersectsAxisID:(id)arg1 ;
-(id)debuggingName;
-(id)initWithType:(int)arg1 ordinal:(unsigned long long)arg2 ;
-(unsigned long long)ordinal;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithArchive:(const ChartAxisIDArchive*)arg1 ;
@end

