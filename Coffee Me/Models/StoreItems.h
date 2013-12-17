//
//  StoreItems.h
//  Coffee Me
//
//  Created by Christian Roman on 17/12/13.
//  Copyright (c) 2013 Christian Roman. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface StoreItems : MTLModel <MTLJSONSerializing>

@property (nonatomic, strong, readonly) NSMutableArray *items;

@end
