/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebAllowDenyPolicyListener.h>

@class NSString;

@interface WKWebAllowDenyPolicyListener : NSObject <WebAllowDenyPolicyListener> {

	RefPtr<WebKit::GeolocationPermissionRequestProxy>* _permissionRequestProxy;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)allow;
-(void)deny;
-(char)shouldClearCache;
-(id)initWithPermissionRequestProxy:(PassRefPtr<WebKit::GeolocationPermissionRequestProxy>*)arg1 ;
-(void)denyOnlyThisRequest;
@end

