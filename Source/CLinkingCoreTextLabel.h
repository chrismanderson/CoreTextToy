//
//  CLinkingCoreTextLabel.h
//  CoreText
//
//  Created by Jonathan Wight on 1/18/12.
//  Copyright (c) 2012 toxicsoftware.com. All rights reserved.
//

#import "CCoreTextLabel.h"

@interface CLinkingCoreTextLabel : CCoreTextLabel

@property (readonly, nonatomic, retain) NSArray *linkRanges;

@property (readwrite, nonatomic, copy) BOOL (^URLHandler)(NSRange,NSURL *);
@property (readwrite, nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

@end
