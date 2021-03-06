/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/NSCoding.h>

@interface SUGradientColorStop : NSObject <NSCoding> {

	double _r;
	double _g;
	double _b;
	double _a;
	double _offset;
	CGColorRef _rawColor;

}

@property (nonatomic,readonly) double offset; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(long long)compare:(id)arg1 ;
-(double)offset;
-(CGColorRef)copyCGColor;
-(id)initWithColor:(CGColorRef)arg1 offset:(double)arg2 ;
@end

