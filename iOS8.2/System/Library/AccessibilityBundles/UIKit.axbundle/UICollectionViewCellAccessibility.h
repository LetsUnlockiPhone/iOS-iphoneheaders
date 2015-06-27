/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityChildren;
-(char)accessibilityScrollToVisible;
-(char)_accessibilityIsOutsideParentBounds;
-(id)axData;
-(void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(void)accessibilityClearInternalData;
-(id)accessibilityIndexPath;
-(void)addSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)prepareForReuse;
-(unsigned long long)accessibilityTraits;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
@end
