/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORelatedSearchSuggestion : NSObject {
    GEOPDRelatedSearchSuggestion * _relatedSearchSuggestion;
}

@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, retain) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic, readonly) NSString *searchBarDisplayToken;

- (id)_suggestionEntryMetadata;
- (void)dealloc;
- (id)displayString;
- (id)initWithPDRelatedSearchSuggestion:(id)arg1;
- (id)relatedSearchSuggestion;
- (id)searchBarDisplayToken;
- (void)setRelatedSearchSuggestion:(id)arg1;

@end