/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AEAudiobookFeedbackStringProducer <NSObject>
@property (assign,nonatomic) unsigned skipCountPerUpdate; 
@property (assign,nonatomic) int direction; 
@required
-(id)hudFeedbackString;
-(id)skipFeedbackString;
-(void)incrementRepeatCount;
-(void)setSkipCountPerUpdate:(unsigned)arg1;
-(id)coverFeedbackString;
-(unsigned)skipCountPerUpdate;
-(void)setDirection:(int)arg1;
-(int)direction;

@end

