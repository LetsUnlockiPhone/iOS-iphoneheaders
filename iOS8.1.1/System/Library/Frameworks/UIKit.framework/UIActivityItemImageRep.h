/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/id _thumbnailProvider;
	/*^block*/id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)data;
-(id)thumbnail;
-(id)asset;
-(void)setAsset:(id)arg1 ;
-(void)setThumbnailProvider:(id)arg1 ;
-(void)setDataProvider:(id)arg1 ;
-(id)thumbnailProvider;
-(id)dataProvider;
@end

