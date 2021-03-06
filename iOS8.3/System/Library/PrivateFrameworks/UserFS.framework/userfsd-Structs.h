/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:56:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/userfsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _userfs_volume_s* userfs_volume_sRef;

typedef struct userfs_plugin_operations {
	/*function pointer*/void* volume_open;
	/*function pointer*/void* volume_is_locked;
	/*function pointer*/void* volume_flush;
	/*function pointer*/void* volume_close;
	/*function pointer*/void* item_get_info;
	/*function pointer*/void* dir_enumerate;
	/*function pointer*/void* item_delete;
	/*function pointer*/void* stream_open;
	/*function pointer*/void* stream_length;
	/*function pointer*/void* stream_read;
	/*function pointer*/void* stream_close;
	/*function pointer*/void* stream_name;
} userfs_plugin_operations;

typedef struct _userfs_stream_s* userfs_stream_sRef;

