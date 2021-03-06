//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SensorKit/NSCopying-Protocol.h>

@class NSData, NSDictionary;

@interface SRFetchResult : NSObject <NSCopying>
{
    double _timestamp;
    NSData *_sampleData;
    NSDictionary *_metadata;
    Class _sampleClass;
}

+ (id)new;
+ (void)initialize;
@property(retain) Class sampleClass; // @synthesize sampleClass=_sampleClass;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSData *sampleData; // @synthesize sampleData=_sampleData;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy) id sample;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 timestamp:(double)arg2 metadata:(id)arg3 sampleClass:(Class)arg4;
- (id)init;

@end

