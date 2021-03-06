//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>
#import <NeutrinoCore/NSMutableCopying-Protocol.h>
#import <NeutrinoCore/NUMutableBuffer-Protocol.h>

@class NSString, NUBufferStorage, NUPixelFormat;
@protocol NUMutableBuffer;

@interface NUMutablePixelBuffer : NSObject <NUMutableBuffer, NSCopying, NSMutableCopying>
{
    NUBufferStorage *_storage;
    id <NUMutableBuffer> _buffer;
}

- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newRenderDestination;
- (id)privateInit;
- (void *)mutableBytesAtPoint:(CDStruct_912cb5d2)arg1;
- (const void *)bytesAtPoint:(CDStruct_912cb5d2)arg1;
- (void)dealloc;
@property(readonly, nonatomic) void *mutableBytes;
@property(readonly, nonatomic) const void *bytes;
@property(readonly, nonatomic) long long rowBytes;
@property(readonly, nonatomic) NUPixelFormat *format;
@property(readonly, nonatomic) CDStruct_912cb5d2 size;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

