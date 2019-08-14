//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class CALMainController, CalUICalendarContainerView, CalUICalendarContentView, CalUIDayViewController, CalUIMonthViewController, CalUIViewController, CalUIWeekViewController, CalUIYearViewController, NSMutableArray, NSString, NSTimer;

@interface CalUICalendarViewsController : NSViewController
{
    BOOL _transitioningMiniCalendar;
    CALMainController *_mainController;
    NSString *_currentViewName;
    NSString *_lastViewName;
    CalUIViewController *_activeViewController;
    double _fontSize;
    NSMutableArray *_recentTimedEventsCreatedInMonthView;
    CalUIDayViewController *_dayViewController;
    CalUIWeekViewController *_weekViewController;
    CalUIMonthViewController *_monthViewController;
    CalUIYearViewController *_yearViewController;
    CalUICalendarContainerView *_dayViewContainer;
    CalUICalendarContainerView *_weekViewContainer;
    CalUICalendarContainerView *_monthViewContainer;
    CalUICalendarContainerView *_yearViewContainer;
    NSTimer *_inactiveViewControllerUpdateTimer;
}

+ (double)heightForFontSize:(double)arg1;
+ (double)_heightForFontSize:(double)arg1;
+ (Class)viewControllerClassForViewName:(id)arg1;
+ (id)viewNameForViewDescription:(id)arg1;
@property(retain) NSTimer *inactiveViewControllerUpdateTimer; // @synthesize inactiveViewControllerUpdateTimer=_inactiveViewControllerUpdateTimer;
@property(retain) CalUICalendarContainerView *yearViewContainer; // @synthesize yearViewContainer=_yearViewContainer;
@property(retain) CalUICalendarContainerView *monthViewContainer; // @synthesize monthViewContainer=_monthViewContainer;
@property(retain) CalUICalendarContainerView *weekViewContainer; // @synthesize weekViewContainer=_weekViewContainer;
@property(retain) CalUICalendarContainerView *dayViewContainer; // @synthesize dayViewContainer=_dayViewContainer;
@property(retain) CalUIYearViewController *yearViewController; // @synthesize yearViewController=_yearViewController;
@property(retain) CalUIMonthViewController *monthViewController; // @synthesize monthViewController=_monthViewController;
@property(retain) CalUIWeekViewController *weekViewController; // @synthesize weekViewController=_weekViewController;
@property(retain) CalUIDayViewController *dayViewController; // @synthesize dayViewController=_dayViewController;
@property(retain) NSMutableArray *recentTimedEventsCreatedInMonthView; // @synthesize recentTimedEventsCreatedInMonthView=_recentTimedEventsCreatedInMonthView;
@property BOOL transitioningMiniCalendar; // @synthesize transitioningMiniCalendar=_transitioningMiniCalendar;
@property double fontSize; // @synthesize fontSize=_fontSize;
@property __weak CalUIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(copy) NSString *lastViewName; // @synthesize lastViewName=_lastViewName;
@property(copy) NSString *currentViewName; // @synthesize currentViewName=_currentViewName;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
- (void).cxx_destruct;
- (void)viewDidEndResizeLive:(BOOL)arg1;
- (void)viewWillBeginResizeLive:(BOOL)arg1;
- (void)selectionUpdated:(id)arg1;
- (double)heightForFontSize:(double)arg1;
- (void)decreaseFontSize;
- (void)increaseFontSize;
- (double)fontSizeDiff;
- (id)occurrenceItemsForOccurrenceID:(id)arg1;
- (id)uiOccForOccurrenceID:(id)arg1;
- (id)uiOccForEventOccurrenceID:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)revealEvent:(id)arg1 andSelect:(BOOL)arg2 withPulseHint:(BOOL)arg3 openInspector:(BOOL)arg4;
- (void)revealOccurrenceForEventOccID:(id)arg1 andSelect:(BOOL)arg2 withPulseHint:(BOOL)arg3 openInspector:(BOOL)arg4;
- (void)revealOccurrenceForEventOccID:(id)arg1 andSelect:(BOOL)arg2 withPulseHint:(BOOL)arg3;
- (void)userDidMakeEventAllDay:(id)arg1;
- (void)createNewEventAtDate:(id)arg1 isAllDay:(BOOL)arg2;
- (BOOL)hideWeekends;
- (void)dateTimeFormatChanged;
- (void)_updateCheckedCalendarEventsForInactiveViewControllersAfterDelay:(id)arg1;
- (void)checkedCalendarsDidChange;
- (void)eventsChanged:(id)arg1;
- (id)inactiveViewControllers;
- (id)allViewControllers;
- (void)deactivate;
- (void)activate;
- (void)moveBackward;
- (void)moveForward;
- (void)showDate:(id)arg1;
- (void)showToday;
- (BOOL)stopEditing;
- (id)calendar;
- (id)titleDate;
- (id)activeDate;
- (id)endDate;
- (id)startDate;
- (long long)numberOfDays;
- (void)dateChanged:(id)arg1;
- (void)switchToView:(id)arg1 withStartDate:(id)arg2;
- (id)controllerForViewName:(id)arg1;
- (void)switchToYearView;
- (void)switchToMonthView;
- (void)switchToWeekView;
- (void)switchToDayView;
- (BOOL)switchToLastView;
- (void)switchToMostRecentHourlyViewWithStartDate:(id)arg1;
- (id)window;
- (BOOL)isYearlyActive;
- (BOOL)isMonthlyActive;
- (BOOL)isWeeklyActive;
- (BOOL)isDailyActive;
- (BOOL)hasActiveView;
@property(readonly) CalUICalendarContentView *canvas;
- (id)rootView;
- (void)dealloc;
- (id)makeContainerView;
- (id)initWithMainController:(id)arg1;

@end
