/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileMail/MobileMail-Structs.h>
@class NSObject, NSArray, MFMessageCriterion, UIImage;

@interface SharedMailboxController : NSObject {

	NSObject<OS_dispatch_queue>* _queue;
	NSArray* _mailboxes;
	MFMessageCriterion* _criterion;
	int _badgeCount;
	int _badgeCountGenerationNumber;
	int _exposure;
	UIImage* _icon;
	unsigned _sourceType;

}

@property (assign,nonatomic) unsigned sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
+(id)allSharedInstances;
+(id)sharedInstanceForSourceType:(unsigned)arg1 ;
-(void)setExposure:(int)arg1 ;
-(BOOL)shouldIncludeMessage:(id)arg1 ;
-(void)setBadgeCount:(int)arg1 ;
-(void)reloadPreferences;
-(void)invalidateIcon;
-(id)lastInitialBadgeCountDefaultKey;
-(void)updateMailboxes;
-(void)accountsDidChange:(id)arg1 ;
-(void)messageFlagChanged:(id)arg1 ;
-(void)setBadgeCountNeedsUpdate;
-(void)setBadgeCount:(int)arg1 notifyChange:(BOOL)arg2 ;
-(void)updateBadgeCountAsynchronously;
-(int)computeBadgeCountSynchronously;
-(id)iconTintColor;
-(int)badgeCount;
-(BOOL)shouldBeDisplayed;
-(id)mailboxTitle;
-(Class)criterionSourceClass;
-(void)reloadCriterion;
-(void)dealloc;
-(id)init;
-(void)suspend;
-(void)resume;
-(unsigned)sourceType;
-(void)setSourceType:(unsigned)arg1 ;
-(id)iconImage;
-(CGPoint)iconOffset;
-(id)navigationTitle;
-(id)icon;
@end
