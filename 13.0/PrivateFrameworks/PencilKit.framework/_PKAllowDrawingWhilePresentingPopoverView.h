//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol _PKAllowDrawingWhilePresentingPopoverViewDelegate;

@interface _PKAllowDrawingWhilePresentingPopoverView : UIView
{
    _Bool _isHitTesting;
    id <_PKAllowDrawingWhilePresentingPopoverViewDelegate> _delegate;
}

@property(nonatomic) _Bool isHitTesting; // @synthesize isHitTesting=_isHitTesting;
@property(nonatomic) __weak id <_PKAllowDrawingWhilePresentingPopoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_rootAncestorViewOfDimmmingView:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

