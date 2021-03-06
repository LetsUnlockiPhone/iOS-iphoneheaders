/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebScriptObject, NSLock, NSString;

@interface SUScriptEventListener : NSObject {

	WebScriptObject* _callback;
	NSLock* _lock;
	NSString* _name;
	BOOL _useCapture;

}

@property (retain) WebScriptObject * callback;              //@synthesize callback=_callback - In the implementation block
@property (copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign) BOOL shouldUseCapture;                   //@synthesize useCapture=_useCapture - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(WebScriptObject *)callback;
-(void)setCallback:(WebScriptObject *)arg1 ;
-(void)setShouldUseCapture:(BOOL)arg1 ;
-(BOOL)shouldUseCapture;
@end

