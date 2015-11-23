/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {

	NSString* _nextETag;

}

@property (assign,nonatomic) id<CoreDAVTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * nextETag;                           //@synthesize nextETag=_nextETag - In the implementation block
-(void)dealloc;
-(id)description;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)nextETag;
-(id)httpMethod;
-(void)setNextETag:(NSString *)arg1 ;
@end
