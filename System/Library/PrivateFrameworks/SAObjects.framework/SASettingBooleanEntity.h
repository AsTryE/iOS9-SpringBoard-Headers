/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingEntity.h>

@class NSNumber;

@interface SASettingBooleanEntity : SASettingEntity

@property (nonatomic,copy) NSNumber * previousValue; 
@property (assign,nonatomic) BOOL value; 
+(id)booleanEntity;
+(id)booleanEntityWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)booleanEntityWithValue:(BOOL)arg1 ;
-(void)setPreviousValue:(NSNumber *)arg1 ;
-(NSNumber *)previousValue;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)initWithValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
