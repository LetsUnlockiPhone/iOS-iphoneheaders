/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQHTextSpan : NSObject
+(int)handlePageStart:(id)arg1 state:(id)arg2 ;
+(int)handleContainerHint:(id)arg1 state:(id)arg2 ;
+(int)nonWhitespaceCount:(CFArrayRef)arg1 ;
+(int)handleSpan:(id)arg1 checkForTrailingBlanks:(char)arg2 state:(id)arg3 ;
+(int)handleTextBackgroundForStyle:(id)arg1 destStyle:(id)arg2 state:(id)arg3 ;
+(int)handleTextListChild:(id)arg1 outputBlanks:(char)arg2 state:(id)arg3 ;
+(int)handleTextList:(id)arg1 checkForTrailingBlanks:(char)arg2 state:(id)arg3 ;
+(int)handleTextMarker:(id)arg1 outputBlanks:(char)arg2 state:(id)arg3 ;
+(int)handleAutoNumber:(id)arg1 state:(id)arg2 ;
+(int)handleAttachment:(id)arg1 state:(id)arg2 ;
@end
