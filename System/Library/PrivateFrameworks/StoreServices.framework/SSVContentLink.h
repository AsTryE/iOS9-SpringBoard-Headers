/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, NSURL;

@interface SSVContentLink : NSObject {

	NSString* _categoryName;
	long long _contentKind;
	NSNumber* _itemIdentifier;
	NSString* _itemTitle;
	NSString* _providerName;
	NSString* _searchTerm;
	long long _targetApplication;

}

@property (assign,nonatomic) long long contentKind;                    //@synthesize contentKind=_contentKind - In the implementation block
@property (assign,nonatomic) long long targetApplication;              //@synthesize targetApplication=_targetApplication - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,copy) NSString * categoryName;                    //@synthesize categoryName=_categoryName - In the implementation block
@property (nonatomic,copy) NSNumber * itemIdentifier;                  //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemTitle;                       //@synthesize itemTitle=_itemTitle - In the implementation block
@property (nonatomic,copy) NSString * providerName;                    //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,copy) NSString * searchTerm;                      //@synthesize searchTerm=_searchTerm - In the implementation block
-(void)setProviderName:(NSString *)arg1 ;
-(NSURL *)URL;
-(NSString *)itemTitle;
-(void)setContentKind:(long long)arg1 ;
-(NSString *)providerName;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(long long)targetApplication;
-(long long)contentKind;
-(long long)_targetApplicationWithContentKind:(long long)arg1 ;
-(id)_URLSchemeWithApplication:(long long)arg1 ;
-(id)_stringForContentKind:(long long)arg1 ;
-(void)setItemTitle:(NSString *)arg1 ;
-(void)setTargetApplication:(long long)arg1 ;
@end
