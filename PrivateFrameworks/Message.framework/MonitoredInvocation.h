/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class ActivityMonitor;



@interface MonitoredInvocation : MessageInvocation 
{
    ActivityMonitor *_monitor;
    unsigned int _shouldLogInvocation : 1;
}

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(unsigned char)arg4 canBeCancelled:(BOOL)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(unsigned char)arg5 canBeCancelled:(BOOL)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(unsigned char)arg6 canBeCancelled:(BOOL)arg7;

- (id)init;
- (void)dealloc;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (BOOL)shouldLogInvocation;
- (void)setShouldLogInvocation:(BOOL)arg1;
- (id)invoke;
- (id)description;

@end