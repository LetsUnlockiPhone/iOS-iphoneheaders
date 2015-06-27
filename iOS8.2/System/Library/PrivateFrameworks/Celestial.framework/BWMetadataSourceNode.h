/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BWMetadataSourceNode : BWSourceNode {

	char _running;
	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(void)dealloc;
-(id)nodeSubType;
-(char)start:(id*)arg1 ;
-(void)appendMetadataSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(char)stop:(id*)arg1 ;
-(OpaqueCMClockRef)clock;
@end
