/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/TextInput/TextInput_el.bundle/TextInput_el
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_el/TextInput_el-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_el : TIKeyboardInputManagerZephyr
-(TIInputManagerZephyr*)initImplementation;
-(char)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(id)sentenceDelimitingCharacters;
-(char)shouldAddModifierSymbolsToWordCharacters;
@end

