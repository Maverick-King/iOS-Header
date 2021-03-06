//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBForYouTodaySectionSpecificConfig : PBCodable <NSCopying>
{
    unsigned long long _cutoffTime;
    unsigned long long _headlinesPerFeedFetchCount;
    unsigned long long _subscriptionsFetchCount;
    int _fetchingBin;
    struct {
        unsigned int cutoffTime:1;
        unsigned int headlinesPerFeedFetchCount:1;
        unsigned int subscriptionsFetchCount:1;
        unsigned int fetchingBin:1;
    } _has;
}

@property(nonatomic) unsigned long long headlinesPerFeedFetchCount; // @synthesize headlinesPerFeedFetchCount=_headlinesPerFeedFetchCount;
@property(nonatomic) unsigned long long subscriptionsFetchCount; // @synthesize subscriptionsFetchCount=_subscriptionsFetchCount;
@property(nonatomic) unsigned long long cutoffTime; // @synthesize cutoffTime=_cutoffTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasFetchingBin;
@property(nonatomic) int fetchingBin; // @synthesize fetchingBin=_fetchingBin;
@property(nonatomic) _Bool hasHeadlinesPerFeedFetchCount;
@property(nonatomic) _Bool hasSubscriptionsFetchCount;
@property(nonatomic) _Bool hasCutoffTime;

@end

