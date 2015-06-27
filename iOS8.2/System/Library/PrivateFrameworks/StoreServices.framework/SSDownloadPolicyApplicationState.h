/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@class NSString, NSSet;

@interface SSDownloadPolicyApplicationState : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSString* _applicationIdentifier;
	NSSet* _applicationStates;

}

@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * applicationStates;                     //@synthesize applicationStates=_applicationStates - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)applicationIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(NSSet *)applicationStates;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)addApplicationState:(int)arg1 ;
-(void)setNotRunningApplicationStates;
-(void)setApplicationStates:(NSSet *)arg1 ;
@end
