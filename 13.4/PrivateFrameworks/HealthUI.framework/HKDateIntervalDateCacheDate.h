//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HKDateIntervalDateCacheDate : NSObject
{
    NSDate *_date;
    long long _dateType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2;

@end

