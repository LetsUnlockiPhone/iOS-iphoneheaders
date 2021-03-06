/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKFeatureAccessibilityElement, VKPointFeatureAccessibilityElement;

@interface VKMapViewTourStatus : NSObject {

	BOOL _isStationary;
	VKFeatureAccessibilityElement* _currentLocation;
	VKFeatureAccessibilityElement* _lastCurrentLocation;
	VKFeatureAccessibilityElement* _futureLocation;
	VKFeatureAccessibilityElement* _lastFutureLocation;
	VKPointFeatureAccessibilityElement* _futurePOI;
	VKPointFeatureAccessibilityElement* _lastFuturePOI;
	double _lastFutureDistance;
	double _lastPOIDistance;
	unsigned long long _futurePOISide;
	unsigned long long _lastFuturePOISide;
	CGPoint _currentPoint;
	CGPoint _futurePoint;

}

@property (nonatomic,retain) VKFeatureAccessibilityElement * currentLocation;                  //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastCurrentLocation;              //@synthesize lastCurrentLocation=_lastCurrentLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * futureLocation;                   //@synthesize futureLocation=_futureLocation - In the implementation block
@property (nonatomic,retain) VKFeatureAccessibilityElement * lastFutureLocation;               //@synthesize lastFutureLocation=_lastFutureLocation - In the implementation block
@property (nonatomic,retain) VKPointFeatureAccessibilityElement * futurePOI;                   //@synthesize futurePOI=_futurePOI - In the implementation block
@property (nonatomic,retain) VKPointFeatureAccessibilityElement * lastFuturePOI;               //@synthesize lastFuturePOI=_lastFuturePOI - In the implementation block
@property (assign,nonatomic) CGPoint currentPoint;                                             //@synthesize currentPoint=_currentPoint - In the implementation block
@property (assign,nonatomic) CGPoint futurePoint;                                              //@synthesize futurePoint=_futurePoint - In the implementation block
@property (assign,nonatomic) double lastFutureDistance;                                        //@synthesize lastFutureDistance=_lastFutureDistance - In the implementation block
@property (assign,nonatomic) double lastPOIDistance;                                           //@synthesize lastPOIDistance=_lastPOIDistance - In the implementation block
@property (assign,nonatomic) unsigned long long futurePOISide;                                 //@synthesize futurePOISide=_futurePOISide - In the implementation block
@property (assign,nonatomic) unsigned long long lastFuturePOISide;                             //@synthesize lastFuturePOISide=_lastFuturePOISide - In the implementation block
@property (assign,nonatomic) BOOL isStationary;                                                //@synthesize isStationary=_isStationary - In the implementation block
-(id)longTourStatusAnnouncement;
-(VKFeatureAccessibilityElement *)lastCurrentLocation;
-(id)shortTourStatusAnnouncement;
-(void)setLastFutureDistance:(double)arg1 ;
-(void)setFutureLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(double)lastFutureDistance;
-(void)setLastFuturePOISide:(unsigned long long)arg1 ;
-(void)setLastFuturePOI:(VKPointFeatureAccessibilityElement *)arg1 ;
-(void)setFuturePOISide:(unsigned long long)arg1 ;
-(unsigned long long)lastFuturePOISide;
-(void)setIsStationary:(BOOL)arg1 ;
-(void)setLastCurrentLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)setLastFutureLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)setLastPOIDistance:(double)arg1 ;
-(void)setFuturePoint:(CGPoint)arg1 ;
-(unsigned long long)futurePOISide;
-(void)setFuturePOI:(VKPointFeatureAccessibilityElement *)arg1 ;
-(id)_stringForSide:(unsigned long long)arg1 ;
-(double)lastPOIDistance;
-(CGPoint)futurePoint;
-(void)setCurrentPoint:(CGPoint)arg1 ;
-(id)_tourStatusAnnouncementWithLength:(unsigned long long)arg1 ;
-(VKFeatureAccessibilityElement *)lastFutureLocation;
-(VKFeatureAccessibilityElement *)futureLocation;
-(VKPointFeatureAccessibilityElement *)futurePOI;
-(VKPointFeatureAccessibilityElement *)lastFuturePOI;
-(void)updateTourStatusWithCurrentLocation:(id)arg1 currentPoint:(CGPoint)arg2 futureLocation:(id)arg3 futurePoint:(CGPoint)arg4 tourPOI:(id)arg5 tourPOISide:(unsigned long long)arg6 isStationary:(BOOL)arg7 ;
-(VKFeatureAccessibilityElement *)currentLocation;
-(void)setCurrentLocation:(VKFeatureAccessibilityElement *)arg1 ;
-(void)dealloc;
-(CGPoint)currentPoint;
-(BOOL)isStationary;
@end

