/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSMutableString, NSURL;

@interface SWTotalsFileSerializer : NSObject <NSXMLParserDelegate> {

	unsigned long long _totalWorkouts;
	unsigned long long _totalCalories;
	unsigned long long _totalSeconds;
	unsigned long long _mostCalories;
	unsigned long long _total5K;
	unsigned long long _total10K;
	unsigned long long _totalMarathon;
	unsigned long long _totalHalfMarathon;
	float _farthestMile;
	float _totalDistanceMiles;
	unsigned long long _totalWeightWorkouts;
	double _weight;
	NSMutableString* _foundCharacters;
	NSURL* _url;

}

@property (readonly) unsigned long long totalWorkouts;                    //@synthesize totalWorkouts=_totalWorkouts - In the implementation block
@property (readonly) unsigned long long totalCalories;                    //@synthesize totalCalories=_totalCalories - In the implementation block
@property (readonly) unsigned long long totalSeconds;                     //@synthesize totalSeconds=_totalSeconds - In the implementation block
@property (readonly) unsigned long long mostCalories;                     //@synthesize mostCalories=_mostCalories - In the implementation block
@property (readonly) unsigned long long total5K;                          //@synthesize total5K=_total5K - In the implementation block
@property (readonly) unsigned long long total10K;                         //@synthesize total10K=_total10K - In the implementation block
@property (readonly) unsigned long long totalMarathon;                    //@synthesize totalMarathon=_totalMarathon - In the implementation block
@property (readonly) unsigned long long totalHalfMarathon;                //@synthesize totalHalfMarathon=_totalHalfMarathon - In the implementation block
@property (readonly) float farthestMile;                                  //@synthesize farthestMile=_farthestMile - In the implementation block
@property (readonly) float totalDistanceMiles;                            //@synthesize totalDistanceMiles=_totalDistanceMiles - In the implementation block
@property (readonly) unsigned long long totalWeightWorkouts;              //@synthesize totalWeightWorkouts=_totalWeightWorkouts - In the implementation block
@property (readonly) double weight;                                       //@synthesize weight=_weight - In the implementation block
+(void)initialize;
-(unsigned long long)totalWorkouts;
-(unsigned long long)total5K;
-(unsigned long long)total10K;
-(unsigned long long)totalHalfMarathon;
-(unsigned long long)totalMarathon;
-(float)totalDistanceMiles;
-(unsigned long long)totalSeconds;
-(unsigned long long)totalCalories;
-(unsigned long long)mostCalories;
-(float)farthestMile;
-(void)parseTotalWorkouts;
-(void)parseTotalCalories;
-(void)parseTotalSeconds;
-(void)parseMostCalories;
-(void)parseTotal5K;
-(void)parseTotal10K;
-(void)parseTotalMarathon;
-(void)parseTotalHalfMarathon;
-(void)parseFarthestMile;
-(void)parseTotalDistanceMiles;
-(void)parseTotalWeightWorkouts;
-(void)parseWeight;
-(unsigned long long)totalWeightWorkouts;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)url;
-(id)initWithContentsOfURL:(id)arg1 ;
-(double)weight;
@end

