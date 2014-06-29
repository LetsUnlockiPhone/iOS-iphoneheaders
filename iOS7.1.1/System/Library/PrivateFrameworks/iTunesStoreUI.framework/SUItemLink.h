/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSURL;

@interface SUItemLink : NSObject <NSCopying> {

	long long _linkTarget;
	long long _linkType;
	NSString* _title;
	NSURL* _url;

}

@property (assign,nonatomic) long long linkTarget;              //@synthesize linkTarget=_linkTarget - In the implementation block
@property (assign,nonatomic) long long linkType;                //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                       //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(long long)linkType;
-(long long)linkTarget;
-(void)setLinkTarget:(long long)arg1 ;
-(void)setLinkType:(long long)arg1 ;
@end
