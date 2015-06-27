/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:15 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	_NCWidgetViewController* _hostViewController;

}

@property (assign,nonatomic) _NCWidgetViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(_NCWidgetViewController *)hostViewController;
-(void)setHostViewController:(_NCWidgetViewController *)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
