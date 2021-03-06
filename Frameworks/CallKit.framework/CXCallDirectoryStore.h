/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryStore : NSObject {
    CXDatabase * _database;
    bool  _temporary;
}

@property (nonatomic, retain) CXDatabase *database;
@property (nonatomic, readonly) long long schemaVersion;
@property (getter=isTemporary, nonatomic) bool temporary;
@property (nonatomic, readonly) NSURL *url;

+ (id)databaseTemplateURL;
+ (id)databaseURLUsingTemporaryDirectory:(bool)arg1 error:(id*)arg2;
+ (bool)initializeDatabaseIfNecessaryWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (long long)_findOrCreateIDForPhoneNumber:(long long)arg1 error:(id*)arg2;
- (id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (id)_identificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (bool)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (bool)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (bool)_removeUnreferencedLabelsWithError:(id*)arg1;
- (bool)_removeUnreferencedPhoneNumbersWithError:(id*)arg1;
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(long long)arg2;
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned long long)arg3;
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(long long)arg1;
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(long long)arg1 entryString:(id)arg2;
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2;
- (bool)addBlockingEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3;
- (bool)addBlockingEntryWithPhoneNumber:(long long)arg1 extensionID:(long long)arg2 error:(id*)arg3;
- (long long)addExtensionWithIdentifier:(id)arg1 error:(id*)arg2;
- (long long)addExtensionWithIdentifier:(id)arg1 priority:(long long)arg2 error:(id*)arg3;
- (bool)addIdentificationEntriesWithData:(id)arg1 extensionID:(long long)arg2 error:(id*)arg3;
- (bool)addIdentificationEntryWithPhoneNumber:(long long)arg1 labelID:(long long)arg2 extensionID:(long long)arg3 error:(id*)arg4;
- (long long)addLabel:(id)arg1 error:(id*)arg2;
- (bool)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id*)arg2;
- (bool)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id*)arg2;
- (bool)containsExtensionWithIdentifier:(id)arg1 priority:(long long*)arg2 error:(id*)arg3;
- (id)database;
- (void)dealloc;
- (id)description;
- (id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id*)arg2;
- (id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id*)arg2;
- (long long)idForLabel:(id)arg1 error:(id*)arg2;
- (long long)idForPhoneNumber:(long long)arg1 error:(id*)arg2;
- (id)identificationEntriesForPhoneNumber:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initForReadingAndWritingWithError:(id*)arg1;
- (id)initForReadingWithError:(id*)arg1;
- (id)initReadOnly:(bool)arg1 temporary:(bool)arg2 error:(id*)arg3;
- (bool)isTemporary;
- (bool)performTransactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)prioritizedExtensionIdentifiersWithError:(id*)arg1;
- (bool)removeExtensionWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)removeUnreferencedRecordsWithError:(id*)arg1;
- (long long)schemaVersion;
- (void)setDatabase:(id)arg1;
- (bool)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setTemporary:(bool)arg1;
- (id)url;
- (bool)vacuumWithError:(id*)arg1;

@end
