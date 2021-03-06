/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLManyToMany;

@interface NSSQLCorrelation : NSObject {

	NSSQLManyToMany* _manyToMany;
	long long _fk;
	long long _invfk;
	unsigned _fok;
	unsigned _invfok;

}
-(id)initWithManyToMany:(id)arg1 fk:(long long)arg2 invfk:(long long)arg3 fok:(unsigned)arg4 invfok:(unsigned)arg5 ;
-(id)manyToMany;
-(long long)fk;
-(long long)invfk;
-(unsigned)fok;
-(unsigned)invfok;
-(void)dealloc;
-(id)description;
@end

