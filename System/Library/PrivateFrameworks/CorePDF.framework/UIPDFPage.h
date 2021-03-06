/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:58 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFSelection, UIPDFDocument, UIImage, NSMutableArray;

@interface UIPDFPage : NSObject {

	CGPDFPageRef _cgPage;
	unsigned long long _pageNumber;
	NSString* _stringInReadingOrder;
	UIPDFSelection* _selection;
	int _lock;
	UIPDFDocument* _document;
	unsigned long long _pageIndex;
	UIImage* _pageImage;
	NSMutableArray* _annotations;

}

@property (readonly) CGPDFPageRef CGPage;                        //@synthesize cgPage=_cgPage - In the implementation block
@property (readonly) unsigned long long pageNumber;              //@synthesize pageNumber=_pageNumber - In the implementation block
@property (readonly) unsigned long long pageIndex;               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) CGRect cropBox; 
@property (readonly) UIPDFDocument * document;                   //@synthesize document=_document - In the implementation block
@property (retain) UIImage * pageImage;                          //@synthesize pageImage=_pageImage - In the implementation block
@property (retain) UIPDFSelection * selection;                   //@synthesize selection=_selection - In the implementation block
-(void)setDocument:(UIPDFDocument *)arg1 ;
-(id)initWithCGPDFPage:(CGPDFPageRef)arg1 ;
-(CGPDFPageRef)CGPage;
-(id)annotations;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)string;
-(UIPDFSelection *)selection;
-(void)setSelection:(UIPDFSelection *)arg1 ;
-(unsigned long long)rotation;
-(UIPDFDocument *)document;
-(unsigned long long)pageIndex;
-(unsigned long long)pageNumber;
-(id)findString:(id)arg1 fromSelection:(id)arg2 options:(unsigned long long)arg3 ;
-(CGRect)cropBoxAccountForRotation;
-(void)setPageImage:(UIImage *)arg1 ;
-(UIImage *)pageImage;
-(unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1 ;
-(void)clearAnnotations;
-(id)annotationIn:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(id)initWithDocument:(id)arg1 pageNumber:(unsigned long long)arg2 ;
-(void)drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(id)getImageIfAvailable;
-(void)deliverImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 receiver:(id)arg3 selector:(SEL)arg4 info:(id)arg5 ;
-(CGRect)cropBox;
-(CGRect)mediaBox;
-(CGRect)mediaBoxAccountForRotation;
-(id)copyPage;
-(void)removeAllAnnotations;
-(void)refresh;
@end

