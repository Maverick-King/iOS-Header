//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNCrossChannelNormalizationGradient : MPSCNNGradientKernel
{
    unsigned long long _kernelSize;
    float _alpha;
    float _beta;
    float _delta;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) float delta; // @synthesize delta=_delta;
@property(nonatomic) float beta; // @synthesize beta=_beta;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) unsigned long long kernelSize; // @synthesize kernelSize=_kernelSize;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelSize:(unsigned long long)arg2;

@end

