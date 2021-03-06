/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString;

@interface VMUVMRegion : NSObject {

	VMURange range;
	unsigned prot;
	unsigned maxProt;
	NSString* type;
	NSString* path;
	bool summarized;
	bool recalculate_pages_resident;
	unsigned char external_pager;
	unsigned char share_mode;
	int purgeable;
	unsigned long long virtual_pages;
	unsigned long long pages_resident;
	unsigned long long pages_shared_now_private;
	unsigned long long pages_swapped_out;
	unsigned long long pages_dirtied;
	unsigned long long ref_count;
	unsigned user_tag;
	unsigned long long object_id;
	unsigned nesting_depth;
	bool is_submap;
	unsigned long long mallocBlockCount;
	unsigned mallocTypeFlag;
	unsigned long long pages_purgable_vol;
	unsigned long long pages_purgable_non_vol;
	unsigned long long pages_purgable_empty;

}
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)type;
-(id)path;
-(VMURange)range;
-(unsigned)protection;
-(id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 ;
-(void)addInfoFromRegion:(id)arg1 ;
-(bool)hasSameInfoAsRegion:(id)arg1 ;
-(id)breakAtLength:(unsigned long long)arg1 ;
-(unsigned)maxProtection;
-(unsigned long long)virtualPageCount;
-(unsigned long long)residentPageCount;
-(unsigned long long)dirtyPageCount;
-(unsigned long long)sharedNowPrivatePageCount;
-(unsigned long long)swappedOutPageCount;
-(unsigned long long)purgeablePageCount;
-(bool)isSubmap;
@end

