/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDBookmark : WDRun {

	NSString* mName;
	int mBookmarkType;

}
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)bookmarkType;
-(int)runType;
-(id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3 ;
-(void)setBookmarkType:(int)arg1 ;
@end

