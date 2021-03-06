/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, UISpringBoardHostedView;

@interface UIRemoteSheetInfo : NSObject {

	UIView* _sheetView;
	UISpringBoardHostedView* _remoteView;
	id _delegate;
	SEL _selector;
	void* _context;
	long long _returnCode;

}

@property (nonatomic,retain) UIView * sheetView;                                //@synthesize sheetView=_sheetView - In the implementation block
@property (nonatomic,retain) UISpringBoardHostedView * remoteView;              //@synthesize remoteView=_remoteView - In the implementation block
@property (assign,nonatomic) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SEL selector;                                      //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) void* context;                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long returnCode;                              //@synthesize returnCode=_returnCode - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setSelector:(SEL)arg1 ;
-(SEL)selector;
-(void*)context;
-(void)setContext:(void*)arg1 ;
-(void)setSheetView:(UIView *)arg1 ;
-(void)setRemoteView:(UISpringBoardHostedView *)arg1 ;
-(UIView *)sheetView;
-(void)setReturnCode:(long long)arg1 ;
-(UISpringBoardHostedView *)remoteView;
-(long long)returnCode;
@end

