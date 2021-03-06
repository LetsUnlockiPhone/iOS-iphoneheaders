/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStoryboardSegue.h>

@class UIPopoverController, NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {

	UIPopoverController* _popoverController;
	NSArray* _passthroughViews;
	unsigned _permittedArrowDirections;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;
	CGRect _anchorRect;

}

@property (nonatomic,readonly) UIPopoverController * popoverController;                                            //@synthesize popoverController=_popoverController - In the implementation block
@property (setter=_setPassthroughViews:,nonatomic,copy) NSArray * _passthroughViews;                               //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,setter=_setPermittedArrowDirections:,nonatomic) unsigned _permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (setter=_setAnchorBarButtonItem:,nonatomic,retain) UIBarButtonItem * _anchorBarButtonItem;               //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
@property (setter=_setAnchorView:,nonatomic,retain) UIView * _anchorView;                                          //@synthesize anchorView=_anchorView - In the implementation block
@property (assign,setter=_setAnchorRect:,nonatomic) CGRect _anchorRect;                                            //@synthesize anchorRect=_anchorRect - In the implementation block
-(void)dealloc;
-(id)_passthroughViews;
-(id)popoverController;
-(void)perform;
-(void)_setPassthroughViews:(id)arg1 ;
-(void)_setPermittedArrowDirections:(unsigned)arg1 ;
-(void)_setAnchorBarButtonItem:(id)arg1 ;
-(void)_setAnchorView:(id)arg1 ;
-(void)_setAnchorRect:(CGRect)arg1 ;
-(unsigned)_permittedArrowDirections;
-(id)_anchorBarButtonItem;
-(id)_anchorView;
-(CGRect)_anchorRect;
@end

