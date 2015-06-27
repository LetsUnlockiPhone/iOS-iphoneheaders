/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NNMKPairedDeviceInfo : NSObject {

	float _screenWidth;
	float _screenScale;

}

@property (assign,nonatomic) float screenWidth;              //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) float screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(id)pairedDeviceInfoWithScreenWidth:(float)arg1 screenScale:(float)arg2 ;
-(float)screenScale;
-(void)setScreenScale:(float)arg1 ;
-(void)setScreenWidth:(float)arg1 ;
-(float)screenWidth;
@end
