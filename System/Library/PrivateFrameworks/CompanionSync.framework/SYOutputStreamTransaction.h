/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYStreamTransaction.h>

@class NSDictionary, NSProgress, NSURL, NSOutputStream, NSString;

@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction> {

	NSDictionary* _metadata;
	NSURL* _fileURL;
	NSOutputStream* _stream;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize stream=_stream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                      //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(long long)type;
-(NSProgress *)progress;
-(NSURL *)fileURL;
-(BOOL)prepare:(id*)arg1 ;
-(id)finalizeOutput:(id*)arg1 ;
-(NSOutputStream *)outputStream;
-(NSDictionary *)metadata;
-(id)initWithMetadata:(id)arg1 ;
@end
