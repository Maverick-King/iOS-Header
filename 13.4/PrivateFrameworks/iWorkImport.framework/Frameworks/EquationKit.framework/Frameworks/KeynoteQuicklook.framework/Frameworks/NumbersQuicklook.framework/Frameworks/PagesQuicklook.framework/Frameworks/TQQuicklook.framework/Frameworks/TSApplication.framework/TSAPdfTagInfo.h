//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TSAPdfTagInfo : NSObject
{
    int _tagType;
    NSDictionary *_tagProperties;
}

+ (id)tagPropertiesWithActualText:(id)arg1 alternativeText:(id)arg2 titleText:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *tagProperties; // @synthesize tagProperties=_tagProperties;
@property(readonly, nonatomic) int tagType; // @synthesize tagType=_tagType;
- (id)initWithTagType:(int)arg1 tagProperties:(id)arg2;

@end

