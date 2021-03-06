//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSBundleProxy;

__attribute__((visibility("hidden")))
@interface _UIActivityBundleHelper : NSObject
{
    LSBundleProxy *_bundleProxy;
}

+ (id)activityBundleHelperForExtension:(id)arg1;
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
- (void).cxx_destruct;
- (double)preferredImageScale;
- (id)activityImageForApplicationBundleURL:(id)arg1 applicationIconFormat:(int)arg2 activityCategory:(long long)arg3;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;
- (id)debugDescription;
- (id)initWithBundleProxy:(id)arg1;
- (id)init;

@end

