/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SCATElementManager, SCATStyleProvider;

@interface SCATElementManagerViewController : UIViewController {

	SCATElementManager* _elementManager;

}

@property (assign,nonatomic) SCATElementManager * elementManager;              //@synthesize elementManager=_elementManager - In the implementation block
@property (nonatomic,readonly) SCATStyleProvider * styleProvider; 
-(void)didPresentWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)didUpdateWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)didDismiss:(BOOL)arg1 ;
-(SCATElementManager *)elementManager;
-(id)initWithElementManager:(id)arg1 ;
-(void)setElementManager:(SCATElementManager *)arg1 ;
-(void)presentWithDisplayContext:(id)arg1 animted:(BOOL)arg2 ;
-(void)willPresentWithDisplayContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)willDismiss:(BOOL)arg1 ;
-(SCATStyleProvider *)styleProvider;
-(void)dealloc;
-(void)dismiss:(BOOL)arg1 ;
@end

