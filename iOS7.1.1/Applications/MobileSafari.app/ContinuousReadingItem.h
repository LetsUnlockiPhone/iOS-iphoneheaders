/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark, WBSAutomaticReadingListItem, NSString, NSURL;

@interface ContinuousReadingItem : NSObject {

	WebBookmark* _readingListBookmark;
	WBSAutomaticReadingListItem* _automaticReadingListItem;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * extraTitleInfo; 
@property (nonatomic,readonly) NSString * previewText; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,retain) WebBookmark * readingListBookmark;                                     //@synthesize readingListBookmark=_readingListBookmark - In the implementation block
@property (nonatomic,readonly) BOOL wantsTopBanner; 
@property (nonatomic,readonly) WBSAutomaticReadingListItem * automaticReadingListItem;              //@synthesize automaticReadingListItem=_automaticReadingListItem - In the implementation block
+(id)itemWithReadingListItem:(id)arg1 ;
+(id)itemWithAutomaticReadingListItem:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)automaticReadingListItem;
-(id)readingListBookmark;
-(BOOL)wantsTopBanner;
-(id)extraTitleInfo;
-(id)_initWithReadingListItem:(id)arg1 ;
-(id)_initWithAutomaticReadingListItem:(id)arg1 ;
-(id)_siteNameForReadingListItem;
-(void)_readingListItemDidUpdate:(id)arg1 ;
-(void)_setReadingListBookmark:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)type;
-(id)title;
-(id)URL;
-(id)subtitle;
-(id)previewText;
@end

