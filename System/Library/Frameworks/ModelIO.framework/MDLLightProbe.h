/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLLight.h>

@protocol MDLTransformComponent;
@class MDLTexture, NSMutableData, NSData;

@interface MDLLightProbe : MDLLight {

	MDLTexture* _reflectiveTexture;
	MDLTexture* _irradianceTexture;
	NSMutableData* _sphericalHarmonicsCoefficients;
	id<MDLTransformComponent> _transform;
	unsigned long long _sphericalHarmonicsLevel;

}

@property (nonatomic,retain,readonly) MDLTexture * reflectiveTexture;                     //@synthesize reflectiveTexture=_reflectiveTexture - In the implementation block
@property (nonatomic,retain,readonly) MDLTexture * irradianceTexture;                     //@synthesize irradianceTexture=_irradianceTexture - In the implementation block
@property (nonatomic,readonly) unsigned long long sphericalHarmonicsLevel;                //@synthesize sphericalHarmonicsLevel=_sphericalHarmonicsLevel - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
+(id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6 ;
-(void)setSphericalHarmonicsCoefficients:(NSData *)arg1 ;
-(id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2 ;
-(void)generateIrradianceTextureFromReflective;
-(void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1 ;
-(CGColorRef)evaluatedColorFromVector:;
-(MDLTexture *)reflectiveTexture;
-(MDLTexture *)irradianceTexture;
-(unsigned long long)sphericalHarmonicsLevel;
-(NSData *)sphericalHarmonicsCoefficients;
-(void)setTransform:(id)arg1 ;
-(id)transform;
@end

