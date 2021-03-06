/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface OCXRelationship : NSObject {

	NSString* mIdString;
	NSString* mType;
	NSString* mTarget;
	char mExternal;

}

@property (nonatomic,readonly) NSString * idString; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * target; 
-(NSString *)idString;
-(void)dealloc;
-(NSString *)type;
-(NSString *)target;
-(id)initWithId:(unsigned)arg1 type:(id)arg2 target:(id)arg3 external:(char)arg4 ;
-(void)writeToStreamWriter:(id)arg1 ;
@end

