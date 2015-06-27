/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, BBDismissalItem;

@interface BBDismissalSyncBulletinMatch : NSObject {

	NSString* _sectionID;
	BBDismissalItem* _dismissalItem;
	NSString* _dismissalID;
	unsigned _feeds;

}

@property (assign,nonatomic) unsigned feeds;                               //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                           //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) BBDismissalItem * dismissalItem;              //@synthesize dismissalItem=_dismissalItem - In the implementation block
@property (nonatomic,copy) NSString * dismissalID;                         //@synthesize dismissalID=_dismissalID - In the implementation block
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)dismissalID;
-(void)dealloc;
-(id)description;
-(void)setDismissalID:(NSString *)arg1 ;
-(unsigned)feeds;
-(void)setFeeds:(unsigned)arg1 ;
-(id)initWithDismissalID:(id)arg1 andItem:(id)arg2 ;
-(id)initWithDismissalDictionaryItem:(id)arg1 ;
-(BBDismissalItem *)dismissalItem;
-(void)setDismissalItem:(BBDismissalItem *)arg1 ;
-(NSString *)sectionID;
@end
