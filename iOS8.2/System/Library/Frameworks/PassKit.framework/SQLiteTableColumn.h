/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SQLiteTableColumn : NSObject {

	NSString* _name;
	NSString* _qualifiers;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * qualifiers;              //@synthesize qualifiers=_qualifiers - In the implementation block
-(id)SQL;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)qualifiers;
-(void)setQualifiers:(NSString *)arg1 ;
@end

