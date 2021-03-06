/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class HKWorkout, WorkoutGoalDetail, NSMutableArray, WorkoutCell, WorkoutCaloriesCell, WorkoutRingSummaryCell, NSNumber;

@interface WorkoutTableViewController : UITableViewController {

	HKWorkout* _workout;
	WorkoutGoalDetail* _goalInfo;
	NSMutableArray* _rowTypesForTableRowIndex;
	WorkoutCell* _heartRateCell;
	WorkoutCaloriesCell* _caloriesCell;
	WorkoutRingSummaryCell* _workoutRingSummaryCell;
	NSNumber* _averageHeartRate;

}
+(void)initialize;
-(id)initWithWorkout:(id)arg1 goalInfo:(id)arg2 ;
-(void)bmrForDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateHeartRateCellWithHeartRate:(id)arg1 ;
-(void)averageHeartRateForWorkout:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)rowTypesForTableRowIndex;
-(id)_summaryCell;
-(id)_caloriesCell;
-(id)_heartRateCell;
-(id)_paceCell;
-(id)_distanceCell;
-(id)_timeCell;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

