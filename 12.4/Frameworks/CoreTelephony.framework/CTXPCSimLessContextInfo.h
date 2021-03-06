//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface CTXPCSimLessContextInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_uuid;
    NSString *_accountID;
}

+ (_Bool)supportsSecureCoding;
+ (id)contextWithUUID:(id)arg1 andAccountID:(id)arg2;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)context;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithUUID:(id)arg1 andAccountID:(id)arg2;

@end

