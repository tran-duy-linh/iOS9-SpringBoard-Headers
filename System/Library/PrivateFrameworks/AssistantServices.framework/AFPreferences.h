/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFPreferences : NSObject {

	BOOL _registeredForInternalPrefs;
	BOOL _registeredForLanguageCode;
	BOOL _registeredForOutputVoice;
	NSObject*<OS_dispatch_queue> _navTokenQueue;
	BOOL _navTokenIsValid;
	int _navToken;

}
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(BOOL)dictationIsEnabled;
-(id)languageCode;
-(BOOL)assistantIsEnabled;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForInteralPrefs;
-(void)_registerForLanguageCode;
-(id)_localeMappedLanguageFor:(id)arg1 ;
-(id)bestSupportedLanguageCodeForLanguageCode:(id)arg1 ;
-(void)_registerForOutputVoice;
-(void)_registerForNavStatusIfNeeded;
-(void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(long long)handsFreeMode;
-(void)setHandsFreeMode:(long long)arg1 ;
-(BOOL)respectsSystemMute;
-(void)setRespectsSystemMute:(BOOL)arg1 ;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_ouputVoiceDidChangeExternally;
-(BOOL)offlineDictationOverride;
-(void)setOfflineDictationOverride:(BOOL)arg1 ;
-(void)_setAssistantIsEnabledLocal:(BOOL)arg1 ;
-(void)_setDictationIsEnabledLocal:(BOOL)arg1 ;
-(void)setAssistantIsEnabled:(BOOL)arg1 ;
-(void)setDictationIsEnabled:(BOOL)arg1 ;
-(long long)bugReportingMode;
-(void)setBugReportingMode:(long long)arg1 ;
-(void)setDebugButtonIsEnabled:(BOOL)arg1 ;
-(void)setShowsHoldToTalkIndicator:(BOOL)arg1 ;
-(void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1 ;
-(void)setManualEndpointingThreshold:(id)arg1 ;
-(void)setStreamingDictationEnabled:(BOOL)arg1 ;
-(long long)useDeviceSpeakerForTTS;
-(void)setUseDeviceSpeakerForTTS:(long long)arg1 ;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
-(BOOL)fileLoggingIsEnabled;
-(BOOL)debugButtonIsEnabled;
-(BOOL)showsHoldToTalkIndicator;
-(id)outputVoice;
-(void)setOutputVoice:(id)arg1 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(BOOL)streamingDictationEnabled;
-(void)setLanguageCode:(id)arg1 ;
-(BOOL)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1 ;
@end

