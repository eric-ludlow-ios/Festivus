//
//  VendorController.h
//  Festivus
//
//  Created by Skyler Tanner on 8/8/15.
//  Copyright (c) 2015 Alan Barth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Vendor.h"

@interface VendorController : NSObject

@property (strong, nonatomic) NSArray *vendors;
@property (strong, nonatomic) NSArray *favoritedVendors;

- (void)setFavorite:(Vendor*)vendor;
- (void)removeFavorite:(Vendor*)vendor;

@end
