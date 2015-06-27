/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISAuthenticationChallenge.h>

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {

	NSURLAuthenticationChallenge* _challenge;

}
-(char)hasPassword;
-(void)dealloc;
-(id)sender;
-(id)password;
-(id)user;
-(int)failureCount;
-(void)cancelAuthentication;
-(id)initWithAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 ;
@end
