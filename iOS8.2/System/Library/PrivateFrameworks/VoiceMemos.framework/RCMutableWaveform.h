/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveform.h>

@interface RCMutableWaveform : RCWaveform
-(id)segments;
-(void)setSegments:(id)arg1 ;
-(id)classForCoder;
-(void)removeAllSegments;
-(void)addSegment:(id)arg1 ;
-(char)clipToTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)addSegments:(id)arg1 ;
-(void)removeSegment:(id)arg1 ;
@end

