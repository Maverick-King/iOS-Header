//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDiagramPointMapper.h>

__attribute__((visibility("hidden")))
@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper
{
    double mStartAngle;
    double mStopAngle;
    _Bool mDrawArrows;
    unsigned long long mSegmentIndex;
    unsigned long long mSegmentCount;
}

- (id)transformPresentationName;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)_arrowFillWithState:(id)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;
- (void)setSegmentIndex:(unsigned long long)arg1;
- (void)setDrawArrows:(_Bool)arg1;
- (void)setStopAngle:(double)arg1;
- (void)setStartAngle:(double)arg1;

@end

