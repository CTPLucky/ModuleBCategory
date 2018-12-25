//
//  CTMediator+ModuleB.h
//  ModuleBCategory
//
//  Created by 末小夕 on 2018/12/25.
//  Copyright © 2018 末小夕. All rights reserved.
//

#import "CTMediator.h"

@interface CTMediator (ModuleB)

- (UIViewController *)ModuleB_viewControllerWithCallback:(void(^)(NSString *result))callback;

@end
