/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObject : NSObject {
    NSMutableDictionary * _cachedProperties;
    NSMutableDictionary * _dirtyProperties;
    unsigned long  _flags;
    EKObjectRelation * _owningRelation;
    EKPersistentObject * _persistentObject;
    NSString * _propertyName;
    NSMutableDictionary * _relations;
    NSMutableSet * _weakRelations;
}

@property (nonatomic, retain) NSMutableDictionary *cachedProperties;
@property (nonatomic, retain) NSMutableDictionary *dirtyProperties;
@property (nonatomic, retain) EKEventStore *eventStore;
@property (nonatomic) unsigned long flags;
@property (nonatomic, readonly) BOOL hasChanges;
@property (getter=isNew, nonatomic, readonly) BOOL new;
@property (nonatomic) EKObjectRelation *owningRelation;
@property (nonatomic, retain) EKPersistentObject *persistentObject;
@property (nonatomic, copy) NSString *propertyName;
@property (nonatomic, retain) NSMutableDictionary *relations;
@property (nonatomic, retain) NSMutableSet *weakRelations;

- (void).cxx_destruct;
- (void)addWeakRelation:(id)arg1;
- (BOOL)boolPropertyForKey:(id)arg1 withPersistentFallback:(id /* block */)arg2;
- (void)cachePropertyValue:(id)arg1 forKey:(id)arg2;
- (id)cachedProperties;
- (void)childRelationChanged:(id)arg1;
- (void)clearPropertyValueForKey:(id)arg1;
- (id)committedValueForKey:(id)arg1;
- (void)dealloc;
- (void)deletePersistentObject;
- (void)didCommit;
- (id)dirtyProperties;
- (id)eventStore;
- (BOOL)existsInStore;
- (void)faultPropertiesWithNames:(id)arg1;
- (unsigned long)flags;
- (BOOL)hasChanges;
- (id)initWithPersistentObject:(id)arg1;
- (void)insertPersistentObjectIfNeeded;
- (int)intPropertyForKey:(id)arg1 withPersistentFallback:(id /* block */)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNew;
- (BOOL)isPropertyDirty:(id)arg1;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)objectID;
- (id)owner;
- (id)owningRelation;
- (id)persistentObject;
- (id)persistentOrDirtyPropertyForKey:(id)arg1;
- (id)propertyForKey:(id)arg1 withPersistentFallback:(id /* block */)arg2;
- (id)propertyName;
- (id)propertyValueForKey:(id)arg1;
- (BOOL)propertyValueForKey:(id)arg1 value:(id*)arg2;
- (BOOL)rebase;
- (BOOL)refresh;
- (id)relationForKey:(id)arg1;
- (id)relations;
- (void)removeWeakRelation:(id)arg1;
- (void)reset;
- (void)rollback;
- (void)setCachedProperties:(id)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)setFlags:(unsigned long)arg1;
- (void)setOwningRelation:(id)arg1;
- (void)setPersistentObject:(id)arg1;
- (void)setPropertyName:(id)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setRelations:(id)arg1;
- (void)setWeakRelations:(id)arg1;
- (void)updatePersistentObject;
- (void)updatePersistentObjectSkippingProperties:(id)arg1;
- (void)updatePersistentValueForKeyIfNeeded:(id)arg1;
- (BOOL)validate:(id*)arg1;
- (id)weakRelations;

@end
