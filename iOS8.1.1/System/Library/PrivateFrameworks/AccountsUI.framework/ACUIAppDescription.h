/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIImage;

@interface ACUIAppDescription : NSObject {

	NSString* _name;
	NSString* _publisher;
	NSString* _bundleID;
	NSString* _persistentID;
	UIImage* _icon;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * publisher;                 //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * persistentID;              //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
-(void)setPersistentID:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setIcon:(UIImage *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)persistentID;
-(void)setPublisher:(NSString *)arg1 ;
-(NSString *)publisher;
@end

