/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, AVAssetResourceLoadingRequest;

@interface SSVSecureKeyDeliveryRequestOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSURL* _certificateURL;
	NSURL* _keyServerURL;
	AVAssetResourceLoadingRequest* _resourceLoadingRequest;
	/*^block*/id _responseBlock;
	BOOL _iTunesStoreRequest;

}

@property (retain) NSURL * certificateURL;                                              //@synthesize certificateURL=_certificateURL - In the implementation block
@property (retain) NSURL * keyServerURL;                                                //@synthesize keyServerURL=_keyServerURL - In the implementation block
@property (retain) AVAssetResourceLoadingRequest * resourceLoadingRequest;              //@synthesize resourceLoadingRequest=_resourceLoadingRequest - In the implementation block
@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest; 
@property (copy) id responseBlock;                                                      //@synthesize responseBlock=_responseBlock - In the implementation block
-(id)responseBlock;
-(id)init;
-(void)start;
-(void)main;
-(void)setITunesStoreRequest:(BOOL)arg1 ;
-(void)setResponseBlock:(id)arg1 ;
-(void)_sendResponseBlockWithError:(id)arg1 ;
-(id)_streamingKeyDictionaryForID:(long long)arg1 URI:(id)arg2 serverPlaybackContextData:(id)arg3 ;
-(id)_streamingRequestDictionaryWithStreamingKeyDictionaries:(id)arg1 ;
-(id)_contentKeyContextForStreamingKeyID:(long long)arg1 streamingKeyDictionaries:(id)arg2 error:(id*)arg3 ;
-(NSURL *)keyServerURL;
-(AVAssetResourceLoadingRequest *)resourceLoadingRequest;
-(void)setKeyServerURL:(NSURL *)arg1 ;
-(void)setResourceLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 ;
-(BOOL)isITunesStoreRequest;
-(NSURL *)certificateURL;
-(void)setCertificateURL:(NSURL *)arg1 ;
@end

