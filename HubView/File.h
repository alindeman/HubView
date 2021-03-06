#import <Foundation/Foundation.h>
#import "Commit.h"
#import "Patch.h"

@class Commit;
@class Patch;

@interface File : NSObject

@property (nonatomic, strong) NSString *filename;
@property (nonatomic, strong) Patch *patch;
@property (nonatomic, strong) Commit *commit;

+ (NSArray *)initWithArrayOfDictionaries:(NSArray *)arrayOfDictionaries;
- (id)initWithDictionary:(NSDictionary *)attributes;

@end
