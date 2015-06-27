/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:45:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriModelObject.h>

@interface AFSettingChange : AFSiriModelObject {

	int _settingType;
	id _valueBeforeUpdate;
	id _valueAfterUpdate;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSettingType:(int)arg1 valueBeforeUpdate:(id)arg2 valueAfterUpdate:(id)arg3 ;
-(int)settingType;
-(id)valueBeforeUpdate;
-(id)valueAfterUpdate;
@end
