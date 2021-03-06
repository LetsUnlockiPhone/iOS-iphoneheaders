/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MCUIPayloadUserInputField;

@interface MCUIFieldCollection : NSObject {

	NSMutableArray* _payloadFieldArrays;
	long long _currentPayloadIndex;
	long long _currentFieldIndex;
	MCUIPayloadUserInputField* _currentField;
	bool _isFinalField;

}
-(void).cxx_destruct;
-(id)initWithUserInput:(id)arg1 ;
-(id)currentField;
-(bool)currentFieldIsLastInPayload;
-(void)moveToNextField;
-(bool)currentFieldIsFinalField;
-(id)userInputResponses;
-(id)responseDictionariesForCurrentPayload;
-(long long)currentPayloadIndex;
-(bool)currentFieldIsSinglePasswordField;
-(void)restartCurrentPayload;
-(void)_setCurrentFieldToCurrentIndices;
-(void)_setIsFinalField;
@end

