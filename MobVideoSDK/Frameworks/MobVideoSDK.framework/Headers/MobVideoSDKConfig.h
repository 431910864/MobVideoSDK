//
//  MobVideoSDKConfig.h
//  MobVideoSDK
//
//  Created by 兵伍 on 2020/4/21.
//  Copyright © 2020 兵伍. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MobVideoSDKConfig : NSObject
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, assign) BOOL enableTestEnv;

@end

NS_ASSUME_NONNULL_END
