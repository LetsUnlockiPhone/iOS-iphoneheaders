/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewServiceProxy_ReplyControl.h>

@class _UIViewServiceReplyControlTrampoline, _UIViewServiceReplyAwaitingTrampoline, NSLock;

@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {

	id _target;
	_UIViewServiceReplyControlTrampoline* _controlTrampoline;
	_UIViewServiceReplyAwaitingTrampoline* _awaitingTrampoline;
	NSLock* _lock;

}
+(id)proxyWithTarget:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_deliveringRepliesAsynchronously;
-(id)_awaitingReply;
@end
