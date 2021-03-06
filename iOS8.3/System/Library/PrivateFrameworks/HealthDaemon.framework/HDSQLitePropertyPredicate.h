/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:58:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDSQLitePredicate.h>
#import <HealthDaemon/NSCopying.h>

@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying> {

	NSString* _property;

}

@property (nonatomic,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCompatibleWithPredicate:(id)arg1 ;
-(NSString *)property;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
@end

