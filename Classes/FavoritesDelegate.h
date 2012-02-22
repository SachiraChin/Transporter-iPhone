//
// FavoritesDelegate.h
// kronos
//
// Created by Ljuba Miljkovic on 3/23/10.
// Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FavoritesDelegate : NSObject <UITableViewDelegate, UITableViewDataSource> {

	NSMutableArray *contents;

	id selectedItem;

}

@property (nonatomic, strong) NSMutableArray *contents;
@property (nonatomic) id selectedItem;

@end
