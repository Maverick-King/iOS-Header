//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDashBoardAction;
@protocol SBDashBoardParticipating;

@protocol SBDashBoardActionHandling <NSObject>
- (void)handleAction:(SBDashBoardAction *)arg1 fromSender:(id <SBDashBoardParticipating>)arg2;
@end

