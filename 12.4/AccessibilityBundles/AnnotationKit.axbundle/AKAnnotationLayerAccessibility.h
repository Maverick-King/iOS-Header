//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__AKAnnotationLayerAccessibility_super.h"

@interface AKAnnotationLayerAccessibility : __AKAnnotationLayerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityMakeAnnotation:(id)arg1 larger:(_Bool)arg2;
- (_Bool)_accessibilityShrinkAnnotation;
- (_Bool)_accessibilityExpandAnnotation;
- (id)accessibilityCustomActions;
- (void)_accessibilityZoomIn:(_Bool)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;

@end

