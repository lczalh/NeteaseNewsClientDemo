//
//  JieShouCell.h
//  网易新闻
//
//  Created by 刘超正 on 2017/8/24.
//  Copyright © 2017年 LiuChaoZheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WenDaModel.h"
@interface JieShouCell : UITableViewCell
@property (nonatomic ,strong) UILabel *jieShou;
@property (nonatomic ,strong) WenDaModel *model;
@property (nonatomic ,strong) UILabel *title;
@property (nonatomic ,strong) UIImageView *imgV;
@end
