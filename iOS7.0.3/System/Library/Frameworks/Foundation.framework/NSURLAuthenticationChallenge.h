/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {

	NSURLAuthenticationChallengeInternal* _internal;

}
+(id)_authenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
-(CFURLAuthChallengeRef)_createCFAuthChallenge;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(id)proposedCredential;
-(id)failureResponse;
-(id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(void)setSender:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(int)previousFailureCount;
-(id)protectionSpace;
-(id)sender;
-(id)error;
@end

