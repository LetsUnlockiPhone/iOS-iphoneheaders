/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/DownloadInstaller.h>

@class Download;

@interface SoftwareDownloadInstaller : DownloadInstaller {

	Download* _softwareDownload;

}
-(id)initWithDownloadStep:(id)arg1 entity:(id)arg2 ;
-(id)installDownloadFiles;
-(void)_monitorForTerminationOfBundleID:(id)arg1 ;
-(id)_newSoftwareProperties;
-(void)dealloc;
@end
