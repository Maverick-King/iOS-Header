//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSSet, WFActionProvider;

@protocol WFActionProviderDelegate <NSObject>
- (void)actionProviderDidChange:(WFActionProvider *)arg1 updatedActions:(NSSet *)arg2 removedActions:(NSSet *)arg3 addedActions:(NSSet *)arg4;
@end

