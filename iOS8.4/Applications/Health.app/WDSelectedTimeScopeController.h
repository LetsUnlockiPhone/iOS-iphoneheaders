/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable;

@interface WDSelectedTimeScopeController : NSObject {

	NSHashTable* _observers;
	int _selectedTimeScope;

}

@property (assign,nonatomic) int selectedTimeScope;              //@synthesize selectedTimeScope=_selectedTimeScope - In the implementation block
-(int)selectedTimeScope;
-(void)setSelectedTimeScope:(int)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers;
@end

