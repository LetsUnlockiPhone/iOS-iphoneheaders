/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBCandidateCollectionView.h>

@class UIKeyboardCandidateGridCollectionViewController, UITableViewIndex, UIView, NSArray;

@interface UIKeyboardCandidateGridCollectionView : UIKBCandidateCollectionView {

	double _indexMaximumHeight;
	UIKeyboardCandidateGridCollectionViewController* _parentViewController;
	double _previousGroupBarStartingY;
	UITableViewIndex* _index;
	UIView* _headerView;

}

@property (assign,nonatomic) UIKeyboardCandidateGridCollectionViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                                 //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) double previousGroupBarStartingY;                                                    //@synthesize previousGroupBarStartingY=_previousGroupBarStartingY - In the implementation block
@property (nonatomic,retain) NSArray * indexTitles; 
@property (nonatomic,readonly) UITableViewIndex * index;                                                          //@synthesize index=_index - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)parentViewController;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(unsigned long long)arg3 ;
-(void)setParentViewController:(id)arg1 ;
-(id)headerView;
-(void)scrollToOffsetFromTop:(double)arg1 withAnimation:(bool)arg2 ;
-(void)scrollToTopWithAnimation:(bool)arg1 ;
-(void)scrollToBottomWithAnimation:(bool)arg1 ;
-(void)setHeaderView:(id)arg1 ;
-(id)indexTitles;
-(void)setIndexTitles:(id)arg1 ;
-(id)index;
-(void)keyboardDidHideNotification:(id)arg1 ;
-(void)keyboardWillShowNotification:(id)arg1 ;
-(double)groupBarStartingY;
-(void)setPreviousGroupBarStartingY:(double)arg1 ;
-(bool)shouldShowIndex;
-(void)updateIndex:(bool)arg1 ;
-(void)updateIndex;
-(double)previousGroupBarStartingY;
-(void)showIndex:(bool)arg1 ;
-(void)delayUpdateIndex;
-(bool)isCellVisible:(id)arg1 ;
@end

