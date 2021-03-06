//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSImageTransformExport-Protocol.h>

@class NUImageTransformAffine;

@interface NUJSImageTransform : NUJSProxy <NUJSImageTransformExport>
{
}

- (id)transformByRotate:(double)arg1;
- (id)transformByTranslateX:(double)arg1 translateY:(double)arg2;
- (id)transformByScaleX:(double)arg1 scaleY:(double)arg2;
- (id)description;
@property(readonly) NUImageTransformAffine *transform;
- (id)initWithImageTransform:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

