/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:01:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <MessageUI/MFComposeRecipient.h>

@class IMHandle;

@interface CKIMComposeRecipient : MFComposeRecipient {

	IMHandle* _handle;

}

@property (nonatomic,retain,readonly) IMHandle * handle;              //@synthesize handle=_handle - In the implementation block
-(id)address;
-(id)uncommentedAddress;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)displayString;
-(int)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)label;
-(char)isRemovableFromSearchResults;
-(id)compositeName;
-(id)commentedAddress;
-(id)initWithRecord:(void*)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5 ;
-(id)initWithHandle:(id)arg1 ;
-(id)unlocalizedLabel;
-(id)supportedDragTypes;
-(id)objectForDragType:(id)arg1 ;
-(void)setRecord:(void*)arg1 recordID:(int)arg2 identifier:(int)arg3 ;
-(void*)record;
-(int)recordID;
-(IMHandle *)handle;
-(int)property;
@end

