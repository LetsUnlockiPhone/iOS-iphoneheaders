/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:02:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEConfigurationValidating.h>
#import <NetworkExtension/NEPrettyDescription.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@class NEContentFilterPlugin;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	char _enabled;
	NEContentFilterPlugin* _plugin;

}

@property (getter=isEnabled) char enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEContentFilterPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPlugin:(NEContentFilterPlugin *)arg1 ;
-(NEContentFilterPlugin *)plugin;
@end

