/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/TwoPartTopBarLabel.h>

@class NSTimeZone;

@interface TwoPartTimeLabel : TwoPartTopBarLabel {

	NSTimeZone* _destinationTimezone;
	double _remainingTime;

}

@property (assign,nonatomic) double remainingTime;                          //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,retain) NSTimeZone * destinationTimezone;              //@synthesize destinationTimezone=_destinationTimezone - In the implementation block
-(void)setDestinationTimezone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)destinationTimezone;
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(void)updateContent;
@end
