/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol OS_dispatch_group, OS_dispatch_semaphore, OS_dispatch_queue;
@class TSKAccessController, TSKChangeNotifier, NSString, NSDate, NSObject, NSMutableArray, NSConditionLock, TSCENamedReferenceManager, TSKChangeGroup;

@interface TSCECalculationEngine : TSPObject {

	TSKAccessController* mAccessController;
	TSKChangeNotifier* mChangeNotifier;
	TSCEDependencyTracker* mDependencyTracker;
	int mXLImportDateMode;
	NSString* mPreviousLocaleIdentifier;
	NSDate* mCurrentDate;
	int mRecalculationThreadState;
	opaque_pthread_t* mRecalculationThread;
	bool mShouldCancelRecalculationThread;
	unsigned mCalculationPauseCount;
	NSObject<OS_dispatch_group>* mRecalcDispatchGroup;
	int mRecalcDispatchGroupSize;
	NSObject<OS_dispatch_semaphore>* mModifiedOwnersSem;
	CFSetRef mModifiedOwnersInThisRecalcCycle;
	bool mShouldRefillRecalcQueue;
	CFDictionaryRef mReferenceResolvers;
	CFDictionaryRef mLegacyGlobalIDStringToOwnerIDDictionary;
	hash_set<TSCECellReference, TSCECellReferenceHash, TSCECellReferenceEqual, std::__1::allocator<TSCECellReference> >* mPendingDirtyCells;
	unsigned mBatchingDirtyCellMarkingLevel;
	NSMutableArray* mCalculationStateObservers;
	unsigned long long mSuppressWillModifyCallsLevel;
	NSConditionLock* mRecalculationInProgressConditionLock;
	unsigned long long mNumberOfFormulas;
	TSCENamedReferenceManager* mNamedReferenceManager;
	TSKChangeGroup* mPendingChangesForAsyncNotification;
	NSObject<OS_dispatch_queue>* mWriteMutualExclusionQueue;
	bool mDirtyAllFormulasInDocumentDidLoad;

}
+(id)functionLocalizationDictionary;
+(id)localizedTrueString;
+(id)localizedFalseString;
+(id)localizedFunctionCategoryDictionary;
+(void)loadLocalizedStrings;
+(id)localizedNameForFunction:(id)arg1 ;
+(id)localizedNamesForFunctions:(id)arg1 ;
+(id)functionNameForLocalizedString:(id)arg1 ;
+(id)supportedFunctions;
+(id)localizedTypeStringForArgumentType:(int)arg1 ;
+(bool)localizedStringIsTrue:(id)arg1 ;
+(bool)localizedStringIsFalse:(id)arg1 ;
+(id)localizedFunctionNameForMenuTag:(int)arg1 ;
+(id)localizedToolTipForFunction:(id)arg1 ;
+(id)localizedCategoryForFunction:(id)arg1 ;
+(id)localizedNameForArgument:(short)arg1 ofFunction:(id)arg2 ;
+(id)localizedToolTipForArgument:(short)arg1 ofFunction:(id)arg2 ;
+(id)localizedModeNameForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3 ;
+(id)localizedModeToolTipForArgument:(short)arg1 modeIndex:(short)arg2 ofFunction:(id)arg3 ;
+(id)localizedTrueStrings;
+(id)localizedFalseStrings;
+(id)localizedCategoryArray;
+(id)allLocalizedFunctions;
+(void)setTableReferenceInterfaceObject:(TSCETableReferenceInterface*)arg1 ;
-(id)allOwnerIDs;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(bool)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)saveToArchiver:(id)arg1 ;
-(bool)rangeIsWithinTable:(SCD_Struct_TS275*)arg1 ;
-(void)cellReferenceIsDirty:(const SCD_Struct_TS286*)arg1 ;
-(id)namedReferenceManager;
-(id)resolverForTableID:(CFUUIDRef)arg1 ;
-(bool)shouldCancelRecalculationThread;
-(void)updateCurrentDate;
-(void)pauseRecalculation;
-(void)p_addApplicationNotification;
-(void)p_removeApplicationNotification;
-(id)changeNotifier;
-(int)preferredDispatchQueueSize;
-(void)p_enqueueTaskForCell:(SCD_Struct_TS286*)arg1 ;
-(void)p_recalcOneCellHoldingReadLock:(SCD_Struct_TS286*)arg1 formulaOwner:(id)arg2 hasExistingCalculatedPrecedents:(bool)arg3 isInACycle:(bool)arg4 ;
-(SCD_Struct_TS286*)p_refillRecalcQueue;
-(bool)recalcHoldingReadLock;
-(void)recalcHoldingWriteLock;
-(void)invalidateAfterRecalc;
-(bool)allCellsAreClean;
-(void)startRecalculationThread;
-(void)beginSuppressingWillModifyCalls;
-(void)endSuppressingWillModifyCalls;
-(int)forwardRegisterOwnerWithOwnerID:(CFUUIDRef)arg1 legacyGlobalID:(id)arg2 ;
-(void)replaceFormula:(SCD_Struct_TS287)arg1 inOwner:(CFUUIDRef)arg2 precedentIterator:(/*function pointer*/ void*)arg3 userData:(void*)arg4 hasRandomVolatileFunctions:(bool*)arg5 ;
-(int)dirtyCellCount;
-(bool)isCellReferenceDirty:(SCD_Struct_TS286*)arg1 ;
-(bool)recalculationIsPaused;
-(void)resumeRecalculation;
-(void)blockUntilRecalcIsCompleteOnNewThreadUntilDate:(id)arg1 ;
-(void)stopRecalculationThread;
-(id)p_stringForRangeReference:(SCD_Struct_TS275*)arg1 hostTableID:(CFUUIDRef)arg2 contextSheetName:(id)arg3 stickyBits:(unsigned char)arg4 isRangeWithFunction:(bool)arg5 quoteComponents:(bool)arg6 forceEscaping:(bool)arg7 ;
-(SCD_Struct_TS267)parseStringAsGeometricReferenceComponent:(id)arg1 inResolver:(id)arg2 outStickyBits:(char*)arg3 gettingReferencesMatchingInputAsPrefix:(id*)arg4 ;
-(SCD_Struct_TS275*)parseStringAsReferenceComponentIntersection:(id)arg1 inResolver:(id)arg2 inTableNamed:(id)arg3 preferredGeometricResolver:(id)arg4 defaultResolver:(id)arg5 outStickyBits:(char*)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 requireFullMatches:(bool)arg8 filterColons:(bool)arg9 ;
-(SCD_Struct_TS275*)parseStringAsReference:(id)arg1 tableName:(id)arg2 rest:(id)arg3 contextResolver:(id)arg4 contextSheetName:(id)arg5 gettingReferencesMatchingInputAsPrefix:(id*)arg6 gettingStickyBits:(char*)arg7 filterColons:(bool)arg8 referenceIsComplete:(bool)arg9 ;
-(void)ownerIsDirty:(CFUUIDRef)arg1 ;
-(void)setAccessController:(id)arg1 ;
-(id)accessController;
-(void)setChangeNotifier:(id)arg1 ;
-(void)documentDidLoad;
-(void)recalculateWithTimeout:(double)arg1 ;
-(int)xlImportDateMode;
-(void)setXLImportDateMode:(int)arg1 ;
-(id)previousLocaleIdentifier;
-(int)registerOwnerWithOwnerID:(CFUUIDRef)arg1 owner:(id)arg2 referenceResolver:(id)arg3 ;
-(void)unregisterOwner:(CFUUIDRef)arg1 ;
-(bool)ownerIsRegistered:(CFUUIDRef)arg1 ;
-(bool)allOwnersRegistered;
-(void)clearLegacyGlobalIDs;
-(CFUUIDRef)ownerIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(bool)arg2 ;
-(void)setOwnerIDForLegacyGlobalID:(id)arg1 ownerID:(CFUUIDRef)arg2 ;
-(void)addFormula:(SCD_Struct_TS287)arg1 inOwner:(CFUUIDRef)arg2 precedentIterator:(/*function pointer*/ void*)arg3 userData:(void*)arg4 hasRandomVolatileFunctions:(bool*)arg5 ;
-(void)removeFormula:(SCD_Struct_TS287)arg1 inOwner:(CFUUIDRef)arg2 ;
-(void)removeAllFormulasFromOwner:(CFUUIDRef)arg1 ;
-(void)removeFormulasFromRange:(SCD_Struct_TS275*)arg1 ;
-(int)dirtyCellCountInOwner:(CFUUIDRef)arg1 ;
-(bool)cellIsInACycle:(SCD_Struct_TS286*)arg1 ;
-(bool)referenceWasGuaranteedCleanAtRecalcCycleStart:(SCD_Struct_TS289*)arg1 ;
-(id)rewriteFormulasWithSpec:(id)arg1 ;
-(void)headerStateOfTableChanged:(CFUUIDRef)arg1 changeIsForColumns:(bool)arg2 ;
-(void)updateDirtyPrecedentCountsForRemovedIndex:(int)arg1 inTable:(CFUUIDRef)arg2 forColumns:(bool)arg3 ;
-(void)rangeReferenceIsDirty:(SCD_Struct_TS275*)arg1 ;
-(void)allFunctionsAreDirty;
-(void)indirectCallsAreDirty;
-(void)detectAndRepairConsistencyViolations;
-(void)timeVolatileFunctionsAreDirty;
-(void)randomVolatileFunctionsAreDirty;
-(void)localeVolatileFunctionsAreDirty;
-(void)locationVolatileFunctionsAreDirty;
-(void)compassVolatileFunctionsAreDirty;
-(void)geometryVolatileFunctionsAreDirtyInOwner:(CFUUIDRef)arg1 ;
-(bool)cellContainsAFormula:(SCD_Struct_TS286*)arg1 ;
-(void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1 ;
-(void)executeBlockWhileCalculationEngineIsNotWriting:(/*^block*/ id)arg1 ;
-(void)beginBatchingDirtyCellMarking;
-(void)endBatchingDirtyCellMarking;
-(void)evaluateNextFormula;
-(SCD_Struct_TS267)cellCoordForCellHandle:(SCD_Struct_TS267)arg1 inTable:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS268)rangeCoordForCellHandleRange:(SCD_Struct_TS268)arg1 inTable:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS267)cellHandleForCellCoord:(SCD_Struct_TS267)arg1 inTable:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS268)cellHandleRangeForRangeCoord:(SCD_Struct_TS268)arg1 inTable:(CFUUIDRef)arg2 ;
-(bool)referenceIsValid:(SCD_Struct_TS275*)arg1 ;
-(id)stringForRangeReference:(SCD_Struct_TS275*)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(bool)arg4 ;
-(id)stringForRangeReference:(SCD_Struct_TS275*)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(bool)arg4 ;
-(id)escapedStringForRangeReference:(SCD_Struct_TS275*)arg1 hostTableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(bool)arg4 forceEscaping:(bool)arg5 ;
-(id)escapedStringForRangeReference:(SCD_Struct_TS275*)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 isRangeWithFunction:(bool)arg4 forceEscaping:(bool)arg5 ;
-(hash_set<TSCECReference, TSCECReferenceHash, TSCECReferenceEqual, std::__1::allocator<TSCECReference> >*)precedentsOfCell:(SCD_Struct_TS286*)arg1 ;
-(SCD_Struct_TS275*)parseStringAsReference:(id)arg1 contextResolver:(id)arg2 contextSheetName:(id)arg3 gettingSpecifiedSheetName:(id*)arg4 gettingSpecifiedTableName:(id*)arg5 gettingRest:(id*)arg6 gettingReferencesMatchingInputAsPrefix:(id*)arg7 gettingStickyBits:(char*)arg8 filterColons:(bool)arg9 referenceIsComplete:(bool)arg10 ;
-(void)addCalculationStateObserver:(id)arg1 ;
-(void)removeCalculationStateObserver:(id)arg1 ;
-(unsigned long long)numberOfCellsWithFormulas;
-(void)assertDirtyPrecedentsCountConsistency;
-(void)assertAllDirtyCellsAreOnLeafStack;
-(id)allCellDependenciesAsString;
-(id)allSpanningDependenciesAsString;
-(id)allWholeOwnerDependenciesAsString;
-(hash_set<TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<TSUColumnRowCoordinate> >*)cellCoordinatesNeedingExcelImportForTable:(CFUUIDRef)arg1 ;
-(id)currentDate;
-(id)retain;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)documentRoot;
@end

