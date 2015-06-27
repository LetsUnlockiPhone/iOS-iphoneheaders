/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation {

	UIPDFPageRenderJob* _job;
	BOOL executing;
	BOOL finished;

}

@property (retain) UIPDFPageRenderJob * job;              //@synthesize job=_job - In the implementation block
-(void)completeOperation;
-(void)dealloc;
-(void)start;
-(void)main;
-(id)initWithJob:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(UIPDFPageRenderJob *)job;
-(void)setJob:(UIPDFPageRenderJob *)arg1 ;
@end
