/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebQuotaManager.h>

@class WebSecurityOrigin;

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {

	WebSecurityOrigin* _origin;

}
-(id)origin;
-(void)setQuota:(unsigned long long)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(unsigned long long)quota;
-(unsigned long long)usage;
@end
