//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitionViewController.h"

@class TouchIDAlertHeaderView, UIAlertController, UIColor;

@interface TouchIdViewController : TransitionViewController
{
    UIAlertController *_alertController;
    TouchIDAlertHeaderView *_headerView;
    _Bool _dismissed;
    _Bool _showAlert;
    _Bool _fallbackVisible;
    _Bool _showFallback;
    UIColor *_tintColor;
}

- (void).cxx_destruct;
- (void)dismissChildWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_setActionButtons;
- (void)_enterPassword;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)loadView;
- (void)didReceiveAuthenticationData;

@end

