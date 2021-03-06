/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@interface EKSourceConstraints : NSObject {

	int _maxAlarmsAllowed;
	int _maxRecurrencesAllowed;
	struct {
		unsigned maxAlarmsAllowed : 1;
		unsigned maxRecurrencesAllowed : 1;
		unsigned supportsAlarmTriggerIntervals : 1;
		unsigned supportsAlarmTriggerDates : 1;
		unsigned supportsAlarmsTriggeringAfterStartDate : 1;
		unsigned snoozeAlarmRequiresDetach : 1;
		unsigned organizerCanSeeAttendeeStatuses : 1;
		unsigned inviteesCanSeeAttendeeStatuses : 1;
		unsigned statusesAreAccurate : 1;
		unsigned supportsIncomingInvitations : 1;
		unsigned supportsOutgoingInvitations : 1;
		unsigned requiresOutgoingInvitationsInDefaultCalendar : 1;
		unsigned supportsInvitationModifications : 1;
		unsigned supportsResponseComments : 1;
		unsigned deliverySourceOrExternalIDRequiredForResponse : 1;
		unsigned proposedStatusRequiredForResponse : 1;
		unsigned declinedStatusChangeRequiresNoPendingStatus : 1;
		unsigned eventDurationConstrainedToRecurrenceInterval : 1;
		unsigned alarmTriggerIntervalConstrainedToRecurrenceInterval : 1;
		unsigned occurrencesMustOccurOnSeparateDays : 1;
		unsigned futureStartDateLimitedToOccurrenceCacheBounds : 1;
		unsigned supportsRecurrencesOnDetachedEvents : 1;
		unsigned recurrencesShouldPinToMonthDays : 1;
		unsigned requiresAttendeeSearchInSingleAccount : 1;
		unsigned mustAcknowledgeMasterEvent : 1;
		unsigned canSetAvailability : 1;
		unsigned eventAvalabilityLimited : 1;
		unsigned requiresMSFormattedUID : 1;
		unsigned shouldCancelDeletedEvents : 1;
		unsigned shouldDeclineDeletedInvitations : 1;
		unsigned supportsStructuredLocations : 1;
		unsigned supportsReminderActions : 1;
		unsigned supportsReminderLocations : 1;
		unsigned supportsAlarmProximity : 1;
		unsigned allowsCalendarAddDeleteModify : 1;
		unsigned allowsTasks : 1;
		unsigned allowsEvents : 1;
		unsigned supportsURLField : 1;
		unsigned supportsAllDayDueDates : 1;
		unsigned supportsSharedCalendars : 1;
		unsigned isFacebook : 1;
		unsigned recurrenceSeriesMustIncludeMoreThanFirstOccurrence : 1;
	}  _flags;

}

