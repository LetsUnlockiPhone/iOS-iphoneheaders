/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIImage, NSString;

@interface IMRenderingCacheWriteOperation : NSOperation {

	UIImage* _image;
	NSString* _key;
	NSString* _assetID;
	NSString* _path;
	int _serializeFormat;
	float _compressionQuality;

}

@property (nonatomic,readonly) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) int serializeFormat;                 //@synthesize serializeFormat=_serializeFormat - In the implementation block
@property (assign,nonatomic) float compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
+(id)mimeForIMRenderingCacheSerializeFormat:(int)arg1 ;
-(int)serializeFormat;
-(id)initWithImage:(id)arg1 key:(id)arg2 format:(int)arg3 persistentCachePath:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(NSString *)key;
-(UIImage *)image;
-(void)main;
-(void)setCompressionQuality:(float)arg1 ;
-(float)compressionQuality;
@end

