/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TILanguageModelOfflineLearningTask.h>

@protocol TILinguisticDataSource;
@class NSCharacterSet, NSSet;

@interface TILanguageModelOfflineLearningTaskMail : TILanguageModelOfflineLearningTask {

	NSCharacterSet* _linePaddingCharacters;
	NSSet* _forwardedMessageSeparators;
	id<TILinguisticDataSource> _dataSource;

}
-(void)dealloc;
-(id)dataSource;
-(id)initWithClientIdentifier:(id)arg1 ;
-(id)linePaddingCharacters;
-(id)forwardedMessageSeparators;
@end
