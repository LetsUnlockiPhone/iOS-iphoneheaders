/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PKPass, NSString;

@interface PDGetPassResult : NSObject {

	PKPass* _localPass;
	NSString* _lastModified;

}

@property (nonatomic,retain) PKPass * localPass;                   //@synthesize localPass=_localPass - In the implementation block
@property (nonatomic,retain) NSString * lastModified;              //@synthesize lastModified=_lastModified - In the implementation block
-(PKPass *)localPass;
-(void)setLocalPass:(PKPass *)arg1 ;
-(void)setLastModified:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)lastModified;
@end

