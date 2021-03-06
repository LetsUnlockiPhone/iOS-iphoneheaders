/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MainChromeTopBarContentProvider.h>

@class NSString, MainChromeViewController;

@interface MainChromeTopBarMap : NSObject <MainChromeTopBarContentProvider> {

	char _cachesRegular;
	id _cachedRegular;
	/*^block*/id _createRegular;
	char _cachesCompressed;
	id _cachedCompressed;
	/*^block*/id _createCompressed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController; 
-(id)topBarContentForVariant:(int)arg1 ;
-(void)setTopBarContentForVariant:(int)arg1 options:(int)arg2 fromCreationBlock:(/*^block*/id)arg3 ;
-(id)initWithTopBarContentForAllVariants:(id)arg1 ;
-(void)setTopBarContentForVariant:(int)arg1 fromCreationBlock:(/*^block*/id)arg2 ;
-(id)init;
@end

