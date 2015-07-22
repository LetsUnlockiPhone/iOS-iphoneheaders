/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUICSiriLanguageDelegate;
@class NSString;

@interface SUICSiriLanguage : NSObject {

	BOOL _setupAssistantNeedsToRunChecked;
	BOOL _setupAssistantNeedsToRunAvailable;
	NSString* _spokenLanguageCode;
	id<SUICSiriLanguageDelegate> _delegate;

}

@property (nonatomic,copy) NSString * spokenLanguageCode;                                                                   //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (getter=_delegate,nonatomic,__weak,readonly) id<SUICSiriLanguageDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL setupAssistantNeedsToRunChecked;                                                          //@synthesize setupAssistantNeedsToRunChecked=_setupAssistantNeedsToRunChecked - In the implementation block
@property (assign,getter=_setupAssistantNeedsToRunAvailable,nonatomic) BOOL setupAssistantNeedsToRunAvailable;              //@synthesize setupAssistantNeedsToRunAvailable=_setupAssistantNeedsToRunAvailable - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_delegate;
-(id)_computeSpokenLanguageCode;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(NSString *)spokenLanguageCode;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_setupAssistantNeedsToRunAvailable;
-(BOOL)setupAssistantNeedsToRunChecked;
-(void)setSetupAssistantNeedsToRunChecked:(BOOL)arg1 ;
-(void)setSetupAssistantNeedsToRunAvailable:(BOOL)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
@end
