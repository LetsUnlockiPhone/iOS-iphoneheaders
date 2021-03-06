/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>
#import <HealthKit/NSSecureCoding.h>

@class NSMutableDictionary, HKCorrelationType, NSSet, NSUUID;

@interface HKCorrelation : HKSample <NSSecureCoding> {

	NSMutableDictionary* _objects;

}

@property (readonly) HKCorrelationType * correlationType; 
@property (copy,readonly) NSSet * objects; 
@property (getter=_UUID,readonly) NSUUID * UUID; 
+(char)_isConcreteObjectClass;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5 ;
+(char)_allowEmptyCorrelations;
+(id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 ;
+(char)supportsSecureCoding;
-(NSSet *)objects;
-(id)_UUID;
-(id)_validateConfiguration;
-(HKCorrelationType *)correlationType;
-(void)_addCorrelatedObject:(id)arg1 ;
-(id)objectsForType:(id)arg1 ;
-(void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1 ;
-(char)_correlatedObjectsMatchFilterDictionary:(id)arg1 ;
-(id)_allTypes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(void)_removeAllCorrelatedObjects;
-(char)_containsObjects;
-(void)_addCorrelatedObjects:(id)arg1 ;
@end

