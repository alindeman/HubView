#import <Foundation/Foundation.h>
#import "Branch.h"
#import "GitHubClient.h"
#import "User.h"

@class User;

@interface Repository : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSDate *updatedAt;
@property (nonatomic, strong) User *owner;

+ (NSArray *)initWithArrayOfDictionaries:(NSArray *)arrayOfDictionaries;
- (id)initWithDictionary:(NSDictionary *)attributes;
- (void)branchesWithCompletionBlock:(void (^)(NSArray *branches))block;

@end