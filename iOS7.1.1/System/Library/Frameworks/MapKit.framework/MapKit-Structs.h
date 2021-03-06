/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	double field1;
	double field2;
} SCD_Struct_MK0;

typedef struct {
	double latitude;
	double longitude;
} SCD_Struct_MK1;

typedef struct {
	SCD_Struct_MK1 center;
	SCD_Struct_MK1 span;
} SCD_Struct_MK2;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_MK3;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	double field1;
	SCD_Struct_MK1 field2;
} SCD_Struct_MK5;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct CGImage* CGImageRef;

typedef struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
} SCD_Struct_MK13;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _NSZone* NSZoneRef;

typedef struct CGColor* CGColorRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	long long field1;
	SCD_Struct_MK1 field2;
	CGPoint field3;
	CGPoint field4;
	id field5;
	bool field6;
} SCD_Struct_MK19;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	double field4;
} SCD_Struct_MK20;

typedef struct {
	long long x;
	long long y;
	long long z;
	double contentScaleFactor;
} SCD_Struct_MK21;

typedef struct GEOTileKey {
	unsigned z : 6;
	unsigned x : 26;
	unsigned y : 26;
	unsigned type : 6;
	unsigned pixelSize : 8;
	unsigned textScale : 8;
	unsigned provider : 8;
	unsigned expires : 1;
	unsigned reserved1 : 7;
	unsigned char reserved2[4];
} GEOTileKey;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct _compressed_pair<double **, std::__1::allocator<double *> > {
	double __first_;
} compressed_pair<double **, std::__1::allocator<double *> >;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<double> > {
	unsigned long long __first_;
} compressed_pair<unsigned long, std::__1::allocator<double> >;

typedef struct _split_buffer<double *, std::__1::allocator<double *> > {
	double __first_;
	double __begin_;
	double __end_;
	compressed_pair<double **, std::__1::allocator<double *> > __end_cap_;
} split_buffer<double *, std::__1::allocator<double *> >;

typedef struct deque<double, std::__1::allocator<double> > {
	split_buffer<double *, std::__1::allocator<double *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<double> > __size_;
} deque<double, std::__1::allocator<double> >;

typedef struct __IOHIDEvent* IOHIDEventRef;

