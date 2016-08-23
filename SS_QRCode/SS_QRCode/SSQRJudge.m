//
//  SSQRJudge.m
//  SS_QRCode
//
//  Created by allthings_LuYD on 16/8/23.
//  Copyright © 2016年 scrum_snail. All rights reserved.
//

#import "SSQRJudge.h"

@implementation SSQRJudge

+ (id)Judge
{
    static SSQRJudge * judge = nil;
    if (judge == nil)
    {
        judge = [[self alloc]init];
    }
    return judge;
}

- (void)judgeQRWithAVMetadataMachineReadableCodeObject:(AVMetadataMachineReadableCodeObject *)metadataObj andSuccess:(SuccessBlock)success andFailure:(FailureBlock)failure
{
    //在此做判断
    if (metadataObj)
    {
        success();
    }
    else
    {
        failure();
    }
}

@end
