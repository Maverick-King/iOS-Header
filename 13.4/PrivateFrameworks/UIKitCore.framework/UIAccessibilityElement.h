//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIResponder.h>

#import <UIKitCore/UIAccessibilityIdentification-Protocol.h>
#import <UIKitCore/UIFocusItem-Protocol.h>
#import <UIKitCore/UIFocusItemContainer-Protocol.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>
#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>

@class NSArray, NSString, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

@interface UIAccessibilityElement : UIResponder <UIFocusItem, UIFocusItemContainer, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, UIAccessibilityIdentification>
{
    _Bool _areChildrenFocused;
    struct CGRect _accessibilityFrameInContainerSpace;
}

@property(nonatomic) struct CGRect accessibilityFrameInContainerSpace; // @synthesize accessibilityFrameInContainerSpace=_accessibilityFrameInContainerSpace;
- (id)nextResponder;
- (id)_firstViewAncestor;
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)_updateFocusLayerFrame;
- (void)_destroyFocusLayer;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) struct CGRect accessibilityFrame;
@property(retain, nonatomic) NSString *accessibilityValue;
@property(retain, nonatomic) NSString *accessibilityHint;
@property(retain, nonatomic) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (void)dealloc;
- (id)initWithAccessibilityContainer:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id accessibilityContainer; // @dynamic accessibilityContainer;
@property(copy, nonatomic) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

