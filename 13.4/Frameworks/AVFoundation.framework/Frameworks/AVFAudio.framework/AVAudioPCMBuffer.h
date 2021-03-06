//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFAudio/AVAudioBuffer.h>

@class NSArray;

@interface AVAudioPCMBuffer : AVAudioBuffer
{
}

- (float)calculatePower:(unsigned long long)arg1 forFloatData:(float *)arg2 stride:(long long)arg3 frameLength:(unsigned int)arg4;
- (id)calculatePower:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *peakPowerPerChannel;
@property(readonly, nonatomic) NSArray *averagePowerPerChannel;
- (id)splitIntoSingleChannelBuffers;
- (_Bool)appendDataFromBuffer:(id)arg1 channel:(long long)arg2;
- (_Bool)appendDataFromBuffer:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) short **int16ChannelData;
@property(readonly, nonatomic) int **int32ChannelData;
@property(readonly, nonatomic) float **floatChannelData;
- (void)_initChannelPtrs;
@property(readonly, nonatomic) unsigned long long stride;
@property(nonatomic) unsigned int frameLength;
- (void)setByteLength:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int frameCapacity;
- (id)initWithPCMFormat:(id)arg1 frameCapacity:(unsigned int)arg2;

@end

