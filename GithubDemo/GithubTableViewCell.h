//
//  GithubTableViewCell.h
//  GithubDemo
//
//  Created by Pankaj Bedse on 9/15/15.
//  Copyright (c) 2015 codepath. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GithubTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *projectName;
@property (weak, nonatomic) IBOutlet UILabel *userName;
@property (weak, nonatomic) IBOutlet UILabel *numStars;
@property (weak, nonatomic) IBOutlet UILabel *numForks;
@property (weak, nonatomic) IBOutlet UIImageView *avatar;
@property (weak, nonatomic) IBOutlet UILabel *repoDescription;

@end

