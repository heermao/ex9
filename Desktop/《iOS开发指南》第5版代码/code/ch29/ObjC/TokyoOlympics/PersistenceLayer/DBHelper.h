//  DBHelper.h
//  PersistenceLayer

#import <Foundation/Foundation.h>
#import "sqlite3.h"

#define DB_FILE_NAME @"app.db"

static sqlite3 *db;

@interface DBHelper : NSObject

//获得沙箱Document目录下全路径
+ (const char *)applicationDocumentsDirectoryFile:(NSString *)fileName;

//初始化并加载数据
+ (void)initDB;

//从数据库获得当前数据库版本号
+ (int)dbVersionNubmer;

@end
