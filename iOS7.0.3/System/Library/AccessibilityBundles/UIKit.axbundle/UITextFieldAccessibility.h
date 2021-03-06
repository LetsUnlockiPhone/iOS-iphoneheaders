/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : UITextFieldAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityInternalButton;
-(void)_accessibilityUpdateButtons;
-(id)_accessibilityTextFieldElement;
-(BOOL)_axTextFieldIsHidden;
-(int)_accessibilityCountAccessibleChildren:(id)arg1 ;
-(id)_accessibilityInternalData;
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(void)_updateButtons;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
@end

