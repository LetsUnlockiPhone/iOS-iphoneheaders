/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:26:14 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/KeyboardMigrator.migrator/KeyboardMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@class CPBitmapStore;

@interface KeyboardMigrator : DataClassMigrator {

	CPBitmapStore* _store;

}

@property (readonly) CPBitmapStore * store; 
-(id)dataClassName;
-(float)estimatedDuration;
-(CPBitmapStore *)store;
-(void)dealloc;
-(char)performMigration;
@end

