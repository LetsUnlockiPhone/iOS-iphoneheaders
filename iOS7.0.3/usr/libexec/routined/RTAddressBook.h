/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface RTAddressBook : NSObject {

	void* _addressBook;
	NSArray* _meCards;

}

@property (nonatomic,retain) NSArray * meCards;              //@synthesize meCards=_meCards - In the implementation block
-(id)getMeCardLocationsOfType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)meCards;
-(void)setMeCards:(id)arg1 ;
-(void).cxx_destruct;
@end

