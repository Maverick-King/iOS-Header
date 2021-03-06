//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTimeCheckpoints, PBUnknownFields;

@interface GEOETAStep : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    int _zilchPointIndex;
    struct {
        unsigned int has_distanceRemaining:1;
        unsigned int has_expectedTime:1;
        unsigned int has_stepID:1;
        unsigned int has_zilchPointIndex:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasDistanceRemaining;
@property(nonatomic) unsigned int distanceRemaining;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
@property(readonly, nonatomic) _Bool hasTimeCheckpoints;
@property(nonatomic) _Bool hasZilchPointIndex;
@property(nonatomic) int zilchPointIndex;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) unsigned int expectedTime;
@property(nonatomic) _Bool hasStepID;
@property(nonatomic) unsigned int stepID;

@end

