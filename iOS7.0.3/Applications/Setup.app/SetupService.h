/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SetupService : NSObject {

	NSString* _iconName;
	NSString* _detailDescription;

}

@property (nonatomic,copy) NSString * iconName;                       //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy) NSString * detailDescription;              //@synthesize detailDescription=_detailDescription - In the implementation block
+(id)setupServiceWithIconName:(id)arg1 detailDescription:(id)arg2 ;
-(id)initWithIconName:(id)arg1 detailDescription:(id)arg2 ;
-(id)detailDescription;
-(void)setDetailDescription:(id)arg1 ;
-(void)dealloc;
-(void)setIconName:(id)arg1 ;
-(id)iconName;
@end
