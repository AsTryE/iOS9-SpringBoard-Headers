/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {

	NSRefCountedRunArray* theList;

}
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 runIndex:(unsigned long long*)arg3 ;
-(id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long*)arg2 ;
-(id)initWithRefCountedRunArray:(NSRefCountedRunArray*)arg1 ;
-(void)_makeNewListFrom:(NSRefCountedRunArray*)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end