@property (assign,nonatomic) int maxAlarmsAllowed;                                                  //@synthesize maxAlarmsAllowed=_maxAlarmsAllowed - In the implementation block
@property (assign,nonatomic) int maxRecurrencesAllowed;                                             //@synthesize maxRecurrencesAllowed=_maxRecurrencesAllowed - In the implementation block
@property (assign,nonatomic) bool supportsAlarmTriggerIntervals; 
@property (assign,nonatomic) bool supportsAlarmTriggerDates; 
@property (assign,nonatomic) bool supportsAlarmsTriggeringAfterStartDate; 
@property (assign,nonatomic) bool snoozeAlarmRequiresDetach; 
@property (assign,nonatomic) bool organizerCanSeeAttendeeStatuses; 
@property (assign,nonatomic) bool inviteesCanSeeAttendeeStatuses; 
@property (assign,nonatomic) bool statusesAreAccurate; 
@property (assign,nonatomic) bool supportsIncomingInvitations; 
@property (assign,nonatomic) bool supportsOutgoingInvitations; 
@property (assign,nonatomic) bool requiresOutgoingInvitationsInDefaultCalendar; 
@property (assign,nonatomic) bool supportsInvitationModifications; 
@property (assign,nonatomic) bool supportsResponseComments; 
@property (assign,nonatomic) bool deliverySourceOrExternalIDRequiredForResponse; 
@property (assign,nonatomic) bool proposedStatusRequiredForResponse; 
@property (assign,nonatomic) bool declinedStatusChangeRequiresNoPendingStatus; 
@property (assign,nonatomic) bool eventDurationConstrainedToRecurrenceInterval; 
@property (assign,nonatomic) bool alarmTriggerIntervalConstrainedToRecurrenceInterval; 
@property (assign,nonatomic) bool occurrencesMustOccurOnSeparateDays; 
@property (assign,nonatomic) bool futureStartDateLimitedToOccurrenceCacheBounds; 
@property (assign,nonatomic) bool supportsRecurrencesOnDetachedEvents; 
@property (assign,nonatomic) bool recurrencesShouldPinToMonthDays; 
@property (assign,nonatomic) bool requiresAttendeeSearchInSingleAccount; 
@property (assign,nonatomic) bool mustAcknowledgeMasterEvent; 
@property (assign,nonatomic) bool canSetAvailability; 
@property (assign,nonatomic) bool eventAvalabilityLimited; 
@property (assign,nonatomic) bool requiresMSFormattedUID; 
@property (assign,nonatomic) bool shouldCancelDeletedEvents; 
@property (assign,nonatomic) bool shouldDeclineDeletedInvitations; 
@property (assign,nonatomic) bool supportsStructuredLocations; 
@property (assign,nonatomic) bool supportsReminderActions; 
@property (assign,nonatomic) bool supportsReminderLocations; 
@property (assign,nonatomic) bool supportsAlarmProximity; 
@property (assign,nonatomic) bool allowsCalendarAddDeleteModify; 
@property (assign,nonatomic) bool allowsTasks; 
@property (assign,nonatomic) bool allowsEvents; 
@property (assign,nonatomic) bool supportsURLField; 
@property (assign,nonatomic) bool supportsAllDayDueDates; 
@property (assign,nonatomic) bool supportsSharedCalendars; 
@property (assign,nonatomic) bool isFacebook; 
@property (assign,nonatomic) bool recurrenceSeriesMustIncludeMoreThanFirstOccurrence; 
@property (assign,nonatomic) SCD_Struct_EK23 flags;                                                 //@synthesize flags=_flags - In the implementation block
-(bool)supportsIncomingInvitations;
-(bool)supportsInvitationModifications;
-(bool)supportsOutgoingInvitations;
-(bool)allowsTasks;
-(bool)allowsEvents;
-(bool)allowsCalendarAddDeleteModify;
-(bool)recurrenceSeriesMustIncludeMoreThanFirstOccurrence;
-(bool)supportsStructuredLocations;
-(bool)supportsReminderActions;
-(bool)supportsReminderLocations;
-(bool)supportsAlarmProximity;
-(bool)requiresMSFormattedUID;
-(bool)statusesAreAccurate;
-(bool)requiresOutgoingInvitationsInDefaultCalendar;
-(bool)deliverySourceOrExternalIDRequiredForResponse;
-(bool)proposedStatusRequiredForResponse;
-(bool)declinedStatusChangeRequiresNoPendingStatus;
-(bool)eventDurationConstrainedToRecurrenceInterval;
-(bool)occurrencesMustOccurOnSeparateDays;
-(bool)futureStartDateLimitedToOccurrenceCacheBounds;
-(bool)eventAvalabilityLimited;
-(bool)canSetAvailability;
-(bool)shouldCancelDeletedEvents;
-(bool)shouldDeclineDeletedInvitations;
-(bool)supportsURLField;
-(bool)supportsAlarmTriggerDates;
-(bool)supportsAlarmTriggerIntervals;
-(bool)supportsAlarmsTriggeringAfterStartDate;
-(bool)alarmTriggerIntervalConstrainedToRecurrenceInterval;
-(bool)supportsSharedCalendars;
-(int)maxAlarmsAllowed;
-(int)maxRecurrencesAllowed;
-(bool)supportsRecurrencesOnDetachedEvents;
-(bool)recurrencesShouldPinToMonthDays;
-(bool)mustAcknowledgeMasterEvent;
-(bool)supportsResponseComments;
-(bool)organizerCanSeeAttendeeStatuses;
-(bool)inviteesCanSeeAttendeeStatuses;
-(bool)requiresAttendeeSearchInSingleAccount;
-(bool)supportsAllDayDueDates;
-(bool)snoozeAlarmRequiresDetach;
-(bool)isFacebook;
-(id)initWithMaxAlarms:(int)arg1 maxRecurrences:(int)arg2 constraintFlags:(unsigned long long)arg3 ;
-(void)setSupportsAlarmTriggerIntervals:(bool)arg1 ;
-(void)setSupportsAlarmTriggerDates:(bool)arg1 ;
-(void)setSupportsAlarmsTriggeringAfterStartDate:(bool)arg1 ;
-(void)setSnoozeAlarmRequiresDetach:(bool)arg1 ;
-(void)setOrganizerCanSeeAttendeeStatuses:(bool)arg1 ;
-(void)setInviteesCanSeeAttendeeStatuses:(bool)arg1 ;
-(void)setStatusesAreAccurate:(bool)arg1 ;
-(void)setSupportsIncomingInvitations:(bool)arg1 ;
-(void)setSupportsOutgoingInvitations:(bool)arg1 ;
-(void)setRequiresOutgoingInvitationsInDefaultCalendar:(bool)arg1 ;
-(void)setSupportsInvitationModifications:(bool)arg1 ;
-(void)setSupportsResponseComments:(bool)arg1 ;
-(void)setDeliverySourceOrExternalIDRequiredForResponse:(bool)arg1 ;
-(void)setProposedStatusRequiredForResponse:(bool)arg1 ;
-(void)setDeclinedStatusChangeRequiresNoPendingStatus:(bool)arg1 ;
-(void)setEventDurationConstrainedToRecurrenceInterval:(bool)arg1 ;
-(void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(bool)arg1 ;
-(void)setOccurrencesMustOccurOnSeparateDays:(bool)arg1 ;
-(void)setFutureStartDateLimitedToOccurrenceCacheBounds:(bool)arg1 ;
-(void)setSupportsRecurrencesOnDetachedEvents:(bool)arg1 ;
-(void)setRecurrencesShouldPinToMonthDays:(bool)arg1 ;
-(void)setRequiresAttendeeSearchInSingleAccount:(bool)arg1 ;
-(void)setMustAcknowledgeMasterEvent:(bool)arg1 ;
-(void)setCanSetAvailability:(bool)arg1 ;
-(void)setEventAvalabilityLimited:(bool)arg1 ;
-(void)setRequiresMSFormattedUID:(bool)arg1 ;
-(void)setShouldCancelDeletedEvents:(bool)arg1 ;
-(void)setShouldDeclineDeletedInvitations:(bool)arg1 ;
-(void)setSupportsStructuredLocations:(bool)arg1 ;
-(void)setSupportsReminderActions:(bool)arg1 ;
-(void)setSupportsReminderLocations:(bool)arg1 ;
-(void)setSupportsAlarmProximity:(bool)arg1 ;
-(void)setAllowsCalendarAddDeleteModify:(bool)arg1 ;
-(void)setAllowsTasks:(bool)arg1 ;
-(void)setAllowsEvents:(bool)arg1 ;
-(void)setSupportsURLField:(bool)arg1 ;
-(void)setSupportsAllDayDueDates:(bool)arg1 ;
-(void)setSupportsSharedCalendars:(bool)arg1 ;
-(void)setIsFacebook:(bool)arg1 ;
-(void)setRecurrenceSeriesMustIncludeMoreThanFirstOccurrence:(bool)arg1 ;
-(void)setMaxAlarmsAllowed:(int)arg1 ;
-(void)setMaxRecurrencesAllowed:(int)arg1 ;
-(id)init;
-(SCD_Struct_EK23)flags;
-(void)setFlags:(SCD_Struct_EK23)arg1 ;
@end

