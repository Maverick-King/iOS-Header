//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFAssembly-Protocol.h"

@class FRPrivateDataUpdateCoordinator, FRTodayAgent, NSString;
@protocol FRFeldsparContext;

@interface FRFeldsparContextAssembly : NSObject <NFAssembly>
{
    id <FRFeldsparContext> _feldsparContext;
    FRPrivateDataUpdateCoordinator *_privateDataUpdateCoordinator;
    FRTodayAgent *_todayAgent;
}

@property(retain, nonatomic) FRTodayAgent *todayAgent; // @synthesize todayAgent=_todayAgent;
@property(retain, nonatomic) FRPrivateDataUpdateCoordinator *privateDataUpdateCoordinator; // @synthesize privateDataUpdateCoordinator=_privateDataUpdateCoordinator;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithContext:(id)arg1 privateDataUpdateCoordiantor:(id)arg2 todayAgent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

