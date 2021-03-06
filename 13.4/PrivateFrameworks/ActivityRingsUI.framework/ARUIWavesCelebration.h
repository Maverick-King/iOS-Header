//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityRingsUI/ARUICelebration.h>

@class CAMediaTimingFunction;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUIWavesCelebration : ARUICelebration
{
    _Bool _active;
    CAMediaTimingFunction *_timingFunction;
    float _transitionDuration;
    float _completionBeginTime;
    float _completionEndTime;
    CDUnknownBlockType _completion;
    float _revealPercent;
    unsigned int _waveCount;
    unsigned int _pointCount;
    unsigned int _computeCount;
    id <MTLBuffer> _waveVertexBuffer;
    id <MTLBuffer> _waveIndexBuffer;
    unsigned long long _numWaveIndicies;
    id <MTLBuffer> _waveComputeUniforms;
    id <MTLBuffer> _wavePoints;
    id <MTLBuffer> _waveFragmentUniforms;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <MTLBuffer> waveFragmentUniforms; // @synthesize waveFragmentUniforms=_waveFragmentUniforms;
@property(readonly, nonatomic) id <MTLBuffer> wavePoints; // @synthesize wavePoints=_wavePoints;
@property(readonly, nonatomic) unsigned int computeCount; // @synthesize computeCount=_computeCount;
@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) unsigned int waveCount; // @synthesize waveCount=_waveCount;
@property(readonly, nonatomic) id <MTLBuffer> waveComputeUniforms; // @synthesize waveComputeUniforms=_waveComputeUniforms;
@property(readonly, nonatomic) float revealPercent; // @synthesize revealPercent=_revealPercent;
@property(readonly, nonatomic) unsigned long long numWaveIndicies; // @synthesize numWaveIndicies=_numWaveIndicies;
@property(readonly, nonatomic) id <MTLBuffer> waveIndexBuffer; // @synthesize waveIndexBuffer=_waveIndexBuffer;
@property(readonly, nonatomic) id <MTLBuffer> waveVertexBuffer; // @synthesize waveVertexBuffer=_waveVertexBuffer;
- (void)storeCelebration:(id)arg1 withRing:(id)arg2;
- (void)setContrastColor: /* Error: Ran out of types for this method. */;
- (void)setBottomColor: /* Error: Ran out of types for this method. */;
- (void)setTopColor: /* Error: Ran out of types for this method. */;
- (unsigned long long)waveFragmentOffsetForWaveAtIndex:(unsigned int)arg1;
- (unsigned long long)wavePointsOffsetForWaveAtIndex:(unsigned int)arg1;
- (void)_setupWavePoints;
- (unsigned long long)waveComputeUniformsOffsetForType:(unsigned long long)arg1;
- (void)_updateComputeUniforms;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)update:(double)arg1;
- (unsigned long long)type;
- (id)init;

@end

