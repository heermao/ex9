// Events.h
//  PersistenceLayer

#import <Foundation/Foundation.h>

//比赛项目 实体类
@interface Events : NSObject

//编号
@property(nonatomic, assign) int EventID;
//项目名
@property(nonatomic, strong) NSString *EventName;
//项目图标
@property(nonatomic, strong) NSString *EventIcon;
//项目关键信息
@property(nonatomic, strong) NSString *KeyInfo;
//项目基本信息
@property(nonatomic, strong) NSString *BasicsInfo;
//项目奥运会历史信息
@property(nonatomic, strong) NSString *OlympicInfo;

@end
