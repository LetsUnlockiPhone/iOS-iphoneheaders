/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface PKPaymentOptionGroupItem : NSObject {

	NSString* _groupType;
	id _referenceObject;
	NSString* _title;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * groupType;                  //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) id referenceObject;                    //@synthesize referenceObject=_referenceObject - In the implementation block
@property (nonatomic,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * detail;                     //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) Class tableViewCellClass; 
@property (nonatomic,readonly) char isSelectable; 
+(id)_singleLineGroupTypes;
-(id)referenceObject;
-(id)initWithReferenceObject:(id)arg1 title:(id)arg2 detail:(id)arg3 groupType:(id)arg4 ;
-(char)isEqualToOptionGroupItem:(id)arg1 ;
-(Class)tableViewCellClass;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(char)isSelectable;
-(NSString *)groupType;
-(NSString *)detail;
@end
