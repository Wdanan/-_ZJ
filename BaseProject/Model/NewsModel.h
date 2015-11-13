//
//  NewsModel.h
//  BaseProject
//
//  Created by tarena on 15/10/22.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"
@class NewsResultModel,NewsResultHeadlineinfoModel,NewsResultHeadTopnewsinfoModel;

@interface NewsModel : BaseModel
@property (nonatomic,strong)NSString *message;
@property (nonatomic,strong)NSNumber *returncode;
@property (nonatomic,strong)NewsResultModel *result;
@end


@interface NewsResultModel : BaseModel
@property (nonatomic,strong)NSArray *focusimg;
@property (nonatomic,strong)NewsResultHeadlineinfoModel *headlineinfo;
@property (nonatomic,strong)NSNumber *isloadmore;
@property (nonatomic,strong)NSArray *anewslist;
@property (nonatomic,strong)NSNumber *rowcount;
@property (nonatomic,strong)NewsResultHeadTopnewsinfoModel *topnewsinfo;
@end
/*
 "id": 865986,
 "imgurl": "http://www0.autoimg.cn/zx/newspic/2015/3/30/640x320_0_2015033011190292629.jpg",
 "JumpType": 0,
 "jumpurl": "",
 "mediatype": 1,
 "pageindex": 1,
 "replycount": 0,
 "title": "大部分表现不错 后备厢容积揭底测试(2)",
 "type": "试驾评测",
 "updatetime": "20150331061128"

 */
@interface NewsResultFocusimgModel : BaseModel

@property (nonatomic,strong)NSNumber *ID;
@property (nonatomic,strong)NSString *imgurl;
@property (nonatomic,strong)NSNumber *JumpType;
@property (nonatomic,strong)NSString *jumpurl;
@property (nonatomic,strong)NSNumber *mediatype;
@property (nonatomic,strong)NSNumber *pageindex;
@property (nonatomic,strong)NSNumber *replycount;
@property (nonatomic,strong)NSString *title;
@property (nonatomic,strong)NSString *type;
@property (nonatomic,strong)NSString *updatetime;
@end

/*
 "id": 866356,
 "indexdetail": "",
 "jumppage": 1,
 "lasttime": "",
 "mediatype": 1,
 "pagecount": 0,
 "replycount": 108,
 "smallpic": "http://www0.autoimg.cn/zx/newspic/2015/3/30/160x120_0_2015033022305408967.jpg",
 "time": "2015-03-31",
 "title": "减重90.7kg 新一代科迈罗5月16日亮相",
 "type": "新闻中心",
 "updatetime": "20150331073015"

 */

@interface NewsResultHeadlineinfoModel : BaseModel

@property (nonatomic,strong)NSString *updatetime;
@property (nonatomic,strong)NSString *type;
@property (nonatomic,strong)NSString *title;
@property (nonatomic,strong)NSString *indexdetail;
@property (nonatomic,strong)NSString *lasttime;
@property (nonatomic,strong)NSString *smallpic;
@property (nonatomic,strong)NSString *time;
@property (nonatomic,strong)NSNumber *jumppage;
@property (nonatomic,strong)NSNumber *mediatype;
@property (nonatomic,strong)NSNumber *pagecount;
@property (nonatomic,strong)NSNumber *replycount;
@property (nonatomic,strong)NSNumber *ID;
@end



@interface NewsResultNewslistModel : NewsResultHeadlineinfoModel

//变量的名字不能以new开头

@property (nonatomic,strong)NSNumber *anewstype;
@property (nonatomic,strong)NSNumber *dbid;
@property (nonatomic,strong)NSString *intacttime;

@end

@interface NewsResultHeadTopnewsinfoModel : BaseModel

@end