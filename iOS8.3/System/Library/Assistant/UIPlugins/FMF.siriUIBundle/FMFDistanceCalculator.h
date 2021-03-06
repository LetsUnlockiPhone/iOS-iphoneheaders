/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:03:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLocale;

@interface FMFDistanceCalculator : NSObject {

	NSLocale* locale;

}

@property (nonatomic,readonly) int measurementSystem; 
@property (nonatomic,retain) NSLocale * locale; 
+(id)sharedInstance;
+(id)bundle;
-(double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(int)measurementSystem;
-(id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2 ;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned)arg2 ;
@end

