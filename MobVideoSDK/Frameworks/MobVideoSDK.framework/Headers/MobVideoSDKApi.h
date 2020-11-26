//
//  MobVideoSDKApi.h
//  MobVideoSDK
//
//  Created by 兵伍 on 2020/4/21.
//  Copyright © 2020 兵伍. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MobVideoSDK/MobVideoSDKConfig.h>
#import <MobVideoSDK/MobVideoProtocols.h>

NS_ASSUME_NONNULL_BEGIN

@interface MobVideoSDKApi : NSObject

/**
 * SDK版本 2.2.1(1)
 */
+ (NSString *)sdkVersion;

/**
 * SDK 初始化接口
 * @param config 初始化配置对象
 * @return YES：初始化成功；NO：初始化失败
 */
+ (BOOL)setupWithConfig:(MobVideoSDKConfig *)config;

/**
 * 获取视频feed流视图
 * @param frame 视图的尺寸
 * @param vc 所添加的viewController
 * @param delegate 回调代理
 * @return 视频feed流视图
 */
+ (UIView<MobVideoFeedViewProtocol> *)videoFeedViewWithFrame:(CGRect)frame viewController:(UIViewController *)vc delegate:(_Nullable id<MobVideoFeedViewDelegate>)delegate;

/**
 * 获取视频feed流视图
 * @param delegate 回调代理
 * @return 视频ViewController
 */
+ (UIViewController<MobVideoFeedViewProtocol> *)videoFeedViewWithDelegate:(_Nullable id<MobVideoFeedViewDelegate>)delegate btnImg:(UIImage *)btnImg;

@end

NS_ASSUME_NONNULL_END
