/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:54:57 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface XMLRPCResponse : NSObject {

	NSString* myBody;
	id myObject;
	BOOL isFault;

}
-(id)faultCode;
-(id)faultString;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)object;
-(id)body;
-(BOOL)isFault;
@end
