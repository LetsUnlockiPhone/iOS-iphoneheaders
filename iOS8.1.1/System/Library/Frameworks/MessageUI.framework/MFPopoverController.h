/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPopoverController.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class NSString;

@interface MFPopoverController : UIPopoverController <UIPopoverControllerDelegate> {

	id _mailDelegate;
	id _mailPopoverManager;
	BOOL _isRotating;

}

@property (assign,nonatomic) id<MFMailPopoverManagerDelegate> mailDelegate;              //@synthesize mailDelegate=_mailDelegate - In the implementation block
@property (assign,nonatomic) id mailPopoverManager;                                      //@synthesize mailPopoverManager=_mailPopoverManager - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                            //@synthesize isRotating=_isRotating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMailDelegate:(id<MFMailPopoverManagerDelegate>)arg1 ;
-(void)setMailPopoverManager:(id)arg1 ;
-(id<MFMailPopoverManagerDelegate>)mailDelegate;
-(void)setIsRotating:(BOOL)arg1 ;
-(id)mailPopoverManager;
-(void)dealloc;
-(BOOL)isRotating;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
@end
