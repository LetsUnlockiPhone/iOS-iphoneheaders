/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOrthography.h>

@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {

	NSString* _dominantScript;
	NSDictionary* _languageMap;
	unsigned _orthographyFlags;

}
+(void)initialize;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(id)dominantScript;
-(id)languageMap;
-(void)dealloc;
@end
