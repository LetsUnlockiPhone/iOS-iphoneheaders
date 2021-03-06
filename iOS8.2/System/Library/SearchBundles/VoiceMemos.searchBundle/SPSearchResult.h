/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SearchBundles/VoiceMemos.searchBundle/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPSearchResult <NSObject>
@optional
-(const char*)titleUTF8String;
-(const char*)subtitleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)auxiliarySubtitleUTF8String;
-(const char*)summaryUTF8String;
-(const char*)URLUTF8String;
-(char)getBadgeValue:(float*)arg1;
-(const char*)resultDisplayIdentifierUTF8String;

@required
-(unsigned long long)identifier;
-(int)domain;

@end

