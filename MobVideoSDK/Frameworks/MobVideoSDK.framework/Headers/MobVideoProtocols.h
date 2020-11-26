//
//  MobVideoProtocols.h
//  MobVideoSDK
//
//  Created by 兵伍 on 2020/4/22.
//  Copyright © 2020 兵伍. All rights reserved.
//

#ifndef MobVideoProtocols_h
#define MobVideoProtocols_h

@protocol BMVVideoPlayerProtocol <NSObject>
// 继续播放
- (void)resume;
// 暂停
- (void)pause;
// 如果是播放则暂停，如果是暂停则播放
- (void)resumeOrPause;
// 停止
- (void)stop;
@end

@class UIView;
@class NSDictionary;
@class NSError;

@protocol MobVideoFeedViewProtocol <NSObject>
// 重新加载数据
- (void)reloadData;
// 清除数据
- (void)cleanData;
@end

@protocol MobVideoFeedViewDelegate <NSObject>

- (void)video_shouldShowLoadingViewForVideoFeedView:(UIView<MobVideoFeedViewProtocol> *)feedView;
- (void)video_shouldHideLoadingViewForVideoFeedView:(UIView<MobVideoFeedViewProtocol> *)feedView;
- (void)video_shouldShowRetryViewForVideoFeedView:(UIView<MobVideoFeedViewProtocol> *)feedView;
- (void)video_shouldHideRetryViewForVideoFeedView:(UIView<MobVideoFeedViewProtocol> *)feedView;

// 返回播放器上层的工具视图
- (UIView *)video_playerToolViewForInfo:(NSDictionary *)video;

// 普通视频回调
- (void)video_playerOnPrepare:(id<BMVVideoPlayerProtocol>)player;
- (void)video_playerOnPlaying;
- (void)video_playerOnProgress:(CGFloat)progress duration:(CGFloat)duration;
- (void)video_playerOnPause;
- (void)video_playerOnStop;
- (void)video_playerPlayFinished;
- (void)video_playerPlayError:(NSError *)error;

// 广告视频回调
- (void)video_ad_playerOnPrepare:(NSDictionary *)adInfo;
- (void)video_ad_playerOnPlaying;
- (void)video_ad_playerOnPause;
- (void)video_ad_playerPlayFinished;
- (void)video_ad_playerPlayError:(NSError *)error;

@end

#endif /* MobVideoProtocols_h */
