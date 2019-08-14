//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumberFormatter, NSString;
@protocol OS_dispatch_semaphore;

@interface PLLibraryMigrationMessageTracer : NSObject
{
    NSString *_validationSignature;
    BOOL _upgradeOccurred;
    BOOL _is_auto_promote;
    BOOL _is_default_location;
    BOOL _is_default_name;
    BOOL _is_system_library;
    BOOL _result;
    BOOL _libSizingStarted;
    NSString *_error;
    NSString *_client_id;
    NSString *_client_version;
    NSString *_from_lib_version;
    NSString *_to_lib_version;
    double _duration_start;
    double _duration_end;
    double _dur_pre_handoff;
    double _check_permissions_0_start;
    double _check_permissions_0_end;
    double _repair_permissions_1_start;
    double _repair_permissions_1_end;
    double _clone_upgrade_2_start;
    double _clone_upgrade_2_end;
    double _rebuild_3_start;
    double _rebuild_3_end;
    double _upgrade_4_start;
    double _upgrade_4_end;
    double _reclone_upgrade_5_start;
    double _reclone_upgrade_5_end;
    double _reupgrade_6_start;
    double _reupgrade_6_end;
    NSString *_signature;
    NSString *_volume;
    NSString *_fs_type;
    unsigned long long _lib_size;
    NSString *_plmu_version;
    NSNumberFormatter *_twoDigitBucketFormatter;
    NSNumberFormatter *_threeDigitBucketFormatter;
    NSObject<OS_dispatch_semaphore> *_libSizeSemaphore;
}

@property BOOL libSizingStarted; // @synthesize libSizingStarted=_libSizingStarted;
@property(retain) NSObject<OS_dispatch_semaphore> *libSizeSemaphore; // @synthesize libSizeSemaphore=_libSizeSemaphore;
@property(retain) NSNumberFormatter *threeDigitBucketFormatter; // @synthesize threeDigitBucketFormatter=_threeDigitBucketFormatter;
@property(retain) NSNumberFormatter *twoDigitBucketFormatter; // @synthesize twoDigitBucketFormatter=_twoDigitBucketFormatter;
@property BOOL result; // @synthesize result=_result;
@property(copy) NSString *plmu_version; // @synthesize plmu_version=_plmu_version;
@property unsigned long long lib_size; // @synthesize lib_size=_lib_size;
@property BOOL is_system_library; // @synthesize is_system_library=_is_system_library;
@property BOOL is_default_name; // @synthesize is_default_name=_is_default_name;
@property BOOL is_default_location; // @synthesize is_default_location=_is_default_location;
@property BOOL is_auto_promote; // @synthesize is_auto_promote=_is_auto_promote;
@property(copy) NSString *fs_type; // @synthesize fs_type=_fs_type;
@property(copy) NSString *volume; // @synthesize volume=_volume;
@property(copy) NSString *signature; // @synthesize signature=_signature;
@property double reupgrade_6_end; // @synthesize reupgrade_6_end=_reupgrade_6_end;
@property double reupgrade_6_start; // @synthesize reupgrade_6_start=_reupgrade_6_start;
@property double reclone_upgrade_5_end; // @synthesize reclone_upgrade_5_end=_reclone_upgrade_5_end;
@property double reclone_upgrade_5_start; // @synthesize reclone_upgrade_5_start=_reclone_upgrade_5_start;
@property double upgrade_4_end; // @synthesize upgrade_4_end=_upgrade_4_end;
@property double upgrade_4_start; // @synthesize upgrade_4_start=_upgrade_4_start;
@property double rebuild_3_end; // @synthesize rebuild_3_end=_rebuild_3_end;
@property double rebuild_3_start; // @synthesize rebuild_3_start=_rebuild_3_start;
@property double clone_upgrade_2_end; // @synthesize clone_upgrade_2_end=_clone_upgrade_2_end;
@property double clone_upgrade_2_start; // @synthesize clone_upgrade_2_start=_clone_upgrade_2_start;
@property double repair_permissions_1_end; // @synthesize repair_permissions_1_end=_repair_permissions_1_end;
@property double repair_permissions_1_start; // @synthesize repair_permissions_1_start=_repair_permissions_1_start;
@property double check_permissions_0_end; // @synthesize check_permissions_0_end=_check_permissions_0_end;
@property double check_permissions_0_start; // @synthesize check_permissions_0_start=_check_permissions_0_start;
@property double dur_pre_handoff; // @synthesize dur_pre_handoff=_dur_pre_handoff;
@property double duration_end; // @synthesize duration_end=_duration_end;
@property double duration_start; // @synthesize duration_start=_duration_start;
@property(copy) NSString *to_lib_version; // @synthesize to_lib_version=_to_lib_version;
@property(copy) NSString *from_lib_version; // @synthesize from_lib_version=_from_lib_version;
@property(copy) NSString *client_version; // @synthesize client_version=_client_version;
@property(copy) NSString *client_id; // @synthesize client_id=_client_id;
@property(retain) NSString *error; // @synthesize error=_error;
@property BOOL upgradeOccurred; // @synthesize upgradeOccurred=_upgradeOccurred;
- (void).cxx_destruct;
- (int)unifiedLibraryVersionAtRoot:(id)arg1 requirePathIsRoot:(BOOL)arg2;
- (BOOL)checkSandboxForPath:(id)arg1;
- (int)libraryVersionAtRoot:(id)arg1 requirePathIsRoot:(BOOL)arg2;
- (void)recordToLibraryVersion:(id)arg1;
- (void)recordFromLibraryVersion:(id)arg1;
- (void)recordFromLibraryVersionForURL:(id)arg1;
- (long long)bucketSizeValue:(unsigned long long)arg1;
- (long long)bucketTimeValue:(long long)arg1;
- (long long)safeLong:(double)arg1;
- (long long)boolToLong:(BOOL)arg1;
- (void)logToMessageTracerReportingFailure;
- (void)logToMessageTracerReportingSuccess;
- (void)logToMessageTracer;
- (void)endSecondRDUpgrade;
- (void)startSecondRDUpgrade;
- (void)endRecloneAndUpgrade;
- (void)startRecloneAndUpgrade;
- (void)endRDUpgrade;
- (void)startRDUpgrade;
- (void)endRebuild;
- (void)startRebuild;
- (void)endCloneAndUpgrade;
- (void)startCloneAndUpgrade;
- (void)endRepairPermissions;
- (void)startRepairPermissions;
- (void)endCheckPermissions;
- (void)startCheckPermissions;
- (void)endPreHandoff;
- (void)endMigration;
- (void)startMigration;
- (void)setValidationSignature:(id)arg1;
- (void)addToSignature:(id)arg1;
- (void)recordDefaultNameState:(BOOL)arg1;
- (void)recordDefaultLocationState:(BOOL)arg1;
- (void)recordSystemLibraryState:(BOOL)arg1;
- (void)recordFileSystemInfoForURL:(id)arg1;
- (void)recordAutoPromoteState:(BOOL)arg1;
- (void)recordError:(id)arg1;
- (void)recordDurPreHandoff:(id)arg1;
- (void)calculateAndRecordLibrarySizeForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recordPLMUVersion:(id)arg1;
- (id)initWithClientID:(id)arg1 andVersion:(id)arg2;

@end
