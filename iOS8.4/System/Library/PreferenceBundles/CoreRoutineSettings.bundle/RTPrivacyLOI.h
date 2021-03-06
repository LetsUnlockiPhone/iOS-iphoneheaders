/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKCircle.h>
#import <CoreRoutineSettings/RTMapAndTableRowItem.h>

@class RTLocationOfInterest, NSArray, NSString;

@interface RTPrivacyLOI : MKCircle <RTMapAndTableRowItem> {

	long long state;
	RTLocationOfInterest* loi;
	NSArray* destinations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long state; 
@property (nonatomic,retain) RTLocationOfInterest * loi; 
@property (nonatomic,retain) NSArray * destinations; 
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(void)setLoi:(RTLocationOfInterest *)arg1 ;
-(RTLocationOfInterest *)loi;
-(void)setDestinations:(NSArray *)arg1 ;
-(NSString *)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)recentCompare:(id)arg1 ;
-(long long)frequencyCompare:(id)arg1 ;
-(NSArray *)destinations;
@end

