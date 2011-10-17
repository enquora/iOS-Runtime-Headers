/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBObserver, BBAssertion, BBAttachments, BBSound, BBContent, NSDate, NSArray, NSTimeZone, NSDictionary, NSSet, BBAction, NSString, NSMutableDictionary;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
    NSString *_sectionID;
    NSString *_publisherRecordID;
    NSString *_publisherBulletinID;
    int _addressBookRecordID;
    int _sectionSubtype;
    BBContent *_content;
    BBContent *_modalAlertContent;
    NSDate *_date;
    NSDate *_endDate;
    NSDate *_recencyDate;
    int _dateFormatStyle;
    BOOL _dateIsAllDay;
    NSTimeZone *_timeZone;
    int _accessoryStyle;
    BOOL _clearable;
    BBSound *_sound;
    BBAttachments *_attachments;
    NSString *_unlockActionLabelOverride;
    NSMutableDictionary *_actions;
    NSArray *_buttons;
    BOOL _expiresOnPublisherDeath;
    NSDictionary *_context;
    NSDate *_expirationDate;
    NSString *_bulletinID;
    NSDate *_lastInterruptDate;
    BBAssertion *_lifeAssertion;
    BBObserver *_observer;
    unsigned int realertCount_deprecated;
    NSSet *alertSuppressionAppIDs_deprecated;
}

@property(readonly) BOOL showsSubtitle;
@property(readonly) unsigned int messageNumberOfLines;
@property(readonly) BOOL usesVariableLayout;
@property(readonly) BOOL orderSectionUsingRecencyDate;
@property(readonly) BOOL showsDateInFloatingLockScreenAlert;
@property(readonly) NSString * topic;
@property(readonly) NSString * missedBannerDescriptionFormat;
@property(readonly) NSString * fullUnlockActionLabel;
@property(readonly) NSString * unlockActionLabel;
@property(readonly) NSSet * alertSuppressionAppIDs;
@property(readonly) BOOL coalescesWhenLocked;
@property(readonly) BOOL suppressesMessageForPrivacy;
@property(readonly) unsigned int realertCount;
@property(readonly) BOOL inertWhenLocked;
@property(readonly) BOOL preservesUnlockActionCase;
@property(readonly) BOOL bannerShowsSubtitle;
@property(readonly) BOOL visuallyIndicatesWhenDateIsInFuture;
@property(readonly) unsigned int subtypePriority;
@property(readonly) int iPodOutAlertType;
@property(copy) NSString * bulletinID;
@property(copy) NSString * section;
@property(copy) NSString * sectionID;
@property(copy) NSString * recordID;
@property(copy) NSString * publisherBulletinID;
@property int addressBookRecordID;
@property int sectionSubtype;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(copy) NSString * message;
@property(retain) BBContent * modalAlertContent;
@property(retain) NSDate * date;
@property(retain) NSDate * endDate;
@property(retain) NSDate * recencyDate;
@property int dateFormatStyle;
@property BOOL dateIsAllDay;
@property(retain) NSTimeZone * timeZone;
@property int accessoryStyle;
@property BOOL clearable;
@property(retain) BBSound * sound;
@property(readonly) int primaryAttachmentType;
@property(copy) BBAction * defaultAction;
@property(copy) BBAction * acknowledgeAction;
@property(copy) BBAction * replyAction;
@property(copy) NSArray * buttons;
@property BOOL expiresOnPublisherDeath;
@property(retain) NSDictionary * context;
@property(retain) NSDate * lastInterruptDate;
@property(retain) BBContent * content;
@property(retain) BBAttachments * attachments;
@property(copy) NSString * unlockActionLabelOverride;
@property(retain) NSMutableDictionary * actions;
@property(retain) NSDate * expirationDate;
@property(copy) BBAction * expireAction;
@property(retain) BBAssertion * lifeAssertion;
@property(retain) BBObserver * observer;
@property unsigned int realertCount_deprecated;
@property(copy) NSSet * alertSuppressionAppIDs_deprecated;

+ (id)bulletinWithBulletin:(id)arg1;
+ (void)killSounds;

