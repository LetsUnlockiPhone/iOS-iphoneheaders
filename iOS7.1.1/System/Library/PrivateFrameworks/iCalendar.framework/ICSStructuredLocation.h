/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSStructuredLocation : ICSProperty

@property (retain) NSString * fmtype; 
@property (retain) NSString * title; 
@property (retain) NSString * loctype; 
@property (retain) NSString * abURLString; 
@property (assign) double radius; 
@property (retain) NSString * displayName; 
@property (retain) NSString * address; 
@property (retain) NSString * routing; 
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)setAddress:(id)arg1 ;
-(id)fmtype;
-(void)setFmtype:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(id)address;
-(id)loctype;
-(void)setLoctype:(id)arg1 ;
-(id)abURLString;
-(void)setAbURLString:(id)arg1 ;
-(id)routing;
-(void)setRouting:(id)arg1 ;
@end

