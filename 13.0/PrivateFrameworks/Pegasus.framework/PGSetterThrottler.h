//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PGSetterThrottler : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    id _value;
    NSObject<OS_dispatch_queue> *_throttleQueue;
    id _throttledValue;
    _Bool _busy;
    _Bool _pending;
}

- (void).cxx_destruct;
- (void)_setValue;
@property(retain, nonatomic) id value;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1 usingQueue:(id)arg2;

@end

