/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSpecifierGroupController.h>

@class PSListController, PSSpecifier, NSMutableArray, NSString;

@interface PSExpandableListGroupController : NSObject <PSSpecifierGroupController> {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	long long _collaspeAfterCount;
	NSMutableArray* _specifiers;
	BOOL _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(long long)_groupIndex;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(long long)arg3 ;
-(id)showAllSpecifier;
-(void)showAll;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
@end

