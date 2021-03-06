/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class NSDictionary, NSMutableArray, NSString, NSArray, NSMutableDictionary;

@interface BuddyLanguageController : BuddyTableViewController <BuddyController> {

	NSDictionary* _languageStrings;
	float _scrollOffset;
	id<BuddyControllerDelegate> _delegate;
	NSMutableArray* _fakeViews;
	NSString* _selectedLanguage;
	char _startedInFakeMode;
	char _builtTable;
	char _willAppearCalled;
	NSArray* _languageCodes;
	NSMutableDictionary* _cellCache;

}

@property (nonatomic,copy) NSString * selectedLanguage;                    //@synthesize selectedLanguage=_selectedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * languageCodes;                      //@synthesize languageCodes=_languageCodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cellCache;              //@synthesize cellCache=_cellCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)languageScreenshotCachePath:(char)arg1 tag:(id)arg2 ;
-(void)startOver;
-(id)initInFakeMode:(char)arg1 ;
-(void)buildTable;
-(char)shouldAllowStartOver;
-(NSString *)selectedLanguage;
-(void)takeScreenshots;
-(void)switchToRealMode;
-(void)setSelectedLanguage:(NSString *)arg1 ;
-(void)setCellCache:(NSMutableDictionary *)arg1 ;
-(void)setLanguageCodes:(NSArray *)arg1 ;
-(void)readyDisplay;
-(char)restoreScreenshot:(id)arg1 ;
-(void)generateLanguageCellCache;
-(char)takeScreenshot:(id)arg1 tag:(id)arg2 ;
-(NSArray *)languageCodes;
-(NSMutableDictionary *)cellCache;
-(id)cellForLanguageCode:(id)arg1 ;
-(void)selectLanguage:(id)arg1 ;
-(float)scrollOffset;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)reset;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
@end

