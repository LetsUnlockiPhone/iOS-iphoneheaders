/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:25 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ArtistImageImporter;

@interface ArtistImageRequestHandler : NSObject {

	ArtistImageImporter* _importer;

}
+(id)handler;
-(void)handleMessage:(unsigned long long)arg1 withDictionary:(id)arg2 forClientConnection:(id)arg3 ;
-(void)cancelAllOperations;
-(void).cxx_destruct;
-(void)updateArtistImagesWithCompletionHandler:(/*^block*/ id)arg1 ;
@end
