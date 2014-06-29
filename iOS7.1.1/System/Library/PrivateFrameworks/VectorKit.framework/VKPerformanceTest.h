/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKMapView, NSString;

@interface VKPerformanceTest : NSObject {

	VKMapView* _mapView;
	bool _running;
	int _loopCounter;
	int _resultCount;
	VKPerformanceTestResult_struct* _results;
	NSString* _outputHeader;

}
+(void)runWithMapView:(id)arg1 outputHeader:(id)arg2 ;
-(void)dealloc;
-(void)abort;
-(id)initWithMapView:(id)arg1 outputHeader:(id)arg2 ;
-(void)tick:(int)arg1 ;
-(void)runTest:(int)arg1 step:(int)arg2 ;
-(void)printResults;
-(void)loop;
@end
