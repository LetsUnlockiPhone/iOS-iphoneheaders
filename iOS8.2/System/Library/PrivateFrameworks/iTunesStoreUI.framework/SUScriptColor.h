/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@class UIColor;

@interface SUScriptColor : SUScriptObject {

	UIColor* _color;

}

@property (readonly) UIColor * nativeColor; 
@property (readonly) float red; 
@property (readonly) float green; 
@property (readonly) float blue; 
@property (readonly) float alpha; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(float)alpha;
-(float)red;
-(float)green;
-(float)blue;
-(id)initWithUIColor:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(id)stringRepresentation;
-(id)initWithStyleString:(id)arg1 ;
-(UIColor *)nativeColor;
-(CGColorRef)copyCGColor;
-(void)setHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4 ;
-(void)setRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 ;
-(void)setWhite:(float)arg1 alpha:(float)arg2 ;
@end
