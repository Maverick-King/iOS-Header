//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCServerZone, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFetchRecordSubResourcesOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCServerZone *_serverZone;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_recordsWithXattrsToFetch;
    NSObject<OS_dispatch_group> *_recordsBeingFetchedGroup;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSObject<OS_dispatch_source> *_xattrFetchingSource;
    NSError *_error;
    _Bool _isDoneFetchingRecords;
}

- (void).cxx_destruct;
- (void)_scheduleXattrFetch;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)stop;
- (void)cancel;
- (void)stopWithError:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)startWithParentOperation:(id)arg1;
- (void)waitUntilRecordsAreFetched;
@property(readonly, nonatomic) NSDictionary *recordsByID; // @synthesize recordsByID=_recordsByID;
- (void)removeAllRecords;
- (void)removeRecordByID:(id)arg1;
- (void)addRecord:(id)arg1;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)createActivity;
- (id)initWithServerZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

