/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class CSLUILayoutViewController;

@interface CSLUILayoutNavController : UINavigationController {

	CSLUILayoutViewController* _layoutViewController;

}

@property (nonatomic,retain) CSLUILayoutViewController * layoutViewController;              //@synthesize layoutViewController=_layoutViewController - In the implementation block
-(void)setLayoutViewController:(CSLUILayoutViewController *)arg1 ;
-(CSLUILayoutViewController *)layoutViewController;
-(void)resetIconPositions;
-(id)init;
@end

