/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, LSBundleProxy, NSString, NSUUID, NSDate;

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {

	NSDictionary* _infoPlist;
	LSBundleProxy* _parentBundle;
	unsigned _parentBundleID;
	BOOL _isOnSystemPartition;
	NSString* _pluginIdentifier;
	NSString* _originalIdentifier;
	NSString* _protocol;
	NSUUID* _pluginUUID;
	NSDictionary* _pluginKitDictionary;
	NSDate* _registrationDate;

}

@property (nonatomic,readonly) NSString * pluginIdentifier;                     //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * originalIdentifier;                   //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * protocol;                             //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSUUID * pluginUUID;                             //@synthesize pluginUUID=_pluginUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginKitDictionary;              //@synthesize pluginKitDictionary=_pluginKitDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * infoPlist; 
@property (nonatomic,readonly) NSDate * registrationDate;                       //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,readonly) LSBundleProxy * containingBundle; 
@property (nonatomic,readonly) BOOL isOnSystemPartition;                        //@synthesize isOnSystemPartition=_isOnSystemPartition - In the implementation block
+(id)pluginKitProxyForURL:(id)arg1 ;
+(id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6 ;
+(id)plugInKitProxyForPlugin:(unsigned)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)pluginKitProxyForIdentifier:(id)arg1 ;
+(id)pluginKitProxyForUUID:(id)arg1 ;
-(id)appStoreReceiptURL;
-(id)_initWithPlugin:(unsigned)arg1 ;
-(id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6 ;
-(NSUUID *)pluginUUID;
-(NSString *)originalIdentifier;
-(BOOL)isOnSystemPartition;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)iconDataForVariant:(int)arg1 ;
-(id)localizedName;
-(LSBundleProxy *)containingBundle;
-(NSDictionary *)pluginKitDictionary;
-(id)localizedShortName;
-(NSString *)protocol;
-(NSDate *)registrationDate;
-(NSDictionary *)infoPlist;
-(NSString *)pluginIdentifier;
@end
