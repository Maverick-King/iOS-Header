//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <boringssl/OS_boringssl_ctx_callback-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface boringssl_concrete_boringssl_ctx_callback : NSObject <OS_boringssl_ctx_callback>
{
    unsigned short callback_type;
    CDUnknownBlockType add_callback;
    CDUnknownBlockType free_callback;
    CDUnknownBlockType parse_callback;
}

- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

