/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <itunesstored/itunesstored-Structs.h>
@class NSMutableOrderedSet;

@interface DownloadReachabilityHost : NSObject {

	NSMutableOrderedSet* _downloadIdentifiers;
	SCNetworkReachabilityRef _reachability;

}

@property (nonatomic,readonly) NSMutableOrderedSet * downloadIdentifiers;              //@synthesize downloadIdentifiers=_downloadIdentifiers - In the implementation block
@property (nonatomic,readonly) SCNetworkReachabilityRef reachability;                  //@synthesize reachability=_reachability - In the implementation block
-(id)initWithHost:(id)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(void)dealloc;
-(id)downloadIdentifiers;
@end

