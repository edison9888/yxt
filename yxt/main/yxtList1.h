//
//  yxtList1.h
//  yxt
//
//  Created by world ask on 13-5-29.
//  Copyright (c) 2013年 com.landwing.yxt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface yxtList1 : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSArray *dataSource;
@property (strong, nonatomic) IBOutlet UITableView *tableView1;

-(void) loadData;

@end
