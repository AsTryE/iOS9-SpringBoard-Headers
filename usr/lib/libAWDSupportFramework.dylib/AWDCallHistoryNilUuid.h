/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _callStatus;
	unsigned _callType;
	SCD_Struct_AW6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCallType; 
@property (assign,nonatomic) unsigned callType;                         //@synthesize callType=_callType - In the implementation block
@property (assign,nonatomic) BOOL hasCallStatus; 
@property (assign,nonatomic) unsigned callStatus;                       //@synthesize callStatus=_callStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCallType:(unsigned)arg1 ;
-(void)setHasCallType:(BOOL)arg1 ;
-(BOOL)hasCallType;
-(void)setCallStatus:(unsigned)arg1 ;
-(void)setHasCallStatus:(BOOL)arg1 ;
-(BOOL)hasCallStatus;
-(unsigned)callType;
-(unsigned)callStatus;
@end

