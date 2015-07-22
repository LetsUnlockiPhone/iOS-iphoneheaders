/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface EKDirectorySearchQuery : NSObject {

	BOOL _findGroups;
	BOOL _findLocations;
	BOOL _findResources;
	BOOL _findUsers;
	NSSet* _terms;
	unsigned long long _resultLimit;

}

@property (nonatomic,retain) NSSet * terms;                               //@synthesize terms=_terms - In the implementation block
@property (assign,nonatomic) BOOL findGroups;                             //@synthesize findGroups=_findGroups - In the implementation block
@property (assign,nonatomic) BOOL findLocations;                          //@synthesize findLocations=_findLocations - In the implementation block
@property (assign,nonatomic) BOOL findResources;                          //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) BOOL findUsers;                              //@synthesize findUsers=_findUsers - In the implementation block
@property (assign,nonatomic) unsigned long long resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
-(NSSet *)terms;
-(void)setTerms:(NSSet *)arg1 ;
-(BOOL)findGroups;
-(void)setFindGroups:(BOOL)arg1 ;
-(BOOL)findLocations;
-(void)setFindLocations:(BOOL)arg1 ;
-(BOOL)findResources;
-(void)setFindResources:(BOOL)arg1 ;
-(BOOL)findUsers;
-(void)setFindUsers:(BOOL)arg1 ;
-(void)setResultLimit:(unsigned long long)arg1 ;
-(unsigned long long)resultLimit;
@end
