//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageBox;

@interface MPSImageBox3D : MPSUnaryImageKernel
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _kernelDepth;
    MPSImageBox *_boxFilter;
}

+ (id)supportedPixelFormats;
+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, nonatomic) unsigned long long kernelDepth; // @synthesize kernelDepth=_kernelDepth;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 kernelDepth:(unsigned long long)arg4;

@end

