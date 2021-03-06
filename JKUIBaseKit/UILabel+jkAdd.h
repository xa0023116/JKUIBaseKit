//  UILabel+Add.m
//  JianKeDoctor
//
//  Created by lijiawei on 2017/3/10.
//  Copyright © 2017年 lijiawei. All rights reserved.


#import <UIKit/UIKit.h>

@interface UILabel (jkAdd)
/**
 *  字间距
 */
@property (nonatomic,assign)CGFloat characterSpace;

/**
 *  行间距
 */
@property (nonatomic,assign)CGFloat lineSpace;

/**
 *  关键字
 */
@property (nonatomic,copy)NSString *keywords;
@property (nonatomic,strong)UIFont *keywordsFont;
@property (nonatomic,strong)UIColor *keywordsColor;

/**
 *  下划线
 */
@property (nonatomic,copy)NSString *underlineStr;
@property (nonatomic,strong)UIColor *underlineColor;

/**
 *  计算label宽高，必须调用
 *
 *  @param maxWidth 最大宽度
 *
 *  @return label的rect
 */
- (CGSize)getLableRectWithMaxWidth:(CGFloat)maxWidth;

/**
 计算label的高度

 @param spacing 行间距
 */
- (void)oracleenLabelAutoHeightWith:(NSInteger)spacing;

@end
