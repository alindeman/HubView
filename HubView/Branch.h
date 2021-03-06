#import <Foundation/Foundation.h>
#import "Commit.h"
#import "GitHubClient.h"
#import "Repository.h"

@class Repository;

@interface Branch : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) Repository *repository;

+ (NSArray *)initWithArrayOfDictionaries:(NSArray *)arrayOfDictionaries;
- (id)initWithDictionary:(NSDictionary *)attributes;
- (void)commitsWithCompletionBlock:(void (^)(NSArray *commits))block;

@end