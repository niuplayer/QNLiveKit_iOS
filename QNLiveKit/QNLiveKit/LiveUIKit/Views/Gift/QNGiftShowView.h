//
//  GiftShowView.h
//  QiNiu_Solution_iOS
//
//  Created by 郭茜 on 2022/1/5.
//  礼物的展示view

#import <UIKit/UIKit.h>
#import "QNGiftCountLabel.h"

@class QNSendGiftModel;
typedef void(^completeShowViewBlock)(BOOL finished,NSString *giftKey);

typedef void(^completeShowViewKeyBlock)(QNSendGiftModel *giftModel);

static const CGFloat showGiftView_UserIcon_WH = 44; //头像宽高
static const CGFloat showGiftView_UserName_W = 60;//名字宽 -
static const CGFloat showGiftView_UserName_H = 16;//名字高 -
static const CGFloat showGiftView_UserName_L = 2;//名字左
static const CGFloat showGiftView_GiftIcon_H = 50;//图片高
static const CGFloat showGiftView_GiftIcon_W = showGiftView_GiftIcon_H*(70/55.0);//图片宽
static const CGFloat showGiftView_UserIcon_LT = (showGiftView_GiftIcon_H-showGiftView_UserIcon_WH)*0.5;//头像距离上/左
static const CGFloat showGiftView_XNum_W = 50;//礼物数宽
static const CGFloat showGiftView_XNum_H = 30;//礼物数高
static const CGFloat showGiftView_XNum_L = 5;//礼物数左


@interface QNGiftShowView : UIView

/**
 展示礼物动效

 @param giftModel 礼物的数据
 @param completeBlock 展示完毕回调
 */
- (void)showGiftShowViewWithModel:(QNSendGiftModel *)giftModel
                    completeBlock:(completeShowViewBlock)completeBlock;

/**
 隐藏礼物
 */
- (void)hiddenGiftShowView;

/** 背景 */
@property(nonatomic,strong) UIView *bgView;
/** icon */
@property(nonatomic,strong) UIImageView *userIconView;
/** name */
@property(nonatomic,strong) UILabel *userNameLabel;
/** giftName */
@property(nonatomic,strong) UILabel *giftNameLabel;
/** giftImage */
@property(nonatomic,strong) UIImageView *giftImageView;
/** count */
@property(nonatomic,strong) QNGiftCountLabel *countLabel;
/** 礼物数 */
@property(nonatomic,assign) NSInteger giftCount;
/** 当前礼物总数 */
@property(nonatomic,assign) NSInteger currentGiftCount;
/** block */
@property(nonatomic,copy)completeShowViewBlock showViewFinishBlock;
/** 返回当前礼物的唯一key */
@property(nonatomic,copy)completeShowViewKeyBlock showViewKeyBlock;
/** model */
@property(nonatomic,strong) QNSendGiftModel *finishModel;

@end
