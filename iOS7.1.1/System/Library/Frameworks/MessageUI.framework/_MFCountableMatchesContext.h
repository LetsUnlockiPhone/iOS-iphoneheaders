/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject {

	CFDictionaryRef _peopleCount;
	NSMutableSet* _popularPeople;
	long long _maxCount;

}

@property (assign,nonatomic) long long maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)setMaxCount:(long long)arg1 ;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/ id)arg2 ;
-(id)highestMatches;
-(void)dealloc;
-(id)init;
-(long long)maxCount;
@end

