/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MMCSServices/MMCSSimpleFile.h>

@interface MMCSPutFile : MMCSSimpleFile {

	/*^block*/id _block;
	/*^block*/id _updateBlock;

}

@property (copy) id completionBlock;                  //@synthesize block=_block - In the implementation block
@property (copy) id progressUpdateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)dealloc;
-(void)setProgress:(double)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)progressUpdateBlock;
-(void)setProgressUpdateBlock:(id)arg1 ;
@end

