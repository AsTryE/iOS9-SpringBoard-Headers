/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:48 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MCMContainerManager : NSObject
+(id)defaultManager;
-(id)_containersWithClass:(long long)arg1 temporary:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 error:(id*)arg3 ;
-(id)temporaryContainerWithContentClass:(long long)arg1 identifier:(id)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 ;
-(id)temporaryContainersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)containerWithContentClass:(long long)arg1 identifier:(id)arg2 createIfNecessary:(BOOL)arg3 existed:(BOOL*)arg4 error:(id*)arg5 ;
-(BOOL)replaceContainer:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)containersWithClass:(long long)arg1 error:(id*)arg2 ;
-(id)deleteContainers:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

