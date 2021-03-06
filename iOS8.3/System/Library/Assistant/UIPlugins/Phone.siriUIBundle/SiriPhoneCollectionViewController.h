/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:06:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Phone/Phone-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, NSArray, NSString;

@interface SiriPhoneCollectionViewController : SiriUISnippetViewController <UICollectionViewDelegate, UICollectionViewDataSource> {

	UICollectionView* _collectionView;
	NSArray* _phoneCalls;

}

@property (nonatomic,retain) NSArray * phoneCalls;                  //@synthesize phoneCalls=_phoneCalls - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPhoneCalls:(NSArray *)arg1 ;
-(NSArray *)phoneCalls;
-(float)desiredHeightForWidth:(float)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(Class)cellClass;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(float)desiredHeightForFooterView;
@end

