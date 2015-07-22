/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class IMMessage, NSString, NSURL, NSDictionary, NSError;


@protocol CKFileTransfer <NSObject>
@property (nonatomic,retain) IMMessage * IMMessage; 
@property (nonatomic,copy,readonly) NSString * guid; 
@property (nonatomic,copy,readonly) NSURL * fileURL; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSDictionary * transcoderUserInfo; 
@property (nonatomic,copy,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long currentBytes; 
@property (nonatomic,readonly) unsigned long long totalBytes; 
@property (getter=isFileURLFinalized,nonatomic,readonly) BOOL fileURLFinalized; 
@property (getter=isFileDataReady,nonatomic,readonly) BOOL fileDataReady; 
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@required
-(BOOL)isDownloadable;
-(NSURL *)fileURL;
-(IMMessage *)IMMessage;
-(BOOL)isFileDataReady;
-(BOOL)isRestoring;
-(void)mediaObjectRemoved;
-(void)mediaObjectAdded;
-(NSDictionary *)transcoderUserInfo;
-(BOOL)isFileURLFinalized;
-(id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;
-(id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
-(unsigned long long)currentBytes;
-(void)setIMMessage:(id)arg1;
-(NSError *)error;
-(NSString *)filename;
-(NSString *)guid;
-(unsigned long long)totalBytes;
-(BOOL)isDownloading;

@end
