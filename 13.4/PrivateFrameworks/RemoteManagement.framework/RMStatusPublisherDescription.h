//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RMStatusPublisherDescription : NSObject
{
    NSArray *_keyPaths;
    NSString *_principalClassName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *principalClassName; // @synthesize principalClassName=_principalClassName;
@property(readonly, copy, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
- (id)initWithKeyPaths:(id)arg1 principalClassName:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

