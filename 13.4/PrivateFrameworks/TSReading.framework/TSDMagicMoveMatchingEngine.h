//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSDMagicMoveMatchingEngine : NSObject
{
    NSMutableArray *_matches;
}

+ (id)matchingEngine;
- (id)matchResults;
- (void)addMatches:(id)arg1;
- (void)addMatch:(id)arg1;
- (void)dealloc;
- (id)init;

@end

