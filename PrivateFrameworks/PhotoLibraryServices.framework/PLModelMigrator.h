/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, PLXPCTransaction, NSFileManager, NSDictionary;

@interface PLModelMigrator : NSObject  {
    double startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    long _photoLibraryOnce;
    NSDictionary *_syncedPropertiesByUUID;
}

@property(retain) NSFileManager * fileManager;
@property(readonly) PLPhotoLibrary * photoLibrary;

+ (void)forceImportFileSystemDataIntoDatabase;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (void)recalculateCachedCounts;
+ (BOOL)isPostProcessingLightweightMigration;
+ (BOOL)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id*)arg2;
+ (id)eventNameFromDate:(id)arg1;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int*)arg3;
+ (void)setDidImportFileSystemAssets:(BOOL)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (id)modelMigrator;
+ (id)sharedModelMigratorForImport;
+ (void)loadFileSystemDataIntoDatabase;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (void)_createDatabase;
+ (BOOL)_forceDupeAnalysis;
+ (BOOL)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (BOOL)_forceAnalyzeAllMoments;
+ (BOOL)_rebuildAllMomentsInStore:(id)arg1;
+ (BOOL)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (BOOL)_resetDupesAnalysisInStore:(id)arg1 resetHashes:(BOOL)arg2;
+ (BOOL)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (BOOL)_updateKindSubtypeForExistingPanoramaPhotosInStore:(id)arg1;
+ (BOOL)_resetThumbnailsAndInitiateRebuildRequest;
+ (BOOL)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (BOOL)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (BOOL)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (BOOL)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(BOOL)arg1;
+ (BOOL)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (BOOL)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (BOOL)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id*)arg2;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (id)_newSyncedPropertiesByAssetUUIDs:(BOOL)arg1;
+ (void)validateCurrentModelVersion;
+ (BOOL)postProcessThumbnailsOnly;
+ (BOOL)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (BOOL)shouldAttemptLightweightMigration;
+ (int)currentModelVersion;
+ (void)waitForDataMigratorToExit;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id)arg1;
+ (void)createDatabase;
+ (BOOL)restartingAfterOTAMigration;
+ (BOOL)restartingAfterRestoreFromBackup;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)generateAssetUUIDForPathPlist;
+ (BOOL)didImportFileSystemAssets;
+ (void)repairPotentialModelCorruption;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;

- (BOOL)_shouldReimportCameraRollAssets;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (id)fileManager;
- (id)importFileSystemImportAssets:(id)arg1 forceUpdate:(BOOL)arg2;
- (id)_orderedAssetsToImportCameraRollOnly:(BOOL)arg1;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(BOOL*)arg3 cameraRollOnly:(BOOL)arg4;
- (void)_importAllDCIMAssets;
- (void)setFileManager:(id)arg1;
- (id)initWithImplicitTransaction:(BOOL)arg1;
- (void)recalculateCachedCountsWithSemaphore:(id)arg1;
- (void)cleanupModelAfterRestoreFromiTunes;
- (void)loadFileSystemDataIntoDatabase;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
- (id)photoLibrary;
- (void)repairPotentialModelCorruption;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (id)init;
- (void)dealloc;

@end