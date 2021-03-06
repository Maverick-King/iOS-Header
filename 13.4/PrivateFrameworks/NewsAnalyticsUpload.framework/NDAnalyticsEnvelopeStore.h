//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsAnalyticsUpload/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsAnalyticsUpload/NDAnalyticsEnvelopeStore-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, NSString;
@protocol NDAnalyticsEnvelopeStoreObserver;

@interface NDAnalyticsEnvelopeStore : NSObject <FCCacheCoordinatorDelegate, NDAnalyticsEnvelopeStore>
{
    id <NDAnalyticsEnvelopeStoreObserver> _observer;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
- (void)_reportEnvelopesToNewsAutomationIfNeeded:(id)arg1;
- (void)_deleteEnvelopesForKeysFromStore:(id)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)envelopesForEntries:(id)arg1;
- (id)sizesOfEnvelopesWithEntries:(id)arg1;
- (id)allEntriesWithHoldToken:(id *)arg1;
@property(nonatomic) __weak id <NDAnalyticsEnvelopeStoreObserver> observer; // @synthesize observer=_observer;
- (void)enableFlushing;
- (void)deleteEnvelopesForEntries:(id)arg1;
- (void)copyEnvelopes:(id)arg1;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

