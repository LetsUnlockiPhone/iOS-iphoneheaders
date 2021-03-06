/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:02 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/NSCopying.h>
#import <FrontBoardServices/NSMutableCopying.h>

@class NSSet, BSSettings;

@interface FBSSceneClientSettings : NSObject <NSCopying, NSMutableCopying> {

	float _preferredLevel;
	int _preferredInterfaceOrientation;
	NSSet* _occlusions;
	BSSettings* _otherSettings;

}

@property (nonatomic,readonly) float preferredLevel;                           //@synthesize preferredLevel=_preferredLevel - In the implementation block
@property (nonatomic,readonly) int preferredInterfaceOrientation;              //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSSet * occlusions;                        //@synthesize occlusions=_occlusions - In the implementation block
+(id)settings;
+(char)_isMutable;
-(char)isUISubclass;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(id)initWithSettings:(id)arg1 ;
-(id)otherSettings;
-(NSSet *)occlusions;
-(id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1 ;
-(float)preferredLevel;
-(int)preferredInterfaceOrientation;
@end

