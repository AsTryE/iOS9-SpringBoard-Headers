/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, IMDoubleLinkedList;

@interface IMOrderedMutableDictionary : NSObject {

	NSMutableDictionary* _dictionnary;
	IMDoubleLinkedList* _linkedList;

}
-(void)dealloc;
-(id)init;
-(void)setOrderedObject:(id)arg1 forKey:(id)arg2 ;
-(id)orderedObjectForKey:(id)arg1 ;
-(BOOL)removeOrderedObjectForKey:(id)arg1 ;
-(id)orderedObjects;
@end

