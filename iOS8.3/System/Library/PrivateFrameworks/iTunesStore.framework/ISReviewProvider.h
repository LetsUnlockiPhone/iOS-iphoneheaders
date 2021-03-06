/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <iTunesStore/NSCopying.h>

@interface ISReviewProvider : ISDataProvider <NSCopying> {

	char _backgroundReview;

}

@property (getter=isBackgroundReview) char backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isBackgroundReview;
-(void)setBackgroundReview:(char)arg1 ;
-(char)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

