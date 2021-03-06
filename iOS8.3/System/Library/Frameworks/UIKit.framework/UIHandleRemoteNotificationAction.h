/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString;

@interface UIHandleRemoteNotificationAction : BSAction

@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,copy,readonly) NSString * action; 
-(int)UIActionType;
-(NSDictionary *)payload;
-(void)sendResponse:(id)arg1 ;
-(NSString *)action;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 type:(int)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(/*^block*/id)arg3 ;
@end

