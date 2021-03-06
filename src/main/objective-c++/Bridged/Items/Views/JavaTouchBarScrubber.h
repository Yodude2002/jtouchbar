/*
 * JTouchBar
 *
 * Copyright (c) 2018 - 2019 thizzer.com
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 *
 * @author  	M. ten Veldhuis
 */

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import "JavaTouchBarView.h"


@interface JavaTouchBarScrubber : JavaTouchBarView <NSScrubberDelegate, NSScrubberDataSource>
@end