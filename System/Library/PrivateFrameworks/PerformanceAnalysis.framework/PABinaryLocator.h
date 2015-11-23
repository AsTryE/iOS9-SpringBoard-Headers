/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class NSMutableDictionary;

@interface PABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	BOOL _dirty;
	BOOL _enabled;

}

@property (assign) BOOL enabled; 
+(id)getRetainedSharedBinaryLocator;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(void)setEnabled:(BOOL)arg1 ;
-(id)mappings;
-(BOOL)addURLForCSSymbolOwner:(CSTypeRef)arg1 ;
-(id)urlForUUID:(id)arg1 ;
-(BOOL)removeURLForUUID:(id)arg1 ;
-(id)initSharedBinaryLocator;
-(void)saveMappings;
-(BOOL)addURL:(id)arg1 ForUUID:(id)arg2 ;
@end
