//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol AVCaptureDataOutputDelegateOverride <NSObject>
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;
@property(readonly, nonatomic) id delegateOverride;
- (void)setDelegateOverride:(id)arg1 delegateOverrideCallbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
@end

