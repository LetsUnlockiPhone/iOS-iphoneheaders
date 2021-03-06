/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WAKView.h>
#import <WebCore/WebCoreFrameScrollView.h>

@class WAKView, WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {

	WAKView* _documentView;
	WAKClipView* _contentView;
	id _delegate;
	CGPoint _scrollOrigin;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)delegate;
-(id)contentView;
-(void)scrollWheel:(id)arg1 ;
-(void)setDrawsBackground:(bool)arg1 ;
-(id)documentView;
-(id).cxx_construct;
-(bool)drawsBackground;
-(void)setDocumentView:(id)arg1 ;
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(bool)arg3 ;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2 ;
-(CGRect)actualDocumentVisibleRect;
-(CGRect)documentVisibleExtent;
-(void)setActualScrollPosition:(CGPoint)arg1 ;
-(CGRect)documentVisibleRect;
-(void)setScrollBarsSuppressed:(bool)arg1 repaintOnUnsuppress:(bool)arg2 ;
-(CGPoint)scrollOrigin;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(bool)arg2 immediately:(bool)arg3 ;
-(bool)_selfHandleEvent:(id)arg1 ;
-(void)setHasVerticalScroller:(bool)arg1 ;
-(bool)hasVerticalScroller;
-(void)setHasHorizontalScroller:(bool)arg1 ;
-(bool)hasHorizontalScroller;
-(void)setLineScroll:(float)arg1 ;
-(float)verticalLineScroll;
-(float)horizontalLineScroll;
-(void)reflectScrolledClipView:(id)arg1 ;
-(void)setHorizontalScrollingMode:(int)arg1 ;
-(void)setVerticalScrollingMode:(int)arg1 ;
-(void)setScrollingMode:(int)arg1 ;
-(int)horizontalScrollingMode;
-(int)verticalScrollingMode;
-(bool)inProgrammaticScroll;
-(void)_adjustScrollers;
@end

