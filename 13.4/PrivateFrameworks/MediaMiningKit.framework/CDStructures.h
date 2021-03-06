//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CLSRoutineServiceStatisticsStruct {
    _Bool routineAvailable;
    unsigned long long numberOfLocationsOfInterest;
    unsigned long long numberOfVisits;
    unsigned long long numberOfTransitions;
    unsigned long long numberOfTimeMatches;
    unsigned long long numberOfCloseByLocationMatches;
    unsigned long long numberOfRemoteLocationMatches;
    unsigned long long numberOfMatchRequests;
    double pinningVisitsRatio;
};

struct _CLSLRUMemoryCacheList {
    unsigned long long _field1;
    struct _CLSLRUMemoryCacheListElement *_field2;
    struct _CLSLRUMemoryCacheListElement *_field3;
};

struct _CLSLRUMemoryCacheListElement {
    id _field1;
    struct _CLSLRUMemoryCacheListElement *_field2;
    struct _CLSLRUMemoryCacheListElement *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct in_addr {
    unsigned int _field1;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long numberOfLocations;
    unsigned long long numberOfResolvedLocations;
    unsigned long long numberOfUnneededLocations;
    unsigned long long numberOfRequests;
    unsigned long long batchSize;
} CDStruct_95c2efd7;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

