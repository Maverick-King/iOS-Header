//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBOrderedRequesters : NSObject
{
    NSMutableArray *_bands[4];
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (void)prioritizeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (_Bool)containsRequester:(id)arg1 inBand:(int)arg2;
- (id)requesters;
- (id)lowestPriorityRequester;
- (id)highestPriorityRequester;
- (id)init;

@end

