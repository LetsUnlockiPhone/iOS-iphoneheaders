/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RoutePreloadCamera.h>

@interface SimpleRoutePreloadCamera : NSObject <RoutePreloadCamera> {

	unsigned _zoomLevel;

}
-(id)initWithZoomLevel:(unsigned)arg1 ;
-(void)implicateTilesForLocation:(id)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 ;
-(unsigned)zoomLevel;
@end
