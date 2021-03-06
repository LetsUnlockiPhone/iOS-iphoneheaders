/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AEAnnotationProvider;


@protocol BKPaginationOperationController
@property (nonatomic,readonly) AEAnnotationProvider * bookAnnotationProvider; 
@required
-(id)bookLanguage;
-(id)titleForChapterAtPageNumber:(unsigned)arg1;
-(unsigned)pageNumberForLocation:(id)arg1;
-(AEAnnotationProvider *)bookAnnotationProvider;
-(int)bookDirection;
-(id)bookDatabaseKey;
-(unsigned)jobGeneration;
-(void)addResultSentinel:(id)arg1;
-(id)bookObjectID;
-(void)addLayoutJob:(id)arg1;
-(void)addLayoutCompleteJob:(id)arg1;
-(void)addResultJob:(id)arg1;
-(void)addTOCParseJob:(id)arg1;
-(void)addTOCResultJob:(id)arg1;
-(int)incrementBatchProgress;
-(void)batchEnded:(char)arg1;
-(id)paginationRevision;
-(char)bookShouldDisableOptimizeSpeed;
-(id)persistentStoreCoordinator;

@end

