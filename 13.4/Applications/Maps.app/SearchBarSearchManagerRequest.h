//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AutocompleteContext, NSString;

__attribute__((visibility("hidden")))
@interface SearchBarSearchManagerRequest : NSObject
{
    NSString *_searchName;
    unsigned int _searchMode;
    AutocompleteContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AutocompleteContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;

@end

