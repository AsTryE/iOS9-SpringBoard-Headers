/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface CKPackageSection : NSObject {

	long long _index;
	NSData* _signature;
	unsigned long long _size;

}

@property (nonatomic,readonly) long long index;                    //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSData * signature;                 //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;              //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(id)description;
-(void)setSize:(unsigned long long)arg1 ;
-(long long)index;
-(id)CKPropertiesDescription;
-(NSData *)signature;
-(id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(unsigned long long)arg3 ;
@end

