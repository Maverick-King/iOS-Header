//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterConfig : NSObject
{
    long long _videoResolution;
    int _videoSource;
    long long _codecType;
    struct tagHANDLE *_rtpHandle;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingParentID;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _keyFrameInterval;
    unsigned long long _recommendedMTU;
    unsigned long long _cvoExtensionID;
    _Bool _enableCVO;
    int _videoPayload;
    int _encodingMode;
    _Atomic unsigned char *_videoPriorityPointer;
}

@property(nonatomic) _Atomic unsigned char *videoPriorityPointer; // @synthesize videoPriorityPointer=_videoPriorityPointer;
@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) int videoPayload; // @synthesize videoPayload=_videoPayload;
@property(nonatomic) int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) int reportingParentID; // @synthesize reportingParentID=_reportingParentID;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (id)description;

@end

