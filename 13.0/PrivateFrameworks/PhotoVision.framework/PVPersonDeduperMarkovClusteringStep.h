//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperMarkovClusteringStep : PVPersonDeduperStep
{
}

+ (id)markovClustering:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)name;

@end

