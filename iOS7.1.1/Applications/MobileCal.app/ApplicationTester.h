/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplicationTestingDelegate.h>

@class NSMutableDictionary, ApplicationTest, CalendarModel, NSString, UIWindow;

@interface ApplicationTester : NSObject <UIApplicationTestingDelegate> {

	NSMutableDictionary* _testNamesToTestClasses;
	ApplicationTest* _currentlyRunningTest;
	CalendarModel* _model;

}

@property (nonatomic,readonly) NSString * extendedLaunchTestName; 
@property (nonatomic,retain) UIWindow * window; 
+(BOOL)testingSessionStarted;
-(Class)_testClassForTestName:(id)arg1 ;
-(id)extendedLaunchTestName;
-(id)initWithModel:(id)arg1 ;
-(BOOL)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void).cxx_destruct;
@end
