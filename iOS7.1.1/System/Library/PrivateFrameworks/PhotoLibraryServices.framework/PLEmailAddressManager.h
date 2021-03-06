/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface PLEmailAddressManager : NSObject {

	NSMutableDictionary* _keysForEmails;
	NSMutableDictionary* _emailsForKey;
	int _maxKey;
	NSString* _plistPath;

}
+(id)sharedManager;
-(void)dealloc;
-(void)_loadDictionariesIfNeeded;
-(id)emailAddressForKey:(id)arg1 ;
-(id)keyForEmailAddress:(id)arg1 ;
@end

