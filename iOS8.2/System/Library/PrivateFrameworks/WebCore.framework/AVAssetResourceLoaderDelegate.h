/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVAssetResourceLoaderDelegate <NSObject>
@optional
-(char)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
-(char)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
-(char)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
-(void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;

@end

