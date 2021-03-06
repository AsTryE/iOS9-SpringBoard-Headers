/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSMutableArray;

@interface ASMoveItemsTask : ASTask {

	NSArray* _pushedMoveRequests;
	long long _dataclass;
	NSMutableArray* _moveItems;

}

@property (nonatomic,retain) NSArray * pushedMoveRequests;              //@synthesize pushedMoveRequests=_pushedMoveRequests - In the implementation block
@property (assign,nonatomic) long long dataclass;                       //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,retain) NSMutableArray * moveItems;                //@synthesize moveItems=_moveItems - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(long long)dataclass;
-(NSArray *)pushedMoveRequests;
-(void)setPushedMoveRequests:(NSArray *)arg1 ;
-(void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3 ;
-(NSMutableArray *)moveItems;
-(void)setMoveItems:(NSMutableArray *)arg1 ;
-(void)setDataclass:(long long)arg1 ;
@end

