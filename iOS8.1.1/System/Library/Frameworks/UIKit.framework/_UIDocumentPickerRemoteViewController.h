/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <UIKit/_UIDocumentPickerViewControllerHost.h>
#import <UIKit/_UIDocumentPickerServiceInvalidating.h>

@protocol _UIDocumentPickerRemoteViewControllerContaining, NSCopyingNSObject;
@class NSString, NSExtension;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost, _UIDocumentPickerServiceInvalidating> {

	id<_UIDocumentPickerRemoteViewControllerContaining> _publicController;
	NSString* _identifier;
	NSExtension* _extension;
	id<NSCopying><NSObject> _extensionRequestIdentifier;

}

@property (assign,nonatomic) id<_UIDocumentPickerRemoteViewControllerContaining> publicController;              //@synthesize publicController=_publicController - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                                                           //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying><NSObject> extensionRequestIdentifier;                                  //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)invalidate;
-(NSString *)identifier;
-(void)setExtensionRequestIdentifier:(id<NSCopying><NSObject>)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)_dismissViewController;
-(void)setPublicController:(id<_UIDocumentPickerRemoteViewControllerContaining>)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_preferredContentSizeChanged:(CGSize)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)_didSelectURLWrapper:(id)arg1 ;
-(id<_UIDocumentPickerRemoteViewControllerContaining>)publicController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying><NSObject>)extensionRequestIdentifier;
@end
