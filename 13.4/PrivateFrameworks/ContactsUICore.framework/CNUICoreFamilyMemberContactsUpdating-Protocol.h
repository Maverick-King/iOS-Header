//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CNFuture, NSArray;

@protocol CNUICoreFamilyMemberContactsUpdating
- (CNFuture *)updateContactWhitelistByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactWhitelistByAddingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByRemovingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByUpdatingContacts:(NSArray *)arg1;
- (CNFuture *)updateContactListByAddingContacts:(NSArray *)arg1;
@end

