/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKAnimationDelegate : NSObject {

	unsigned long long _layerID;
	RemoteLayerTreeHost* _layerTreeHost;

}
-(void)invalidate;
-(void)animationDidStart:(id)arg1 ;
-(id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(RemoteLayerTreeHost*)arg2 ;
@end
