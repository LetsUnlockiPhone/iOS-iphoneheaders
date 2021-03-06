/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface POPodcastRevision : NSObject {

	BOOL _isPodcastCollection;
	unsigned long long _revisionID;
	long long _revisionType;
	NSString* _objectID;

}

@property (assign,nonatomic) unsigned long long revisionID;              //@synthesize revisionID=_revisionID - In the implementation block
@property (assign,nonatomic) long long revisionType;                     //@synthesize revisionType=_revisionType - In the implementation block
@property (nonatomic,retain) NSString * objectID;                        //@synthesize objectID=_objectID - In the implementation block
@property (assign) BOOL isPodcastCollection;                             //@synthesize isPodcastCollection=_isPodcastCollection - In the implementation block
-(BOOL)isPodcastCollection;
-(void)setIsPodcastCollection:(BOOL)arg1 ;
-(id)deletedModelObject;
-(id)description;
-(NSString *)objectID;
-(void)setObjectID:(NSString *)arg1 ;
-(void)setRevisionID:(unsigned long long)arg1 ;
-(void)setRevisionType:(long long)arg1 ;
-(long long)revisionType;
-(unsigned long long)revisionID;
@end

