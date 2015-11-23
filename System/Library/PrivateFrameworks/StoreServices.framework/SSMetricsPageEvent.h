/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:00 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (assign,getter=isCachedResponse,nonatomic) BOOL cachedResponse; 
@property (nonatomic,retain) NSString * navigationType; 
@property (assign,nonatomic) double pageRenderTime; 
@property (nonatomic,retain) NSString * referringAppName; 
@property (nonatomic,retain) NSString * referringURL; 
@property (assign,nonatomic) double requestEndTime; 
@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * serverApplicationInstance; 
@property (nonatomic,retain) NSString * serverTiming; 
@property (assign,getter=isUbered,nonatomic) BOOL ubered; 
@property (nonatomic,retain) NSString * pageHistoryDescription; 
-(id)init;
-(id)description;
-(void)setNavigationType:(NSString *)arg1 ;
-(void)setPageRenderTime:(double)arg1 ;
-(void)setUbered:(BOOL)arg1 ;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSString *)searchTerm;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setReferringAppName:(NSString *)arg1 ;
-(void)setReferringURL:(NSString *)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setServerApplicationInstance:(NSString *)arg1 ;
-(void)setServerTiming:(NSString *)arg1 ;
-(BOOL)isCachedResponse;
-(void)setCachedResponse:(BOOL)arg1 ;
-(void)setPageHistoryDescription:(NSString *)arg1 ;
-(NSString *)serverApplicationInstance;
-(BOOL)isUbered;
-(NSString *)navigationType;
-(NSString *)pageHistoryDescription;
-(double)pageRenderTime;
-(NSString *)referringAppName;
-(NSString *)referringURL;
-(double)requestEndTime;
-(NSString *)serverTiming;
-(void)setPageHistoryDescriptionWithIdentifiers:(id)arg1 ;
-(void)setRequestEndTime:(double)arg1 ;
@end
