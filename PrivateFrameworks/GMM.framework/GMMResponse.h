/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary;



@interface GMMResponse : NSObject 
{
    NSInteger _responseCode;
    NSDictionary *_httpHeaders;
}

@property(readonly) NSData *data;
@property NSInteger responseCode; /* unknown property attribute: V_responseCode */
@property(retain) NSDictionary *httpHeaders; /* unknown property attribute: V_httpHeaders */


- (id)initWithData:(id)arg1;
- (void)dealloc;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1 tillEnd:(BOOL)arg2;
     /* Encoded args for previous method: c16@0:4^{InputDataStream=*IIBB}8c12 */

- (id)data;
- (NSInteger)responseCode;
- (void)setResponseCode:(NSInteger)arg1;
- (id)httpHeaders;
- (void)setHttpHeaders:(id)arg1;

@end