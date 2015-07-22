/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/URLEditingController.h>

@class WebRestrictionsController;

@interface NamedURLEditingController : URLEditingController {

	char _saved;
	WebRestrictionsController* _URLSaveController;

}

@property (assign,nonatomic) char saved;                                                 //@synthesize saved=_saved - In the implementation block
@property (nonatomic,retain) WebRestrictionsController * URLSaveController;              //@synthesize URLSaveController=_URLSaveController - In the implementation block
-(void)setControlledURL:(id)arg1 specifier:(id)arg2 ;
-(id)controlledURL:(id)arg1 ;
-(void)setControlledURLTitle:(id)arg1 specifier:(id)arg2 ;
-(id)controlledURLTitle:(id)arg1 ;
-(void)setURLSaveController:(WebRestrictionsController *)arg1 ;
-(void)saveURL;
-(WebRestrictionsController *)URLSaveController;
-(char)saved;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)specifiers;
-(void)willResignActive;
-(void)setSaved:(char)arg1 ;
@end
