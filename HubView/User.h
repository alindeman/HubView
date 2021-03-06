#import <Foundation/Foundation.h>
#import "GitHubClient.h"
#import "Repository.h"

@interface User : NSObject

@property (nonatomic, strong) NSString *login;

+ (NSArray *)initWithArrayOfDictionaries:(NSArray *)arrayOfDictionaries;
- (id)initWithDictionary:(NSDictionary *)attributes;
- (void)repositoriesWithCompletionBlock:(void (^)(NSArray *repositories))block;

@end
