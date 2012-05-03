//
//  PDFUtilities.h
//  PDFReader
//
//  Created by Jonathan Wight on 5/3/12.
//  Copyright (c) 2012 toxicsoftware.com. All rights reserved.
//

#import <Foundation/Foundation.h>

extern id ConvertPDFObject(CGPDFObjectRef inObject);
extern void CGPDFDictionaryApplyBlock(CGPDFDictionaryRef inDictionary, void (^inBlock)(const char *key, CGPDFObjectRef value));
