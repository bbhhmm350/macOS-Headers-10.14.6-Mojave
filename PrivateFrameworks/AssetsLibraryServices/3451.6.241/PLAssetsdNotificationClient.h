//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdNotificationClient : PLAssetsdBaseClient
{
}

- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (void)asyncNotifySuggestedCMMViewedForColletionID:(id)arg1;
- (void)asyncNotifySuggestedCMMNotificationForColletionID:(id)arg1 notificationDeliveryDate:(id)arg2;
- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;
- (void)asyncNotifyUserRespondedToMemoriesNotification;
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)arg1;
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4 notificationDeliveryDate:(id)arg5;
- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1 acceptInvitation:(BOOL)arg2;
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)arg1;

@end
