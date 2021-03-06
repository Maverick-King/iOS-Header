//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CarCard-Protocol.h"
#import "NSCopying-Protocol.h"

@class CarCardView, NSArray, NSDictionary, NSString, UILayoutGuide, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface CarCardConfiguration : NSObject <CarCard, NSCopying>
{
    CDStruct_c638d987 _lastLayout;
    unsigned long long _invalidationState;
    _Bool _hidden;
    _Bool _transitioning;
    _Bool _useNightMode;
    UIViewController *_content;
    unsigned long long _accessory;
    UIView *_accessoryView;
    unsigned long long _nightModeBehavior;
    CDUnknownBlockType _selectionHandler;
    NSString *_key;
    CarCardView *_cardView;
    NSArray *_showingConstraints;
    NSArray *_hidingConstraints;
    NSArray *_viewportConstraints;
    NSArray *_mapInsetsConstraints;
    NSArray *_collisionConstraints;
    NSDictionary *_collisionLayoutGuides;
    UILayoutGuide *_contentLayoutGuide;
    UIViewController *_previousContent;
    CDStruct_c638d987 _layout;
}

@property(nonatomic) __weak UIViewController *previousContent; // @synthesize previousContent=_previousContent;
@property(readonly, nonatomic) unsigned long long invalidationState; // @synthesize invalidationState=_invalidationState;
@property(nonatomic, getter=shouldUseNightMode) _Bool useNightMode; // @synthesize useNightMode=_useNightMode;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
@property(readonly, nonatomic) NSDictionary *collisionLayoutGuides; // @synthesize collisionLayoutGuides=_collisionLayoutGuides;
@property(readonly, nonatomic) NSArray *collisionConstraints; // @synthesize collisionConstraints=_collisionConstraints;
@property(readonly, nonatomic) NSArray *mapInsetsConstraints; // @synthesize mapInsetsConstraints=_mapInsetsConstraints;
@property(readonly, nonatomic) NSArray *viewportConstraints; // @synthesize viewportConstraints=_viewportConstraints;
@property(readonly, nonatomic) NSArray *hidingConstraints; // @synthesize hidingConstraints=_hidingConstraints;
@property(readonly, nonatomic) NSArray *showingConstraints; // @synthesize showingConstraints=_showingConstraints;
@property(readonly, nonatomic) CarCardView *cardView; // @synthesize cardView=_cardView;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) unsigned long long nightModeBehavior; // @synthesize nightModeBehavior=_nightModeBehavior;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) unsigned long long accessory; // @synthesize accessory=_accessory;
@property(nonatomic) CDStruct_c638d987 layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIViewController *content; // @synthesize content=_content;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long effectiveEdgesAffectingMapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets effectiveMargins;
@property(readonly, nonatomic) unsigned long long effectiveCornerPosition;
@property(readonly, nonatomic) unsigned long long effectiveEdgePosition;
- (void)updateVisibility;
- (struct CGRect)collisionLayoutGuideFrameForEdge:(unsigned long long)arg1;
- (id)_collisionLayoutGuidesForHost:(id)arg1;
- (id)_collisionConstraintsForHost:(id)arg1;
- (id)_mapInsetsConstraintsForHost:(id)arg1;
- (id)_viewportConstraintsForHost:(id)arg1;
- (id)_hidingLayoutConstraintsForHost:(id)arg1;
- (id)_showingLayoutConstraintsForHost:(id)arg1;
- (id)_sharedLayoutConstraintsForHost:(id)arg1;
- (void)_prepareConstraintsForHost:(id)arg1;
- (void)_resetConstraints;
- (void)_applyToCardView;
- (void)layoutInHost:(id)arg1;
@property(readonly, nonatomic) unsigned long long focusSortValue;
- (void)reset;
- (void)clear;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

