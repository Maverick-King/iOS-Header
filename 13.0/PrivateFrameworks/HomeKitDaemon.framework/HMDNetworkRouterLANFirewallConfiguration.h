//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterLANFirewall, HMDNetworkRouterLANFirewallRuleList, NSString;

@interface HMDNetworkRouterLANFirewallConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDNetworkRouterLANFirewall *_type;
    HMDNetworkRouterLANFirewallRuleList *_ruleList;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;
@property(retain, nonatomic) HMDNetworkRouterLANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterLANFirewall *type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 ruleList:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

