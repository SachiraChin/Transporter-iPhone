//
// TransitDelegate.h
// An abstract class for the AgencyDelegates which conforms to the tableView delegate and datasource protocols
// This class contains the method of populating the routes array in each agency delegate
//
// Created by Ljuba Miljkovic on 3/23/10.
// Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "Agency.h"
#import "Route.h"
#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>

#define kLinesPerRow 5
#define kLargeLinesPerRow 3

@interface TransitDelegate : NSObject <UITableViewDelegate, UITableViewDataSource, CLLocationManagerDelegate> {

	NSMutableArray *contents;

	id selectedItem;

}

@property (nonatomic) NSMutableArray *contents;
@property (nonatomic) id selectedItem;

- (void) setContentsForAgency:(Agency *)agency;
- (NSArray *) formatContentsForAgency:(Agency *)agency;

@end
