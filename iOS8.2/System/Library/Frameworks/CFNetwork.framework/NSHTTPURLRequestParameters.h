/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSArray, NSData;

@interface NSHTTPURLRequestParameters : NSObject {

	NSString* method;
	NSMutableDictionary* fields;
	NSArray* extraCookies;
	NSData* data;
	unsigned pageNotFoundCacheLifetime;
	char shouldHandleCookies;
	char _pad1;
	char _pad2;
	char _pad3;

}
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
@end
