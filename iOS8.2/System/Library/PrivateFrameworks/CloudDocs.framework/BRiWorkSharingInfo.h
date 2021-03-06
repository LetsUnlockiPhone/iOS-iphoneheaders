/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/NSSecureCoding.h>
#import <CloudDocs/NSCopying.h>

@interface BRiWorkSharingInfo : NSObject <NSSecureCoding, NSCopying> {

	char _options;

}

@property (assign,nonatomic) char options;              //@synthesize options=_options - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOptions:(char)arg1 ;
-(char)options;
-(id)initWithSharingInfo:(id)arg1 ;
-(char)isEqualToiWorkSharingInfo:(id)arg1 ;
-(id)initWithOptions:(char)arg1 ;
@end

