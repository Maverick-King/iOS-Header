//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse
{
    _Bool _success;
    PKPeerPaymentRequestToken *_requestToken;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKPeerPaymentRequestToken *requestToken; // @synthesize requestToken=_requestToken;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2;
- (id)initWithData:(id)arg1;

@end

