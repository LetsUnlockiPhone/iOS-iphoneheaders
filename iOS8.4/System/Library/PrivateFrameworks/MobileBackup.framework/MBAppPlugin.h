/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MBContainer.h>

@class NSArray, NSString, NSDictionary;

@interface MBAppPlugin : MBContainer {

	NSArray* _groups;

}

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,retain) NSArray * groups;                           //@synthesize groups=_groups - In the implementation block
+(id)appPluginWithPropertyList:(id)arg1 ;
-(void)setGroups:(NSArray *)arg1 ;
-(id)domain;
-(NSDictionary *)entitlements;
-(NSArray *)groups;
-(NSString *)bundleDir;
@end

