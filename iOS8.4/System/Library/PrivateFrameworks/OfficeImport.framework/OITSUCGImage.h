/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@interface OITSUCGImage : OITSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(void)dealloc;
-(CGSize)size;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end
