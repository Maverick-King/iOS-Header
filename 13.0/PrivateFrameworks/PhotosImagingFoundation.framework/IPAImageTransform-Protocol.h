//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol IPAImageGeometry, IPAImageTransform;

@protocol IPAImageTransform
- (id <IPAImageTransform>)inverseTransform;
- (_Bool)canAlignToPixelsExactly;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
- (id <IPAImageGeometry>)intrinsicGeometry;
- (id <IPAImageGeometry>)inputGeometry;
@end