- (id)attachments;
- (void)setButtons:(id)arg1;
- (id)recordID;
- (void)setExpirationDate:(id)arg1;
- (id)expirationDate;
- (void)setAttachments:(id)arg1;
- (void)setActions:(id)arg1;
- (id)actions;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (void)setContent:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)buttons;
- (id)timeZone;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)content;
- (id)section;
- (id)context;
- (void)setContext:(id)arg1;
- (id)title;
- (void)setTimeZone:(id)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)topic;
- (id)observer;
- (void)setObserver:(id)arg1;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSize;
- (id)composedAttachmentImage;
- (struct CGSize { float x1; float x2; })composedAttachmentImageSizeForKey:(id)arg1;
- (id)composedAttachmentImageForKey:(id)arg1;
- (int)iPodOutAlertType;
- (unsigned int)subtypePriority;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;
- (BOOL)bannerShowsSubtitle;
- (BOOL)preservesUnlockActionCase;
- (BOOL)inertWhenLocked;
- (BOOL)suppressesMessageForPrivacy;
- (BOOL)coalescesWhenLocked;
- (id)alertSuppressionAppIDs;
- (id)unlockActionLabel;
- (id)fullUnlockActionLabel;
- (id)missedBannerDescriptionFormat;
- (BOOL)showsDateInFloatingLockScreenAlert;
- (BOOL)orderSectionUsingRecencyDate;
- (BOOL)usesVariableLayout;
- (unsigned int)messageNumberOfLines;
- (BOOL)showsSubtitle;
- (unsigned int)realertCount;
- (void)setExpiresOnPublisherDeath:(BOOL)arg1;
- (BOOL)expiresOnPublisherDeath;
- (id)responseForExpireAction;
- (id)responseForButtonActionAtIndex:(unsigned int)arg1;
- (id)responseForAcknowledgeAction;
- (id)responseForReplyAction;
- (id)responseForDefaultAction;
- (void)setExpireAction:(id)arg1;
- (void)setReplyAction:(id)arg1;
- (id)replyAction;
- (void)setAcknowledgeAction:(id)arg1;
- (id)acknowledgeAction;
- (void)setDefaultAction:(id)arg1;
- (int)primaryAttachmentType;
- (void)setAlertSuppressionAppIDs_deprecated:(id)arg1;
- (id)alertSuppressionAppIDs_deprecated;
- (void)setRealertCount_deprecated:(unsigned int)arg1;
- (unsigned int)realertCount_deprecated;
- (void)setLastInterruptDate:(id)arg1;
- (id)lastInterruptDate;
- (void)setUnlockActionLabelOverride:(id)arg1;
- (id)unlockActionLabelOverride;
- (void)setSound:(id)arg1;
- (id)sound;
- (void)setClearable:(BOOL)arg1;
- (BOOL)clearable;
- (void)setAccessoryStyle:(int)arg1;
- (int)accessoryStyle;
- (void)setDateIsAllDay:(BOOL)arg1;
- (BOOL)dateIsAllDay;
- (void)setDateFormatStyle:(int)arg1;
- (int)dateFormatStyle;
- (void)setRecencyDate:(id)arg1;
- (id)recencyDate;
- (void)setModalAlertContent:(id)arg1;
- (id)modalAlertContent;
- (void)setSectionSubtype:(int)arg1;
- (int)sectionSubtype;
- (void)setAddressBookRecordID:(int)arg1;
- (int)addressBookRecordID;
- (void)setPublisherBulletinID:(id)arg1;
- (id)publisherBulletinID;
- (void)deliverResponse:(id)arg1;
- (id)expireAction;
- (id)_responseForActionKey:(id)arg1;
- (id)responseSendBlock;
- (id)_actionKeyForButtonIndex:(unsigned int)arg1;
- (id)attachmentsCreatingIfNecessary:(BOOL)arg1;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (unsigned int)numberOfAdditionalAttachments;
- (void)setSectionID:(id)arg1;
- (id)sectionID;
- (void)_fillOutCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (void)setLifeAssertion:(id)arg1;
- (id)lifeAssertion;
- (id)bulletinID;
- (void)setBulletinID:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setSection:(id)arg1;
- (id)defaultAction;
- (void)setRecordID:(id)arg1;
- (BOOL)playSound;
- (void)killSound;
- (id)defaultLaunchBlock;
- (id)launchBlockForButtonIndex:(unsigned int)arg1;
- (id)defaultLaunchBlockWithOrigin:(int)arg1;
- (id)launchBlockForButtonIndex:(unsigned int)arg1 withOrigin:(int)arg2;

@end