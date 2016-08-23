//
//  SSQRImage.h
//  SS_QRCode
//
//  Created by allthings_LuYD on 16/8/23.
//  Copyright © 2016年 scrum_snail. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreImage/CoreImage.h>
@interface SSQRImage : UIImageView

@property(nonatomic, copy)NSString * title;
@property(nonatomic, strong)UIImage * avater;
- (void)setTitle:(NSString *)title andImage:(UIImage *)image;

@end
