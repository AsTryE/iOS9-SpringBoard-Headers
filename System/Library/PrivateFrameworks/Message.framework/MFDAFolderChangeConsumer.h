/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:47 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAFolderChangeConsumer.h>

@class MFConditionLock, MFDAFolderChangeResult;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {

	MFConditionLock* _conditionLock;
	MFDAFolderChangeResult* _result;

}
-(void)dealloc;
-(id)init;
-(id)waitForResult;
-(void)folderChange:(id)arg1 finishedWithStatus:(long long)arg2 error:(id)arg3 ;
@end
