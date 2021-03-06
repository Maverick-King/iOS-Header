//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

@class HMAction;

@interface HFActionBuilder : HFItemBuilder
{
}

+ (id)actionBuilderForAction:(id)arg1 inHome:(id)arg2;
+ (Class)homeKitRepresentationClass;
- (id)performValidation;
- (_Bool)hasSameTargetAsAction:(id)arg1;
- (_Bool)isEquivalentToAction:(id)arg1;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
- (id)createNewAction;
- (id)getOrCreateAction;
- (id)copyForCreatingNewAction;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (void)setAction:(id)arg1;
@property(readonly, nonatomic) HMAction *action;

@end

