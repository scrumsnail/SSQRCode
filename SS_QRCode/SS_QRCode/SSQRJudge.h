//
//  SSQRJudge.h
//  SS_QRCode
//
//  Created by allthings_LuYD on 16/8/23.
//  Copyright © 2016年 scrum_snail. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
typedef void (^SuccessBlock)();
typedef void (^FailureBlock)();

@interface SSQRJudge : NSObject

+ (id)Judge;


- (void)judgeQRWithAVMetadataMachineReadableCodeObject:(AVMetadataMachineReadableCodeObject *)metadataObj
                                            andSuccess:(SuccessBlock)success
                                            andFailure:(FailureBlock)failure;

@end
