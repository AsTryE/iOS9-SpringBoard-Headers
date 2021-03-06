/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:57 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MSASComment;

@interface MSASCommentChange : NSObject {

	int _deletionIndex;
	int _type;
	MSASComment* _comment;

}

@property (nonatomic,retain) MSASComment * comment;              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) int deletionIndex;                  //@synthesize deletionIndex=_deletionIndex - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
-(void)setComment:(MSASComment *)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)deletionIndex;
-(void)setDeletionIndex:(int)arg1 ;
-(MSASComment *)comment;
@end

