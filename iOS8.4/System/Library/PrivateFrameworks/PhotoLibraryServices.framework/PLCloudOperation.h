/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLCloudPhotoLibraryManager, PLCloudScenario, PLCloudOperationResource;

@interface PLCloudOperation : NSObject {

	PLCloudPhotoLibraryManager* _connection;
	BOOL _running;
	unsigned long long _cost;
	long long _createdAt;
	PLCloudScenario* _scenario;
	PLCloudOperationResource* _operationResource;

}

@property (nonatomic,readonly) unsigned long long cost;                                 //@synthesize cost=_cost - In the implementation block
@property (nonatomic,readonly) long long createdAt;                                     //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,readonly) PLCloudScenario * scenario;                              //@synthesize scenario=_scenario - In the implementation block
@property (nonatomic,readonly) PLCloudPhotoLibraryManager * connection;                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) PLCloudOperationResource * operationResource;              //@synthesize operationResource=_operationResource - In the implementation block
@property (assign) BOOL running;                                                        //@synthesize running=_running - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(PLCloudPhotoLibraryManager *)connection;
-(unsigned long long)cost;
-(id)resource;
-(PLCloudOperationResource *)operationResource;
-(void)requestCancel;
-(void)runOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithScenario:(id)arg1 cloudConnection:(id)arg2 ;
-(void)setOperationResource:(PLCloudOperationResource *)arg1 ;
-(long long)createdAt;
-(PLCloudScenario *)scenario;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)running;
@end

