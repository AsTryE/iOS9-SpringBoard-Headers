/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface GKMatchPacket : NSObject {

	unsigned char _version;
	unsigned char _packetType;
	unsigned _sequenceNumber;
	unsigned _totalLength;
	unsigned short _checksum;
	BOOL _valid;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char version;                 //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;               //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned totalLength;                  //@synthesize totalLength=_totalLength - In the implementation block
@property (assign,nonatomic) unsigned short checksum;               //@synthesize checksum=_checksum - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)message;
-(BOOL)valid;
-(void)setVersion:(unsigned char)arg1 ;
-(unsigned char)version;
-(void)setValid:(BOOL)arg1 ;
-(void)setTotalLength:(unsigned)arg1 ;
-(unsigned)totalLength;
-(void)setChecksum:(unsigned short)arg1 ;
-(unsigned char)packetType;
-(void)setPacketType:(unsigned char)arg1 ;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned short)checksum;
-(id)initWithMessage:(id)arg1 ;
@end

