//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
{
}

+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (unsigned int)payloadVersion;
+ (id)payloadClassID;
+ (id)modelProperties;
+ (id)nonPersistedModelPropertiesDescription;
- (void)migrateMergedPayload;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)_fixHasLocationSmartAlbum;

@end

