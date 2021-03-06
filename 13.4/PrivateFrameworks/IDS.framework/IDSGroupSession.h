//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _IDSGroupSession;

@interface IDSGroupSession : NSObject
{
    _IDSGroupSession *_internal;
}

- (void).cxx_destruct;
- (id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3;
- (void)requestActiveParticipants;
- (void)setPreferences:(id)arg1;
- (void)leaveGroupSession;
- (void)joinWithOptions:(id)arg1;
- (void)setParticipantInfo:(id)arg1;
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(_Bool)arg3;
- (id)_internal;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) unsigned int sessionEndedReason;
- (unsigned int)state;
@property(readonly, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *sessionID;
- (id)_internal_sessionWithValidityCheck;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 options:(id)arg2;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;

@end

