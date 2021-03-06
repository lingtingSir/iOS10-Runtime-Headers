/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
    NSMutableDictionary * _currentImageData;
    ABPersonTableViewDataSource * _dataSource;
    bool  _didChangePreferredPersonForImage;
    bool  _hasImageChanges;
    ABUIPerson * _personForImageData;
}

@property (nonatomic) ABPersonTableViewDataSource *dataSource;

- (id)currentImageData;
- (id)dataSource;
- (void)dealloc;
- (bool)didChangePreferredPersonForImage;
- (bool)hasImageChanges;
- (bool)hasImageDataForPerson:(id)arg1;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forPerson:(id)arg3;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forPerson:(id)arg3 isRemoved:(bool*)arg4;
- (void)imageWillSave;
- (void)markImagesWith:(id)arg1 forPerson:(id)arg2;
- (id)people;
- (id)personForImageData;
- (id)personForImageDataExcludingPeople:(id)arg1;
- (void)refreshImageData;
- (void)reloadImageData;
- (void)removeImageDataForPerson:(id)arg1;
- (void)resetImageData;
- (void)setCurrentImageData:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 forPerson:(id)arg4;
- (void)setPersonForImageData:(id)arg1;
- (void)updateRecordImages;
- (id)writablePeople;

@end
