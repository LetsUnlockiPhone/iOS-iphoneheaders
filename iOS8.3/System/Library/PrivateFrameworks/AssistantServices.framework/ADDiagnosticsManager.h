/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ADDiagnosticsManager : NSObject <NSURLSessionDataDelegate> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLatencyDiagnosticConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

