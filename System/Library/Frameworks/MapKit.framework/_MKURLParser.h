/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class _GEOMapURLParser, NSString, GEOUserSessionEntity;

@interface _MKURLParser : NSObject {

	_GEOMapURLParser* parser;

}

@property (readonly) unsigned long long mapType; 
@property (readonly) unsigned long long transportType; 
@property (readonly) long long trackingMode; 
@property (readonly) BOOL exactPositionSpecified; 
@property (readonly) SCD_Struct_MK1 centerCoordinate; 
@property (readonly) SCD_Struct_MK1 span; 
@property (readonly) float zoomLevel; 
@property (readonly) NSString * addressString; 
@property (readonly) NSString * directionsSourceAddressString; 
@property (readonly) NSString * directionsDestinationAddressString; 
@property (readonly) NSString * searchQuery; 
@property (readonly) SCD_Struct_MK1 searchCoordinate; 
@property (readonly) SCD_Struct_MK2 searchRegion; 
@property (readonly) int searchProviderID; 
@property (readonly) unsigned long long searchUID; 
@property (readonly) NSString * contentProvider; 
@property (readonly) NSString * contentProviderID; 
@property (readonly) NSString * abRecordID; 
@property (readonly) NSString * abAddressID; 
@property (readonly) GEOUserSessionEntity * userSessionEntity; 
@property (readonly) double altitude; 
@property (readonly) double rotation; 
@property (readonly) double tilt; 
@property (readonly) double roll; 
+(BOOL)isValidMapURL:(id)arg1 ;
-(float)zoomLevel;
-(id)initWithURL:(id)arg1 ;
-(double)rotation;
-(double)altitude;
-(unsigned long long)transportType;
-(unsigned long long)searchUID;
-(SCD_Struct_MK1)span;
-(NSString *)contentProvider;
-(NSString *)addressString;
-(NSString *)abRecordID;
-(NSString *)contentProviderID;
-(NSString *)directionsSourceAddressString;
-(BOOL)parseIncludingCustomParameters:(BOOL)arg1 ;
-(NSString *)abAddressID;
-(unsigned long long)mapType;
-(NSString *)searchQuery;
-(GEOUserSessionEntity *)userSessionEntity;
-(NSString *)directionsDestinationAddressString;
-(SCD_Struct_MK1)searchCoordinate;
-(long long)trackingMode;
-(double)tilt;
-(SCD_Struct_MK2)searchRegion;
-(BOOL)exactPositionSpecified;
-(SCD_Struct_MK1)centerCoordinate;
-(int)searchProviderID;
-(double)roll;
@end

