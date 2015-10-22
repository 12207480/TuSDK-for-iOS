//
//  TuSDKPFEditCuterControllerBase.h
//  TuSDK
//
//  Created by Clear Hu on 15/9/8.
//  Copyright (c) 2015年 tusdk.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TuSDKCPImageResultController.h"
#import "TuSDKRatioType.h"
#import "TuSDKICTouchImageView.h"

/**
 *  图片编辑裁切旋转控制器基础类
 */
@interface TuSDKPFEditCuterControllerBase : TuSDKCPImageResultController

/**
 *  图片编辑视图 (旋转，缩放)
 */
@property (nonatomic, readonly) UIView<TuSDKICTouchImageViewInterface> *imageView;

/**
 *  视图显示比例类型 (默认:lsqRatioAll, 如果设置cameraViewRatio > 0, 将忽略ratioType)
 */
@property (nonatomic) lsqRatioType ratioType;

/**
 *  是否仅返回裁切参数，不返回处理图片
 */
@property (nonatomic) BOOL onlyReturnCuter;

#pragma mark - inner config
/**
 *  裁剪结果
 */
@property (nonatomic, setter=setCuterResult:) TuSDKResult *cuterResult;

/**
 *  缩放选择区域
 */
@property (nonatomic) CGRect zoomRect;
/**
 *  缩放比例
 */
@property (nonatomic) CGFloat zoomScale;
/**
 *  当前裁剪比例类型
 */
@property (nonatomic) lsqRatioType currentRatioType;
/**
 *  当前裁剪比例
 */
@property (nonatomic) CGFloat currentRatio;

/**
 *  编辑图片完成按钮动作
 */
- (void)onImageCompleteAtion;
@end