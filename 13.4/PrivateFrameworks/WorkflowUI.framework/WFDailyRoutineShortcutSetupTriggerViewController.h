//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class WFDailyRoutineShortcutSetupTriggerBuilder;
@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController
{
    id <WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupTriggerBuilder *_trigger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectSkipButton;
- (void)didSelectAddTriggerButton;
- (id)initWithTrigger:(id)arg1;

@end

