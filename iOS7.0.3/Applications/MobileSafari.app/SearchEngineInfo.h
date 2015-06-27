/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableString, SearchEngineController, WBSURLSuffixChecker, NSSet, NSArray;

@interface SearchEngineInfo : NSObject {

	NSString* _shortName;
	NSString* _scriptName;
	int _searchID;
	NSString* _searchURLTemplate;
	NSString* _suggestionsURLTemplate;
	NSDictionary* _topLevelDomains;
	NSString* _carrierInfo;
	NSString* _safeSearchSuffix;
	NSDictionary* _safeSearchURLQueryParameters;
	NSMutableString* _searchURL;
	SearchEngineController* _controller;
	WBSURLSuffixChecker* _suffixChecker;
	NSString* _queryKey;
	BOOL _usesSearchTermsFromFragment;
	NSSet* _homepageURLs;
	NSArray* _hostSuffixes;
	NSArray* _pathPrefixes;

}

@property (nonatomic,retain) NSString * carrierInfo;                                     //@synthesize carrierInfo=_carrierInfo - In the implementation block
@property (nonatomic,retain) SearchEngineController * controller;                        //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSString * scriptName;                                      //@synthesize scriptName=_scriptName - In the implementation block
@property (nonatomic,retain) NSMutableString * searchURL;                                //@synthesize searchURL=_searchURL - In the implementation block
@property (nonatomic,retain) NSString * searchURLTemplate;                               //@synthesize searchURLTemplate=_searchURLTemplate - In the implementation block
@property (nonatomic,retain) NSString * shortName;                                       //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,retain) NSString * suggestionsURLTemplate;                          //@synthesize suggestionsURLTemplate=_suggestionsURLTemplate - In the implementation block
@property (nonatomic,retain) NSDictionary * topLevelDomains;                             //@synthesize topLevelDomains=_topLevelDomains - In the implementation block
@property (nonatomic,readonly) NSSet * homepageURLs;                                     //@synthesize homepageURLs=_homepageURLs - In the implementation block
@property (nonatomic,readonly) NSArray * hostSuffixes;                                   //@synthesize hostSuffixes=_hostSuffixes - In the implementation block
@property (nonatomic,readonly) NSArray * pathPrefixes;                                   //@synthesize pathPrefixes=_pathPrefixes - In the implementation block
@property (nonatomic,readonly) BOOL usesSearchTermsFromFragment;                         //@synthesize usesSearchTermsFromFragment=_usesSearchTermsFromFragment - In the implementation block
@property (nonatomic,readonly) NSString * safeSearchSuffix;                              //@synthesize safeSearchSuffix=_safeSearchSuffix - In the implementation block
@property (nonatomic,readonly) NSDictionary * safeSearchURLQueryParameters;              //@synthesize safeSearchURLQueryParameters=_safeSearchURLQueryParameters - In the implementation block
+(id)engineFromDictionary:(id)arg1 withController:(id)arg2 ;
-(id)queryForSearchURL:(id)arg1 ;
-(id)scriptName;
-(id)initWithName:(id)arg1 scriptName:(id)arg2 searchID:(int)arg3 searchTemplate:(id)arg4 homepageURLs:(id)arg5 hostSuffixes:(id)arg6 pathPrefixes:(id)arg7 usesSearchTermsFromFragment:(BOOL)arg8 suggestionsTemplate:(id)arg9 topLevelDomains:(id)arg10 safeSearchSuffix:(id)arg11 safeSearchURLQueryParameters:(id)arg12 controller:(id)arg13 ;
-(void)setSearchURL;
-(BOOL)isValidSearchURL:(id)arg1 ;
-(BOOL)isHomepageURL:(id)arg1 ;
-(id)safeSearchURLForSearchURL:(id)arg1 ;
-(void)setShortName:(id)arg1 ;
-(void)setScriptName:(id)arg1 ;
-(void)setSearchURLTemplate:(id)arg1 ;
-(void)setSuggestionsURLTemplate:(id)arg1 ;
-(void)setTopLevelDomains:(id)arg1 ;
-(void)setCarrierInfo:(id)arg1 ;
-(id)topLevelDomains;
-(id)searchURLTemplate;
-(id)getTopLevelDomainFor:(id)arg1 ;
-(id)carrierInfo;
-(id)_queryForSearchURLBasedOnTemplate:(id)arg1 ;
-(id)suggestionsURLTemplate;
-(id)searchURLForQuery:(id)arg1 ;
-(id)safeSearchURLQueryParameters;
-(id)homepageURLs;
-(id)hostSuffixes;
-(id)pathPrefixes;
-(BOOL)usesSearchTermsFromFragment;
-(id)safeSearchSuffix;
-(void)dealloc;
-(id)description;
-(id)controller;
-(void)setController:(id)arg1 ;
-(int)searchID;
-(void)setSearchURL:(id)arg1 ;
-(id)searchURL;
-(id)shortName;
@end
