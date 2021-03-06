//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTTimer, NSString;

@protocol MTTimerServer <NSObject>
- (void)repeatTimerWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)dismissTimerWithIdentifier:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)removeTimer:(MTTimer *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)updateTimer:(MTTimer *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)addTimer:(MTTimer *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)getTimersWithCompletion:(void (^)(NSArray *, MTTimer *, NSError *))arg1;
- (void)checkIn;
@end

