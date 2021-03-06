/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine> {
    HDProfile * _profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_performSyncSession:(id)arg1 error:(id*)arg2;
- (long long)_receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 error:(id*)arg3;
- (void)_resetStore:(id)arg1;
- (BOOL)_sendChanges:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (BOOL)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id*)arg4;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id*)arg3;
- (BOOL)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 predicate:(id)arg3 startAnchor:(long long*)arg4 finalAnchor:(long long)arg5 postTransactionBlocks:(id)arg6 error:(id*)arg7;
- (int)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (BOOL)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id*)arg3;
- (BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 error:(id*)arg5;
- (BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (BOOL)applySyncObjectCollection:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (BOOL)performSyncSession:(id)arg1 error:(id*)arg2;
- (id)profile;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (void)resetStore:(id)arg1;
- (void)setProfile:(id)arg1;

@end
