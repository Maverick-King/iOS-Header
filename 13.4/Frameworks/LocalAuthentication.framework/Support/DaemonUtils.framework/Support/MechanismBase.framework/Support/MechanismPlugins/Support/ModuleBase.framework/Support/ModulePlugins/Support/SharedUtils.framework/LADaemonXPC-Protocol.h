//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary, NSUUID;
@protocol LAContextCallbackXPC;

@protocol LADaemonXPC
- (void)notifyEvent:(long long)arg1 options:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)prearmTouchIdWithReply:(void (^)(id <LAPrearmContextXPC>, NSError *))arg1;
- (void)connectToContextWithUUID:(NSUUID *)arg1 callback:(id <LAContextCallbackXPC>)arg2 token:(NSData *)arg3 senderAuditTokenData:(NSData *)arg4 reply:(void (^)(id <LAContextXPC>, NSError *))arg5;
- (void)connectToExistingContext:(NSData *)arg1 callback:(id <LAContextCallbackXPC>)arg2 reply:(void (^)(id <LAContextXPC>, NSUUID *, NSError *))arg3;
@end

