/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCCertificateWrapperProfile : MCConfigurationProfile {
}

+ (id)_basicWrapperProfileDictForCertificateName:(id)arg1 fileName:(id)arg2 identifier:(id)arg3;
+ (id)_identifierHashFromData:(id)arg1;
+ (id)_wrapperPayloadDictWithCertData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4 type:(id)arg5;
+ (id)_wrapperProfileDictForCertificate:(struct __SecCertificate { }*)arg1 fileName:(id)arg2 certData:(id)arg3 type:(id)arg4;
+ (id)_wrapperProfileForWAPICertificate:(struct __SecCertificate { }*)arg1 fileName:(id)arg2 PEMData:(id)arg3;
+ (id)_wrapperWAPIPayloadDictWithPEMData:(id)arg1 fileName:(id)arg2 name:(id)arg3 identifier:(id)arg4;
+ (id)wrapperProfileDictionaryWithCertificateData:(id)arg1 fileName:(id)arg2;

- (id)_certificatePayload;
- (id)earliestCertificateExpiryDate;
- (id)initWithDictionary:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(id*)arg3;
- (BOOL)isSigned;
- (id)stubDictionary;
- (int)trustLevel;

@end
