/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/MobileTimer.siriUIBundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class NSMutableArray, AlarmDataSourcesManager, UICollectionView;

@interface MobileTimerAssistantAlarmSnippetController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NSMutableArray* _alarms;
	AlarmDataSourcesManager* _alarmDataManager;
	UICollectionView* _collectionView;

}
-(void)handleAlarmsChanged;
-(void)loadAlarmProperties;
-(double)_cellHeight;
-(void)refreshCell:(id)arg1 ;
-(void)handleNonrepeatingAlarmFiredOrSnoozed:(id)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)initWithAceObject:(id)arg1 ;
@end

