//
// LineCell.h
// transporter
//
// Created by Ljuba Miljkovic on 4/25/10.
// Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "LineCellView.h"
#import <UIKit/UIKit.h>

@interface LineCell : UITableViewCell {

	LineCellView *lineCellView;

}

@property (nonatomic, strong) LineCellView *lineCellView;

@end
