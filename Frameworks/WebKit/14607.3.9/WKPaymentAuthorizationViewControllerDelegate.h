//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/PKPaymentAuthorizationViewControllerDelegate-Protocol.h>
#import <WebKit/PKPaymentAuthorizationViewControllerPrivateDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPaymentAuthorizationViewControllerDelegate : NSObject <PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate>
{
    struct WebPaymentCoordinatorProxy *_webPaymentCoordinatorProxy;
    struct RetainPtr<NSArray> _paymentSummaryItems;
    struct RetainPtr<NSArray> _shippingMethods;
    struct BlockPtr<void (PKPaymentMerchantSession *, NSError *)> _sessionBlock;
    BOOL _didReachFinalState;
    struct BlockPtr<void (PKPaymentAuthorizationResult *)> _paymentAuthorizedCompletion;
    struct BlockPtr<void (PKPaymentRequestPaymentMethodUpdate *)> _didSelectPaymentMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingMethodUpdate *)> _didSelectShippingMethodCompletion;
    struct BlockPtr<void (PKPaymentRequestShippingContactUpdate *)> _didSelectShippingContactCompletion;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)paymentAuthorizationViewControllerDidFinish:(id)arg1;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingContact:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectShippingMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didAuthorizePayment:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)paymentAuthorizationViewController:(id)arg1 didRequestMerchantSession:(CDUnknownBlockType)arg2;
- (void)paymentAuthorizationViewController:(id)arg1 willFinishWithError:(id)arg2;
- (void)invalidate;
- (id)initWithPaymentCoordinatorProxy:(struct WebPaymentCoordinatorProxy *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
