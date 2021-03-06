/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MFMessageBody.h>

@class MFMimePart;

@interface MFMimeBody : MFMessageBody {

	MFMimePart* _topLevelPart;
	unsigned _preferredAlternative : 16;
	unsigned _numAlternatives : 16;

}
+(id)versionString;
+(id)copyNewMimeBoundary;
-(void)setPreferredAlternative:(long long)arg1 ;
-(unsigned long long)totalTextSize;
-(unsigned)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)mimeType;
-(bool)isRich;
-(id)preferredBodyPart;
-(long long)preferredAlternative;
-(id)mimeSubtype;
-(id)firstPartPassingTest:(/*^block*/ id)arg1 ;
-(void)setTopLevelPart:(id)arg1 ;
-(id)topLevelPart;
-(id)attachmentURLs;
-(id)textHtmlPart;
-(bool)isHTML;
-(id)attachments;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4 ;
-(id)partWithNumber:(id)arg1 ;
-(long long)numberOfAlternatives;
@end

