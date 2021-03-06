/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/NSCopying.h>
#import <MPUFoundation/NSMutableCopying.h>

@class MPMediaEntity, _MPUProtoBufUserActivityContainerItem;

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying> {

	MPMediaEntity* _selectedMediaEntity;
	MPMediaEntity* _visualReferenceMediaEntity;
	long long _containerItemType;

}

@property (nonatomic,readonly) long long containerItemType;                                                            //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * selectedMediaEntity;                                                    //@synthesize selectedMediaEntity=_selectedMediaEntity - In the implementation block
@property (nonatomic,readonly) MPMediaEntity * visualReferenceMediaEntity;                                             //@synthesize visualReferenceMediaEntity=_visualReferenceMediaEntity - In the implementation block
@property (nonatomic,readonly) _MPUProtoBufUserActivityContainerItem * protoBufUserActivityContainerItem; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithProtoBufUserActivityContainerItem:(id)arg1 ;
-(_MPUProtoBufUserActivityContainerItem *)protoBufUserActivityContainerItem;
-(long long)containerItemType;
-(id)initWithContainerItemType:(long long)arg1 ;
-(MPMediaEntity *)selectedMediaEntity;
-(MPMediaEntity *)visualReferenceMediaEntity;
@end

