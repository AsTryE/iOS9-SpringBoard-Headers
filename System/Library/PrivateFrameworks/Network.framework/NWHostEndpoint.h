/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (readonly) NSString * hostname; 
@property (readonly) NSString * port; 
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
-(NSString *)port;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)hostname;
@end
