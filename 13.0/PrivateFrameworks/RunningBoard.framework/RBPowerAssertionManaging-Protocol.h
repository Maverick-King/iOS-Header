//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSString, RBProcess, RBProcessStateChangeSet, RBSProcessIdentity, RBSystemState;

@protocol RBPowerAssertionManaging <NSObject>
- (NSString *)_unitTest_nameOfPowerAssertionForProcess:(RBProcess *)arg1;
- (NSString *)_unitTest_nameOfPowerAssertionForSystem;
- (_Bool)_unitTest_hasPowerAssertionForProcess:(RBProcess *)arg1;
- (_Bool)_unitTest_hasSystemPowerAssertion;
- (void)removeProcess:(RBProcess *)arg1;
- (void)addProcess:(RBProcess *)arg1;
- (void)applySystemState:(RBSystemState *)arg1;
- (void)removeStateForProcessIdentity:(RBSProcessIdentity *)arg1;
- (void)didUpdateProcessStates:(RBProcessStateChangeSet *)arg1;
@end

