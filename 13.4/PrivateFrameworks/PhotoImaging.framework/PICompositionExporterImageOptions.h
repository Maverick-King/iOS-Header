//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions
{
    _Bool _optimizeForSharing;
    NUImageExportFormat *_imageExportFormat;
    CDUnknownBlockType _metadataProcessor;
}

- (void).cxx_destruct;
@property _Bool optimizeForSharing; // @synthesize optimizeForSharing=_optimizeForSharing;
@property(copy) CDUnknownBlockType metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;
@property(copy) NUImageExportFormat *imageExportFormat; // @synthesize imageExportFormat=_imageExportFormat;
- (id)imageExportFormatForURL:(id)arg1;
- (void)setImageExportFormatJpegWithQuality:(double)arg1;

@end

