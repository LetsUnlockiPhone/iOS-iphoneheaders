/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSMutableArray, NSArray;

@interface QuotaAppDetailsResponse : AAResponse {

	NSMutableArray* _apps;

}

@property (nonatomic,readonly) NSArray * apps;              //@synthesize apps=_apps - In the implementation block
-(void)addApps:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)apps;
@end

