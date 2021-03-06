//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>
#import <PhotoLibraryServices/PLSyncableObject-Protocol.h>

@class NSString;

@protocol PLSyncablePerson <NSObject, PLSyncableObject>
@property(readonly, nonatomic) _Bool keyFaceIsPicked;
@property(readonly, nonatomic) _Bool isTombstone;
@property(readonly, nonatomic) _Bool graphVerified;
@property(readonly, nonatomic) _Bool userVerified;
@property(retain, nonatomic) NSString *fullName;
@property(retain, nonatomic) NSString *personUUID;
- (NSString *)syncDescription;
- (NSString *)pointerDescription;
- (void)setKeyFaceToPicked;
@end

