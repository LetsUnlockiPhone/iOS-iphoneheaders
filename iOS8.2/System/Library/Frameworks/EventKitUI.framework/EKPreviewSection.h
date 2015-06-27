/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDate;

@interface EKPreviewSection : NSObject {

	NSArray* _events;
	NSDate* _date;

}

@property (nonatomic,readonly) NSArray * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSDate * date;                   //@synthesize date=_date - In the implementation block
+(id)sectionWithDate:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSArray *)events;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end
