/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) long time; 
@property (nonatomic,retain) NSDate * simulatedDate; 
+(id)defaultDebugContext;
-(void)dealloc;
-(id)init;
-(id)description;
-(long)time;
-(id)simulatedDate;
-(void)setValue:(id)arg1 forName:(id)arg2 ;
-(void)removeValueForName:(id)arg1 ;
-(void)setSimulatedDate:(id)arg1 ;
-(BOOL)isFlagSet:(id)arg1 ;
-(void)setFlag:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forName:(id)arg2 ;
-(BOOL)boolForName:(id)arg1 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(int)intForName:(id)arg1 ;
-(void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3 ;
-(id)performSelectorForName:(id)arg1 ;
-(id)performSelectorForName:(id)arg1 withObject:(id)arg2 ;
-(BOOL)eval:(id)arg1 ;
-(id)valueForName:(id)arg1 ;
@end

