/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_MT1;

typedef struct {
	SCD_Struct_MT1 field1;
	SCD_Struct_MT1 field2;
} SCD_Struct_MT2;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_MT3;

typedef struct {
	SCD_Struct_MT3 start;
	SCD_Struct_MT3 duration;
} SCD_Struct_MT4;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct SBSProcessAssertion* SBSProcessAssertionRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct __CTLine* CTLineRef;

typedef struct objc_method* objc_methodRef;

typedef struct CGImage* CGImageRef;

typedef struct __CFString* CFStringRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	char __opaque[24];
} opaque_pthread_cond_t;

typedef struct CGPath* CGPathRef;

typedef struct {
	int year;
	char month;
	char day;
	char hour;
	char minute;
	double second;
} SCD_Struct_IM23;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_AE27;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct {
	int expectedNumberOfInsertions;
	float loadFactor;
	int numberOfHashFunctions;
} SCD_Struct_IM29;

typedef struct {
	char* bytes;
	unsigned byteCount;
} SCD_Struct_IM30;

typedef struct {
	SCD_Struct_IM29 bloomFilterSpecification;
	int windowWidth;
} SCD_Struct_IM31;

typedef struct {
	SCD_Struct_IM29 field1;
	int field2;
} SCD_Struct_IM32;

typedef struct {
	float loadFactor;
	int numberOfHashFunctions;
	int windowWidth;
} SCD_Struct_IM33;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;

typedef struct __CFAttributedString* CFAttributedStringRef;

