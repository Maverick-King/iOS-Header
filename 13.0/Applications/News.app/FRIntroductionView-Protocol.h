//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITraitCollection;

@protocol FRIntroductionView <NSObject>
@property(readonly, nonatomic) _Bool hasAnimation;
- (double)spacingToTitleForTraitCollection:(UITraitCollection *)arg1 inViewOfSize:(struct CGSize)arg2;
- (struct CGSize)sizeForTraitCollection:(UITraitCollection *)arg1;
- (void)playAnimation;
@end

