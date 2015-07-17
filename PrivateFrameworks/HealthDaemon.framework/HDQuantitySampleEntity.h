/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleEntity : HDSampleEntity

+ (Class)_associatedDataObjectClass;
+ (id)_databaseTable;
+ (id)_propertySettersForDataObject;
+ (BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (id)codableRepresentationEncoderForHealthDaemon:(id)arg1 database:(id)arg2;
+ (id)columnsDefinition;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)orderedPropertiesForCodableObjectQuery;
+ (id)sumOfSamplesWithDataType:(id)arg1 inDatabase:(id)arg2 predicate:(id)arg3;

@end