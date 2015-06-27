/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSAuthenticationContext, ISDialog, ISDialogButton, NSURL;

@interface ISServerAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedAccountDSID;
	SSAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	BOOL _performsButtonAction;
	ISDialogButton* _performedButton;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;

}

@property (retain) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) ISDialog * dialog;                                            //@synthesize dialog=_dialog - In the implementation block
@property (assign) BOOL performsButtonAction;                                    //@synthesize performsButtonAction=_performsButtonAction - In the implementation block
@property (retain) NSNumber * authenticatedAccountDSID;                          //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (retain) ISDialogButton * performedButton;                             //@synthesize performedButton=_performedButton - In the implementation block
@property (retain) NSURL * redirectURL;                                          //@synthesize redirectURL=_redirectURL - In the implementation block
@property (retain) ISDialogButton * selectedButton;                              //@synthesize selectedButton=_selectedButton - In the implementation block
-(void)dealloc;
-(id)init;
-(void)run;
-(void)setRedirectURL:(id)arg1 ;
-(id)_copyAuthenticationContext;
-(void)setAuthenticatedAccountDSID:(id)arg1 ;
-(void)setDialog:(id)arg1 ;
-(void)setSelectedButton:(id)arg1 ;
-(id)selectedButton;
-(id)_copyButtonForDialogSkip;
-(BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2 ;
-(BOOL)_shouldAuthenticateForButton:(id)arg1 ;
-(BOOL)performsButtonAction;
-(void)setPerformedButton:(id)arg1 ;
-(BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2 ;
-(BOOL)_handleSelectedButton:(id)arg1 ;
-(void)setPerformsButtonAction:(BOOL)arg1 ;
-(id)performedButton;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)authenticatedAccountDSID;
-(id)dialog;
-(id)redirectURL;
@end
