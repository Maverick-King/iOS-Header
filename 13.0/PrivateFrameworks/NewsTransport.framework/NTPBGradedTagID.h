//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBGradedTagID : PBCodable <NSCopying>
{
    int _grade;
    int _source;
    NSString *_tagId;
    struct {
        unsigned int grade:1;
        unsigned int source:1;
    } _has;
}

@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) _Bool hasGrade;
@property(nonatomic) int grade; // @synthesize grade=_grade;
@property(readonly, nonatomic) _Bool hasTagId;

@end

