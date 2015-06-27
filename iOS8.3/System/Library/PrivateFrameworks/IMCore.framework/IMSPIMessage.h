/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:08:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSAttributedString, NSURL, NSDate, IMSPIHandle;

@interface IMSPIMessage : NSObject {

	NSString* _guid;
	NSArray* _chatGUIDs;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _subject;
	NSArray* _recipients;
	NSURL* _url;
	NSDate* _date;
	IMSPIHandle* _sender;
	long long _messageID;
	char _isOutgoing;
	char _isRead;
	char _isAudioMessage;
	NSArray* _chatGuids;

}

@property (retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign) long long messageID;                              //@synthesize messageID=_messageID - In the implementation block
@property (retain,readonly) NSArray * chatGuids;                     //@synthesize chatGuids=_chatGuids - In the implementation block
@property (retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (retain) NSString * subject;                               //@synthesize subject=_subject - In the implementation block
@property (retain) IMSPIHandle * sender;                             //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (assign) char isOutgoing;                                  //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (assign) char isRead;                                      //@synthesize isRead=_isRead - In the implementation block
@property (assign) char isAudioMessage;                              //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (retain) NSArray * chatGUIDs;                              //@synthesize chatGUIDs=_chatGUIDs - In the implementation block
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSURL *)url;
-(NSDate *)date;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(IMSPIHandle *)sender;
-(void)setSubject:(NSString *)arg1 ;
-(void)setSender:(IMSPIHandle *)arg1 ;
-(NSString *)subject;
-(char)isAudioMessage;
-(char)isOutgoing;
-(char)isRead;
-(void)setIsRead:(char)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setChatGUIDs:(NSArray *)arg1 ;
-(NSArray *)chatGUIDs;
-(void)setMessageID:(long long)arg1 ;
-(void)setIsOutgoing:(char)arg1 ;
-(void)setIsAudioMessage:(char)arg1 ;
-(NSArray *)chatGuids;
-(long long)messageID;
@end
