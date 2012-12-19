#import <UIKit/UIKit.h>
#import "Branch.h"
#import "Commit.h"
#import "CommitViewController.h"

#define PADDING 20

@interface CommitTableViewController : UITableViewController

@property (nonatomic, strong) Branch *branch;
@property (nonatomic, strong) NSArray *commits;

@end
