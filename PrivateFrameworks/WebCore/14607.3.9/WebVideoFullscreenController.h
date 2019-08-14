//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebVideoFullscreenController : NSObject
{
    struct RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext>> _context;
    struct RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement>> _videoElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v24@0:8^{VideoFullscreenControllerContext=^^?{WeakPtrFactory<WebCore::VideoFullscreenModel>={RefPtr<WTF::WeakReference<WebCore::VideoFullscreenModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::VideoFullscreenModel> > >=^{WeakReference<WebCore::VideoFullscreenModel>}}}^^?^^?{WeakPtrFactory<WebCore::VideoFullscreenChangeObserver>={RefPtr<WTF::WeakReference<WebCore::VideoFullscreenChangeObserver>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::VideoFullscreenChangeObserver> > >=^{WeakReference<WebCore::VideoFullscreenChangeObserver>}}}^^?{WeakPtrFactory<WebCore::PlaybackSessionModel>={RefPtr<WTF::WeakReference<WebCore::PlaybackSessionModel>, WTF::DumbPtrTraits<WTF::WeakReference<WebCore::PlaybackSessionModel> > >=^{WeakReference<WebCore::PlaybackSessionModel>}}}^^?{atomic<unsigned int>=AI}{HashSet<WebCore::PlaybackSessionModelClient *, WTF::PtrHash<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *> >={HashTable<WebCore::PlaybackSessionModelClient *, WebCore::PlaybackSessionModelClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *> >=^^{PlaybackSessionModelClient}IIII}}{HashSet<WebCore::VideoFullscreenModelClient *, WTF::PtrHash<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *> >={HashTable<WebCore::VideoFullscreenModelClient *, WebCore::VideoFullscreenModelClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *> >=^^{VideoFullscreenModelClient}IIII}}{RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> >=^{VideoFullscreenInterfaceAVKit}}{RefPtr<WebCore::VideoFullscreenModelVideoElement, WTF::DumbPtrTraits<WebCore::VideoFullscreenModelVideoElement> >=^{VideoFullscreenModelVideoElement}}{RefPtr<WebCore::PlaybackSessionModelMediaElement, WTF::DumbPtrTraits<WebCore::PlaybackSessionModelMediaElement> >=^{PlaybackSessionModelMediaElement}}{RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >=^{HTMLVideoElement}}{RetainPtr<UIView>=^v}{RetainPtr<WebVideoFullscreenController>=^v}}16, name: didFinishFullscreen:
- (void)requestHideAndExitFullscreen;
- (void)exitFullscreen;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (struct HTMLVideoElement *)videoElement;
- (void)setVideoElement:(struct HTMLVideoElement *)arg1;
- (id)init;

@end
