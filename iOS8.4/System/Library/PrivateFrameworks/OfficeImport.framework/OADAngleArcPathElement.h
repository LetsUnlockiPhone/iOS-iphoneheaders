/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPathElement.h>

@interface OADAngleArcPathElement : OADPathElement {

	OADAdjustPoint mCenter;
	OADAdjustPoint mSemiaxes;
	OADAdjustCoord mStartAngle;
	OADAdjustCoord mAngleLength;
	BOOL mConnectedToPrevious;

}
-(OADAdjustPoint)center;
-(OADAdjustCoord)startAngle;
-(id)initWithCenter:(OADAdjustPoint)arg1 semiaxes:(OADAdjustPoint)arg2 startAngle:(OADAdjustCoord)arg3 angleLength:(OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5 ;
-(OADAdjustPoint)semiaxes;
-(OADAdjustCoord)angleLength;
-(BOOL)connectedToPrevious;
@end
