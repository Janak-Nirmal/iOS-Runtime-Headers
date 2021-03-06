/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject;

@interface TSKViewState : TSPObject {
    TSPObject *_viewStateRoot;
}

@property(retain) TSPObject * viewStateRoot;

+ (id)viewStateWithRoot:(id)arg1 context:(id)arg2;

- (BOOL)allowsDuplicatesOutsideOfDocumentPackage;
- (void)dealloc;
- (BOOL)dirtiesDocumentPackage;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithViewStateRoot:(id)arg1 context:(id)arg2;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setViewStateRoot:(id)arg1;
- (id)viewStateRoot;

@end
