/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IMTranscoding.framework/XPCServices/IMTranscoderAgent.xpc/IMTranscoderAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IMTranscoder : NSObject
+(id)supportedUTIs;
+(BOOL)supportsUTI:(id)arg1 ;
-(long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6 ;
-(void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 highQualityMaxByteSize:(unsigned long long)arg5 lowQualityMaxByteSize:(unsigned long long)arg6 maxDimension:(unsigned long long)arg7 transcoderUserInfo:(id)arg8 representations:(long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(BOOL)transcodeProcessingRequired:(long long)arg1 ;
@end

