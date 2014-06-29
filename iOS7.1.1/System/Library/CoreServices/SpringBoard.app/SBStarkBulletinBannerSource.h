/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerSource.h>
#import <SpringBoard/BBObserverDelegate.h>
#import <SpringBoard/SBVolumePressBandit.h>

@class BBObserver;

@interface SBStarkBulletinBannerSource : SBStarkBannerSource <BBObserverDelegate, SBVolumePressBandit> {

	BBObserver* _bbObserver;

}
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_reloadVolumePressBanditPreference;
-(void)_showTestBanner:(id)arg1 ;
-(id)initWithAllowedTargetIdentifier:(void*)arg1 ;
-(void)dealloc;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2 ;
@end
