/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/YearViewController.h>

@class EKCalendarDate;

@interface LargeYearViewController : YearViewController {

	char _viewIsVisible;
	char _viewHasAppearedBefore;
	int _orientationForCurrentViewLayout;
	EKCalendarDate* _activeDateDuringRotation;
	EKCalendarDate* _currentYearNumber;

}
+(unsigned)monthsPerRow;
+(char)_shouldForwardViewWillTransitionToSize;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(float)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1 ;
-(void)updateNavigationBarDisplayedDateString;
-(void)didEndScrolling;
-(void)reinitializeAllViewsWithCalendarDate:(id)arg1 ;
-(float)showDateVerticalOffset;
-(char)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(Class)multipleMonthViewClass;
-(unsigned)monthsPerRow;
-(char)shouldAnimateTransitionsToMonthView;
-(void)localeDidChange;
-(char)_usePortraitLayoutForSize:(CGSize)arg1 ;
-(int)_orientationForSize:(CGSize)arg1 ;
-(void)_updateYearNumbersAnimated:(char)arg1 withForce:(char)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(int)_currentOrientation;
-(void)didScroll;
@end
