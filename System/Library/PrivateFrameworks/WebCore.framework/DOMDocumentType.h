/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class NSString, DOMNamedNodeMap;

@interface DOMDocumentType : DOMNode

@property (copy,readonly) NSString * name; 
@property (readonly) DOMNamedNodeMap * entities; 
@property (readonly) DOMNamedNodeMap * notations; 
@property (copy,readonly) NSString * publicId; 
@property (copy,readonly) NSString * systemId; 
@property (copy,readonly) NSString * internalSubset; 
-(NSString *)name;
-(void)remove;
-(DOMNamedNodeMap *)entities;
-(DOMNamedNodeMap *)notations;
-(NSString *)publicId;
-(NSString *)systemId;
-(NSString *)internalSubset;
@end
