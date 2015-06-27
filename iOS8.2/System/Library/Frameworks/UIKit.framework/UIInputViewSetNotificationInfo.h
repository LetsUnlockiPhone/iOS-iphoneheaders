/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDictionary;

@interface UIInputViewSetNotificationInfo : NSObject {

	char _changedAccessoryOnly;
	float _duration;
	unsigned _options;
	CGPoint _beginCenter;
	CGPoint _endCenter;
	CGRect _beginFrame;
	CGRect _endFrame;
	CGRect _bounds;

}

@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSDictionary * privateUserInfo; 
@property (assign,nonatomic) CGRect beginFrame;                             //@synthesize beginFrame=_beginFrame - In the implementation block
@property (assign,nonatomic) CGRect endFrame;                               //@synthesize endFrame=_endFrame - In the implementation block
@property (assign,nonatomic) float duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned options;                              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) char changedAccessoryOnly;                     //@synthesize changedAccessoryOnly=_changedAccessoryOnly - In the implementation block
@property (assign,nonatomic) CGPoint beginCenter;                           //@synthesize beginCenter=_beginCenter - In the implementation block
@property (assign,nonatomic) CGPoint endCenter;                             //@synthesize endCenter=_endCenter - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                 //@synthesize bounds=_bounds - In the implementation block
+(id)info;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(NSDictionary *)userInfo;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(CGRect)beginFrame;
-(void)setBeginFrame:(CGRect)arg1 ;
-(void)populateStartInfoWithFrame:(CGRect)arg1 ;
-(void)populateEndInfoWithFrame:(CGRect)arg1 ;
-(CGPoint)beginCenter;
-(CGPoint)endCenter;
-(char)changedAccessoryOnly;
-(void)setBeginCenter:(CGPoint)arg1 ;
-(void)setEndCenter:(CGPoint)arg1 ;
-(id)inverseInfo;
-(NSDictionary *)privateUserInfo;
-(void)logGeometry;
-(void)populateWithAnimationStyle:(id)arg1 ;
-(void)setChangedAccessoryOnly:(char)arg1 ;
@end
