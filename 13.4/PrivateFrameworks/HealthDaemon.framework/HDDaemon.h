//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemon-Protocol.h>
#import <HealthDaemon/HDTaskServerClassProvider-Protocol.h>
#import <HealthDaemon/HDXPCListenerDelegate-Protocol.h>

@class HDAnalyticsSubmissionCoordinator, HDBackgroundTaskScheduler, HDCloudSyncCoordinator, HDContentProtectionManager, HDDevicePowerMonitor, HDFeatureAvailabilityAssetManager, HDMaintenanceWorkCoordinator, HDPeriodicActivity, HDPluginManager, HDPrimaryProfile, HDProcessStateManager, HDProfileManager, HDQueryManager, HDTaskServerRegistry, HDWorkoutPluginDaemonExtension, HDXPCAlarmScheduler, HDXPCListener, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSURL, _HKBehavior;
@protocol HDDaemonTester, HDNanoAlertSuppressionService, OS_dispatch_queue;

@interface HDDaemon : NSObject <HDTaskServerClassProvider, HDDiagnosticObject, HDXPCListenerDelegate, HDHealthDaemon>
{
    _HKBehavior *_behavior;
    NSString *_healthDirectoryPath;
    struct os_unfair_lock_s _endpointLock;
    NSMutableSet *_endpoints;
    NSObject<OS_dispatch_queue> *_queue;
    int _languageChangeNotifyToken;
    HDBackgroundTaskScheduler *_backgroundTaskScheduler;
    HDContentProtectionManager *_contentProtectionManager;
    HDCloudSyncCoordinator *_cloudSyncCoordinator;
    HDPeriodicActivity *_periodicActivity;
    HDPluginManager *_pluginManager;
    HDProcessStateManager *_processStateManager;
    HDProfileManager *_profileManager;
    HDPrimaryProfile *_primaryProfile;
    struct MGNotificationTokenStruct *_deviceNameChangesToken;
    struct os_unfair_lock_s _daemonReadyLock;
    NSMutableArray *_daemonReadyBlocks;
    long long _numberOfDaemonReadyObserversBeforeReady;
    long long _numberOfDaemonReadyObserversAfterReady;
    _Bool _daemonReady;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _didStart
    NSDictionary *_daemonExtensionsByIdentifier;
    NSString *_medicalIDDirectoryPath;
    HDAnalyticsSubmissionCoordinator *_analyticsSubmissionCoordinator;
    id <HDNanoAlertSuppressionService> _alertSuppressionService;
    HDFeatureAvailabilityAssetManager *_featureAvailabilityAssetManager;
    HDMaintenanceWorkCoordinator *_maintenanceWorkCoordinator;
    HDQueryManager *_queryManager;
    HDXPCListener *_serviceListener;
    HDTaskServerRegistry *_taskServerRegistry;
    HDDevicePowerMonitor *_devicePowerMonitor;
    HDXPCAlarmScheduler *_alarmScheduler;
    id <HDDaemonTester> _daemonTester;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HDDaemonTester> daemonTester; // @synthesize daemonTester=_daemonTester;
@property(readonly, nonatomic) HDXPCAlarmScheduler *alarmScheduler; // @synthesize alarmScheduler=_alarmScheduler;
@property(readonly, nonatomic) HDDevicePowerMonitor *devicePowerMonitor; // @synthesize devicePowerMonitor=_devicePowerMonitor;
@property(readonly, nonatomic) HDTaskServerRegistry *taskServerRegistry; // @synthesize taskServerRegistry=_taskServerRegistry;
@property(readonly, nonatomic) HDXPCListener *serviceListener; // @synthesize serviceListener=_serviceListener;
@property(readonly, nonatomic) HDQueryManager *queryManager; // @synthesize queryManager=_queryManager;
@property(readonly, nonatomic) HDPrimaryProfile *primaryProfile; // @synthesize primaryProfile=_primaryProfile;
@property(readonly, nonatomic) HDMaintenanceWorkCoordinator *maintenanceWorkCoordinator; // @synthesize maintenanceWorkCoordinator=_maintenanceWorkCoordinator;
@property(readonly, nonatomic) HDFeatureAvailabilityAssetManager *featureAvailabilityAssetManager; // @synthesize featureAvailabilityAssetManager=_featureAvailabilityAssetManager;
@property(readonly, nonatomic) HDCloudSyncCoordinator *cloudSyncCoordinator; // @synthesize cloudSyncCoordinator=_cloudSyncCoordinator;
@property(retain, nonatomic) id <HDNanoAlertSuppressionService> alertSuppressionService; // @synthesize alertSuppressionService=_alertSuppressionService;
@property(retain, nonatomic) HDAnalyticsSubmissionCoordinator *analyticsSubmissionCoordinator; // @synthesize analyticsSubmissionCoordinator=_analyticsSubmissionCoordinator;
@property(readonly, copy) NSString *medicalIDDirectoryPath; // @synthesize medicalIDDirectoryPath=_medicalIDDirectoryPath;
- (void)unitTest_taskServerDidInit:(id)arg1;
- (void)unitTest_queryServerDidInit:(id)arg1;
- (void)unitTest_didCreateProfile:(id)arg1;
- (id)createXPCListenerWithMachServiceName:(id)arg1;
- (id)_newReferenceOntologyAsset;
- (id)_newProfileManager;
- (id)_newPluginManager;
- (id)_newBackgroundTaskScheduler;
- (id)_newProcessStateManager;
- (id)_newPrimaryProfile;
- (id)_newAnalyticsSubmissionCoordinator;
- (id)_newCloudSyncCoordinator;
- (id)_newContentProtectionManager;
- (id)_newBehavior;
- (id)diagnosticDescription;
@property(readonly, nonatomic) HDWorkoutPluginDaemonExtension *workoutPluginExtension;
@property(readonly, nonatomic) HDProfileManager *profileManager;
@property(readonly) HDPluginManager *pluginManager;
@property(readonly, nonatomic) HDProcessStateManager *processStateManager;
@property(readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property(readonly, nonatomic) HDContentProtectionManager *contentProtectionManager;
- (id)mainQueue;
@property(readonly, copy) NSURL *healthDirectoryURL;
@property(readonly, copy) NSString *healthDirectoryPath;
@property(readonly) _HKBehavior *behavior;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_resetPrivacySettings;
- (void)_updateCurrentDeviceName;
- (void)_registerForDeviceNameChanges;
- (id)healthDirectorySizeInBytes;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (void)_notifyDaemonReadyObservers;
- (void)registerDaemonReadyObserver:(id)arg1 queue:(id)arg2;
- (void)registerForDaemonReady:(id)arg1;
- (void)_handleSigterm;
- (void)_terminationCleanup;
- (void)_setupMemoryWarningHandler;
- (void)_handleLaunchServicesEvent:(id)arg1 name:(id)arg2;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpNotifydEventHandler;
- (void)_setUpLaunchEventHandlers;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_setUpSignalHandlers;
- (_Bool)_shouldInitializeDaemon;
- (void)exitClean:(_Bool)arg1 reason:(id)arg2;
- (void)_localeOrLanguageChanged:(id)arg1;
- (void)terminateClean:(_Bool)arg1 reason:(id)arg2;
- (id)_bundleIdentifiersToTerminateAfterObliteration;
- (void)obliterateAndTerminateWithOptions:(unsigned long long)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidateAllServersForProfile:(id)arg1;
- (void)invalidateAndWait;
- (void)endpointInvalidated:(id)arg1;
- (id)daemonExtensionsConformingToProtocol:(id)arg1;
- (id)daemonExtensionWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)start;
- (id)initWithHealthDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2;
- (id)initWithContainerDirectoryPath:(id)arg1;
- (id)init;
- (id)taskServerClasses;
- (id)healthDomainAccessorWithPairedDevice:(id)arg1;
- (id)IDSServiceWithIdentifier:(id)arg1;
- (id)pairedSyncCoordinatorWithServiceName:(id)arg1;
- (id)nanoPairedDeviceRegistry;
- (id)healthLiteUserDefaultsDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

