/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@class NSString;

@interface PTSAddGroupSettingsRowAction : PTSRowAction {

	Class _settingsClass;
	NSString* _groupKeyPath;

}

@property (nonatomic,retain) Class settingsClass;                //@synthesize settingsClass=_settingsClass - In the implementation block
@property (nonatomic,copy) NSString * groupKeyPath;              //@synthesize groupKeyPath=_groupKeyPath - In the implementation block
+(id)actionWithGroupKeyPath:(id)arg1 settingsClass:(Class)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setGroupKeyPath:(id)arg1 ;
-(id)groupKeyPath;
-(void)resolveTemplatesWithIndex:(unsigned)arg1 ;
-(void)setSettingsClass:(Class)arg1 ;
-(void).cxx_destruct;
-(Class)settingsClass;
@end

