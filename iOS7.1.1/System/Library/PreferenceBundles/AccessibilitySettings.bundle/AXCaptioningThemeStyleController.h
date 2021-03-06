/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface AXCaptioningThemeStyleController : AXCaptionStyleChooserController <UITextFieldDelegate> {

	CFStringRef _previousActiveProfile;
	bool _shouldSaveProfile;
	CFStringRef profileId;
	CFStringRef previousProfileId;
	NSString* _originalName;

}

@property (nonatomic,retain) CFStringRef profileId; 
@property (assign,nonatomic) bool shouldSaveProfile;                     //@synthesize shouldSaveProfile=_shouldSaveProfile - In the implementation block
@property (nonatomic,retain) CFStringRef previousProfileId; 
@property (nonatomic,retain) NSString * originalName;                    //@synthesize originalName=_originalName - In the implementation block
-(void)setShouldSaveProfile:(bool)arg1 ;
-(void)setPreviousProfileId:(CFStringRef)arg1 ;
-(id)_nameForColor:(CGColorRef)arg1 colorType:(int)arg2 ;
-(void)_settingsChanged:(id)arg1 ;
-(id)windowTransparency:(id)arg1 ;
-(void)setOriginalName:(id)arg1 ;
-(id)backgroundColor:(id)arg1 ;
-(void)setProfileName:(id)arg1 specifier:(id)arg2 ;
-(id)textTransparency:(id)arg1 ;
-(id)backgroundTransparency:(id)arg1 ;
-(void)setCaptioningEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)originalName;
-(id)profileName:(id)arg1 ;
-(id)textColor:(id)arg1 ;
-(void)_savePressed:(id)arg1 ;
-(id)captioningEnabled:(id)arg1 ;
-(bool)shouldSaveProfile;
-(id)windowColor:(id)arg1 ;
-(id)_nameForTransparency:(CFNumberRef)arg1 transparencyType:(int)arg2 ;
-(CFStringRef)previousProfileId;
-(id)textEdgeStyle:(id)arg1 ;
-(id)textFont:(id)arg1 ;
-(id)captionSize:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setProfileId:(CFStringRef)arg1 ;
-(CFStringRef)profileId;
-(void)_updateTitle;
-(id)specifiers;
-(void)willBecomeActive;
@end

