//
//  Document.h
//  XLIFF Editor
//
//  Created by Nicolas Dowell on 2015-10-28.
//  Copyright © 2015 Nick Dowell. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "TranslationUnit.h"


@interface Document : NSDocument

@property (nonatomic, strong) NSArray<TranslationUnit *> *translationUnits;

@end

