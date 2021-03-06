//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSHomeAffordanceControlling-Protocol.h>

@class BSAnimationSettings, NSString, SBNotificationHomeAffordanceController, UIPanGestureRecognizer;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBDashBoardHomeAffordanceController : NSObject <CSHomeAffordanceControlling>
{
    SBNotificationHomeAffordanceController *_notificationHomeAffordanceController;
}

- (void).cxx_destruct;
- (id)keyboardAssertionForGestureWindow:(id)arg1;
- (void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
- (void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property(readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

