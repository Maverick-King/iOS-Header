//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem
{
    VKLabelMarker *_labelMarker;
}

+ (id)labelMarkerItemWithLabelMarker:(id)arg1;
- (void).cxx_destruct;
- (id)_place;
- (int)_venueFeatureType;
- (_Bool)_hasVenueFeatureType;
- (id)_venueInfo;
- (id)_styleAttributes;
- (_Bool)_isTransitDisplayFeature;
- (id)_identifier;
- (unsigned long long)_muid;
- (_Bool)_hasMUID;
- (id)_labelMarker;
- (_Bool)_hasResolvablePartialInformation;
- (CDStruct_c3b9c2ee)coordinate;
- (int)referenceFrame;
- (id)name;
- (_Bool)isValid;
- (id)initWithLabelMarker:(id)arg1;

@end

