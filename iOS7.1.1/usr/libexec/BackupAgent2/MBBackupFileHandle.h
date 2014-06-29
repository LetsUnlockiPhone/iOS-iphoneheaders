/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:27 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/BackupAgent2
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackupAgent2/BackupAgent2-Structs.h>
#import <BackupAgent2/MBFileHandleProxy.h>

@class MBDriveBackupEngine, MBFile, MBDigest;

@interface MBBackupFileHandle : MBFileHandleProxy {

	MBDriveBackupEngine* _engine;
	MBFile* _file;
	MBDigest* _digest;
	double _startTime;
	unsigned long _bytesReadSinceLastModificationCheck;
	BOOL _shouldCheckForModifications;

}
-(int)readWithBytes:(void*)arg1 length:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 fileHandle:(id)arg2 file:(id)arg3 ;
-(BOOL)_isModifiedWithStat:(stat*)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end
