/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewAccessibility_super.h>

@interface UITableViewAccessibility : UITableViewAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityVisibleHeaderSections;
-(void)_setAccessibilitySearchControllerDimmingViewVisible;
-(void)_setAccessibilitySearchControllerDimmingViewHidden;
-(id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1 ;
-(id)_accessibilityUIScrollViewScrollStatus;
-(void)accessibilityFindMockParentForTableViewCell:(id)arg1 ;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(void)_setAccessibilitySearchTableViewVisible;
-(void)_setAccessibilitySearchTableViewHidden;
-(BOOL)_accessibilityIsSearchTableVisible;
-(id)_accessibilitySearchResultsTableView;
-(BOOL)_axSearchForSearchResultsView:(id)arg1 ;
-(void)setReusableCellsEnabled:(BOOL)arg1 ;
-(id)_axAttemptStoryboard:(id)arg1 viewType:(int)arg2 ;
-(BOOL)_accessibilityShouldDisableCellReuse;
-(id)_axAttemptCreationOfViewType:(int)arg1 identifier:(id)arg2 ;
-(void)_accessibilityInitializeInternalData;
-(void)_axPostLayoutChange;
-(BOOL)_accessibilitySearchTableViewVisible;
-(BOOL)_accessibilitySearchControllerDimmingViewVisible;
-(id)accessibilityTableViewSectionElementAtSection:(int)arg1 isHeader:(BOOL)arg2 ;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityTableViewCellElementForIndexPath:(id)arg1 ;
-(BOOL)_accessibilityShouldVerifyTableViewCellsAreVisibleByHitTesting;
-(id)_accessibilityInternalData;
-(void)_accessibilityClearChildren;
-(id)_accessibilityFooterElement;
-(void)dealloc;
-(void)reloadData;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(id)description;
-(void)_handleDeviceOrientationChange:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)setTableHeaderViewShouldAutoHide:(BOOL)arg1 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(void)_reorderPositionChangedForCell:(id)arg1 ;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1 ;
-(void)setCountString:(id)arg1 ;
-(void)insertSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(BOOL)shouldGroupAccessibilityChildren;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilitySupplementaryFooterViews;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScrollStatus;
-(id)accessibilityTableViewCellElementAtGlobalRow:(int)arg1 ;
-(id)_accessibilitySubviews;
-(id)_accessibilityUserTestingVisibleCells;
-(id)_accessibilityUserTestingVisibleSections;
-(BOOL)_accessibilityIsScannerElement;
-(id)_accessibilityHeaderElement;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilityIsScannerGroup;
-(id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2 ;
@end

