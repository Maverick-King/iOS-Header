//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer
{
    struct CGSize _outputSize;
    UIColor *_tintColor;
    _Bool _usesSaturationFilter;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesSaturationFilter; // @synthesize usesSaturationFilter=_usesSaturationFilter;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
- (id)_saturationBackgroundImageWithSize:(struct CGSize)arg1;
- (id)imageForImage:(id)arg1;

@end

