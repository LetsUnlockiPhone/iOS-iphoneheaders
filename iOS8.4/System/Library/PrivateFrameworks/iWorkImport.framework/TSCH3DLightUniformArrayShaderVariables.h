/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSCH3DUniformArrayShaderVariables;

@interface TSCH3DLightUniformArrayShaderVariables : NSObject {

	TSCH3DUniformArrayShaderVariables* mVariables;

}
-(void)initializeArrayVariables;
-(unsigned long long)arraySize;
-(void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2 ;
-(id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2 ;
-(void)initializePrefix:(id)arg1 ;
-(void)dealloc;
@end
