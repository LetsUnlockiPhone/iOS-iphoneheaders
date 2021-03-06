/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class TSKDocumentRoot, NSMutableArray, TSKCommandGroup, TSKCommandSelectionBehavior, NSMutableIndexSet, TSKChangeGroup, TSKCommand, TSKCommandHistory, TSKCommandSelectionBehaviorHistory, TSKAccessController;

@interface TSKCommandController : NSObject {

	TSKDocumentRoot* _documentRoot;
	NSMutableArray* _commandQueue;
	TSKCommandGroup* _currentGroup;
	unsigned _currentGroupOpenCount;
	BOOL _isAutomaticGroupOpen;
	BOOL _automaticGroupNeedsClose;
	BOOL _isClosingAutomaticGroup;
	NSMutableArray* _automaticGroupCloseHandlers;
	unsigned _indexOfGroupThatSetCurrentSelectionBehavior;
	TSKCommandSelectionBehavior* _currentSelectionBehavior;
	NSMutableIndexSet* _progressiveEnqueuingEnabledIndexes;
	TSKChangeGroup* _changeGroup;
	TSKCommand* _executingCommand;
	TSKCommandGroup* _committedLastChanceCommands;
	BOOL _isInLastChanceWrite;
	BOOL _isUndoing;
	BOOL _isRedoing;
	TSKCommandHistory* _historyOverride;
	NSMutableArray* _historyOverrides;
	TSKCommandSelectionBehaviorHistory* _selectionBehaviorHistoryOverride;
	BOOL _processingChanges;
	unsigned _enableUndoRedoCount;

}

@property (readonly) TSKCommandGroup * currentGroup;                                                                                           //@synthesize currentGroup=_currentGroup - In the implementation block
@property (readonly) int groupingLevel; 
@property (getter=isProgressiveEnqueuingInCurrentGroupEnabled,nonatomic,readonly) BOOL progressiveEnqueuingInCurrentGroupEnabled; 
@property (getter=isAutomaticGroupingEnabled,nonatomic,readonly) BOOL automaticGroupingEnabled;                                                //@synthesize isAutomaticGroupOpen=_isAutomaticGroupOpen - In the implementation block
@property (readonly) TSKDocumentRoot * documentRoot; 
@property (readonly) TSKAccessController * accessController; 
@property (nonatomic,readonly) TSKCommandHistory * p_history; 
@property (nonatomic,readonly) TSKCommandSelectionBehaviorHistory * p_selectionBehaviorHistory; 
+(BOOL)executingInCommandCommitPhase;
-(id)accessController;
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)currentGroup;
-(void)openGroup;
-(void)closeGroup;
-(void)openGroupWithSelectionBehavior:(id)arg1 ;
-(void)enqueueCommand:(id)arg1 withSelectionBehavior:(id)arg2 ;
-(void)enableProgressiveEnqueuingInCurrentGroup;
-(void)rejectMark;
-(void)acceptMark;
-(void)closeGroupWithSelectionBehavior:(id)arg1 ;
-(void)p_performCommitForCommandQueueItem:(id)arg1 ;
-(void)p_performUndoForCommandQueueItem:(id)arg1 ;
-(void)p_performRedoForCommandQueueItem:(id)arg1 ;
-(void)p_addSelectionBehavior:(id)arg1 ;
-(void)p_openGroupAtIndex:(unsigned)arg1 ;
-(BOOL)isProgressiveEnqueuingInCurrentGroupEnabled;
-(void)p_performCommitForRemainingCommandsInCurrentGroup;
-(void)p_closeAutomaticGroupIfAppropriate;
-(void)p_enableProgressiveEnqueuingInGroupAtIndex:(unsigned)arg1 ;
-(BOOL)p_willCommitRemainingCommandsInGroup:(id)arg1 ;
-(void)p_commitRemainingCommandsInGroup:(id)arg1 ;
-(void)p_completeCommitForRemainingCommandsInGroup:(id)arg1 ;
-(void)protected_willCommitCommands:(id)arg1 ;
-(void)p_writeWhileCollectingChangesForCommandPhase:(int)arg1 usingBlock:(/*^block*/ id)arg2 ;
-(void)p_completePostingCollectedChanges;
-(id)p_history;
-(void)p_enqueueCommand:(id)arg1 phase:(int)arg2 withSelectionBehavior:(id)arg3 ;
-(void)p_restoreUndoRedoState:(id)arg1 ;
-(void)p_serviceCommandQueue;
-(BOOL)p_processCommandQueueItem:(id)arg1 ;
-(void)p_commitCommandQueueItem:(id)arg1 ;
-(void)p_completeCommitForCommandQueueItem:(id)arg1 shouldAddToHistory:(id)arg2 ;
-(id)p_selectionBehaviorHistory;
-(void)p_postHistoryChangedNotificationDueToFieldEditing:(BOOL)arg1 ;
-(id)undoActionString;
-(id)redoActionString;
-(unsigned)p_undoCount;
-(void)rejectPendingPreflightCommand;
-(void)p_undoCommandQueueItem:(id)arg1 ;
-(void)p_completeUndoRedoForCommandQueueItem:(id)arg1 ;
-(unsigned)p_redoCount;
-(void)p_redoCommandQueueItem:(id)arg1 ;
-(void)protected_lastChanceWrite;
-(void)p_postSyncPhaseChanges:(id)arg1 ;
-(void)p_postAsyncPhaseChanges:(id)arg1 ;
-(id)executingCommand;
-(void)p_postChanges:(id)arg1 forSyncPhase:(BOOL)arg2 ;
-(void)p_undoPendingPreflightCommand;
-(void)p_completeUndoPendingPreflightCommand;
-(void)enableAutomaticGroupingUntilNextEventWithCloseHandler:(/*^block*/ id)arg1 ;
-(void)forceCloseAutomaticGroup;
-(BOOL)canCoalesce;
-(void)enableUndoRedo;
-(void)disableUndoRedo;
-(void)protected_commitLastChanceCommand:(id)arg1 ;
-(void)protected_performIndirectCommand:(id)arg1 fromCommand:(id)arg2 ;
-(void)beginFieldEditing;
-(BOOL)isInsideModalEditingSession;
-(void)endFieldEditing;
-(BOOL)processingChanges;
-(BOOL)isAutomaticGroupingEnabled;
-(BOOL)isRedoing;
-(void)undoNestedGroup;
-(void)dealloc;
-(BOOL)canUndo;
-(BOOL)canRedo;
-(void)undo;
-(void)redo;
-(int)groupingLevel;
-(BOOL)isUndoing;
-(void)enqueueCommand:(id)arg1 ;
-(void)mark;
-(id)documentRoot;
@end

