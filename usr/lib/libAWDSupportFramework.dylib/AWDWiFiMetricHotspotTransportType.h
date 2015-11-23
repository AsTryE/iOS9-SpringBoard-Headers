/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricHotspotTransportType : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bt;
	unsigned _usb;
	unsigned _wifi;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasWifi; 
@property (assign,nonatomic) unsigned wifi;                             //@synthesize wifi=_wifi - In the implementation block
@property (assign,nonatomic) BOOL hasBt; 
@property (assign,nonatomic) unsigned bt;                               //@synthesize bt=_bt - In the implementation block
@property (assign,nonatomic) BOOL hasUsb; 
@property (assign,nonatomic) unsigned usb;                              //@synthesize usb=_usb - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
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
-(void)setWifi:(unsigned)arg1 ;
-(void)setHasWifi:(BOOL)arg1 ;
-(BOOL)hasWifi;
-(void)setBt:(unsigned)arg1 ;
-(void)setHasBt:(BOOL)arg1 ;
-(BOOL)hasBt;
-(void)setUsb:(unsigned)arg1 ;
-(void)setHasUsb:(BOOL)arg1 ;
-(BOOL)hasUsb;
-(unsigned)wifi;
-(unsigned)bt;
-(unsigned)usb;
@end
