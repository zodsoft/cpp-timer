// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from cpptimer.djinni

#import <Foundation/Foundation.h>
@class CPPTTimer;
@protocol CPPTTimerListener;


@interface CPPTTimer : NSObject

+ (nullable CPPTTimer *)createWithListener:(nullable id<CPPTTimerListener>)listener;

- (void)startTimer:(int32_t)seconds;

@end
