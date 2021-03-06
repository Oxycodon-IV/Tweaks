//
//  New_PersonDetailViewController.h
//  test
//
//  Created by Brian Olencki on 3/10/16.
//  Copyright © 2016 bolencki13. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNAPersonCell;
@interface BNAPersonDetailViewController : UITableViewController {
    NSMutableArray *aryTableView;
    
    BNAPersonCell *_parentCell;
}

/* Pass the 'PersonCell' to the 'PersonDetailViewController' in order to grab the necessary information*/
@property (nonatomic, readonly) BNAPersonCell *parentCell;

/* The only instancetype that should be used. DO NOT use any other */
- (instancetype)initWithCell:(BNAPersonCell*)cell;
@end
