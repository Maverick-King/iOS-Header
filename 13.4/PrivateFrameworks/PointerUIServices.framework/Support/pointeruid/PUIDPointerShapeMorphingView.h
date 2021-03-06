//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PUIDPointerSettings, PUIDShapeView, UIBezierPath, UIViewFloatAnimatableProperty;

@interface PUIDPointerShapeMorphingView : UIView
{
    UIViewFloatAnimatableProperty *_animatableProperty;
    UIView *_animationCircleView;
    UIView *_animationContainerView;
    unsigned long long _animationGenerationID;
    PUIDShapeView *_animationShapeView;
    UIView *_animationSnapshotView;
    UIView *_containerView;
    UIView *_filteredView;
    struct os_unfair_lock_s _lock;
    PUIDPointerSettings *_settings;
    PUIDShapeView *_shapeView;
    UIBezierPath *_path;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void)_resetToStableStateWithPath:(id)arg1;
- (void)setPath:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

