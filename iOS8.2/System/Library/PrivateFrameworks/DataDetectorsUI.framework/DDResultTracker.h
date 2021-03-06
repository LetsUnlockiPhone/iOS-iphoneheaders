/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
@class NSMutableArray;

@interface DDResultTracker : NSObject {

	unsigned countRemainingByCategory[6];
	unsigned totalCountRemaining;
	BOOL sortByProximity;
	unsigned referenceResultLocation;
	unsigned maximumDistanceForEmails;
	unsigned maximumDistance;
	DDResultRef existingAddressResult;
	NSMutableArray* resultsBefore;
	NSMutableArray* resultsAfter;
	DDResultRef referenceResult;

}

@property (readonly) unsigned totalCountRemaining; 
@property (assign) unsigned maximumDistanceForEmails; 
@property (assign) unsigned maximumDistance; 
-(void)setMaximumDistance:(unsigned)arg1 ;
-(unsigned)maximumDistance;
-(void)dealloc;
-(id)results;
-(id)initWithReferenceResult:(DDResultRef)arg1 ;
-(char)addResultIfAppropriate:(DDResultRef)arg1 ;
-(unsigned)totalCountRemaining;
-(unsigned)maximumDistanceForEmails;
-(void)setMaximumDistanceForEmails:(unsigned)arg1 ;
@end

