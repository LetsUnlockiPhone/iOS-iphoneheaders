/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlay.h>

@class GEOMapRegion;

@interface VKMultiPointOverlay : NSObject <VKOverlay> {

	Vec2Imp<float>* _points;
	unsigned _pointCount;
	SCD_Struct_VK47 _bounds;
	GEOMapRegion* _boundingMapRegion;

}

@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK61 coordinate; 
@property (nonatomic,readonly) unsigned pointCount;                           //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) Vec2Imp<float>* points;                        //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK47 bounds;                        //@synthesize bounds=_bounds - In the implementation block
-(void)dealloc;
-(SCD_Struct_VK47)bounds;
-(id).cxx_construct;
-(unsigned)pointCount;
-(Vec2Imp<float>*)points;
-(SCD_Struct_VK61)coordinate;
-(id)boundingMapRegion;
-(void)_setCoordinates:(SCD_Struct_VK61*)arg1 count:(unsigned)arg2 ;
@end

