//
//  WFAudioDataConverter.h
//  WFAudioDataConverter
//
//  Created by babywolf on 2018/1/25.
//  Copyright © 2018年 babywolf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WFAudioDataConverter : NSObject

/**
 amr转wav

 @param amrData amr数据
 @return wav数据
 */
+ (NSData *)convertAmrToWav:(NSData *)amrData;

/**
 wav转amr

 @param wavData wav数据
 @return amr数据
 */
+ (NSData *)convertWavToAmr:(NSData *)wavData;

@end
