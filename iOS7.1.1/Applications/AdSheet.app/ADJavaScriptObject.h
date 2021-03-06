/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADJSODelegate;
@class ADSAdImpressionController, NSMutableArray, NSMutableDictionary, NSLock, JSValue;

@interface ADJavaScriptObject : NSObject {

	<ADJSODelegate>* _delegate;
	ADSAdImpressionController* _impressionController;
	NSMutableArray* _downloads;
	NSMutableDictionary* _retainedJSValues;
	NSLock* _retainedJSValuesLock;

}

@property (assign,nonatomic,__weak) <ADJSODelegate> * delegate; 
@property (nonatomic,readonly) ADSAdImpressionController * impressionController; 
@property (nonatomic,retain) NSMutableArray * downloads;                                      //@synthesize downloads=_downloads - In the implementation block
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,readonly) NSMutableDictionary * retainedJSValues;                        //@synthesize retainedJSValues=_retainedJSValues - In the implementation block
@property (nonatomic,readonly) NSLock * retainedJSValuesLock;                                 //@synthesize retainedJSValuesLock=_retainedJSValuesLock - In the implementation block
+(void)initializeInContext:(id)arg1 ;
+(void)setJSException:(id)arg1 ;
+(void)initialize;
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(id)impressionController;
-(void)adWillDismiss;
-(void)setJSValue:(id)arg1 forKey:(id)arg2 ;
-(id)JSValueForKey:(id)arg1 ;
-(void)fireTestProbe:(id)arg1 withOptions:(id)arg2 ;
-(id)retainedJSValuesLock;
-(id)retainedJSValues;
-(void)setDownloads:(id)arg1 ;
-(void)setListener:(id)arg1 ;
-(id)downloads;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)listener;
@end

