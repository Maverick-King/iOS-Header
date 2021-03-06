//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WFTemperatureUnitObserver : NSObject
{
    int _userTemperatureUnit;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_blockObserversForUUID;
    NSHashTable *_observerObjects;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)sharedObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property int userTemperatureUnit; // @synthesize userTemperatureUnit=_userTemperatureUnit;
@property(retain) NSHashTable *observerObjects; // @synthesize observerObjects=_observerObjects;
@property(retain) NSMutableDictionary *blockObserversForUUID; // @synthesize blockObserversForUUID=_blockObserversForUUID;
@property(retain) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
- (void).cxx_destruct;
- (void)removeAllObservers;
- (void)_updateTemperatureUnit;
- (_Bool)removeBlockObserverWithHandle:(id)arg1;
- (id)addBlockObserver:(CDUnknownBlockType)arg1;
- (_Bool)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) int temperatureUnit;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

