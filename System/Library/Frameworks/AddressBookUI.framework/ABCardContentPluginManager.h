/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABCardContentPluginManager : NSObject {

	NSString* _pluginsDirectory;

}

@property (nonatomic,readonly) NSString * pluginsDirectory;              //@synthesize pluginsDirectory=_pluginsDirectory - In the implementation block
-(id)bundleNameForLabel:(id)arg1 ;
-(Class)contentProviderForBundleName:(id)arg1 ;
-(NSString *)pluginsDirectory;
-(Class)contentProviderClassForPerson:(void*)arg1 ;
-(void)dealloc;
@end
