//  BaseDAO.h
//  PersistenceLayer

#import "sqlite3.h"
#import "DBHelper.h"

@interface BaseDAO : NSObject {
    sqlite3 *db;
}

//打开SQLite数据库，返回值为true打开成功，false打开失败
- (BOOL)openDB;


@end
