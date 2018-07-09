/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBDescriptionCardSection : PBCodable <NSSecureCoding, _SFPBDescriptionCardSection> {
    _SFPBImage * _attributionGlyph;
    NSString * _attributionText;
    _SFPBURL * _attributionURL;
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    bool  _descriptionExpand;
    int  _descriptionSize;
    _SFPBText * _descriptionText;
    int  _descriptionWeight;
    NSString * _expandText;
    struct { 
        unsigned int canBeHidden : 1; 
        unsigned int hasTopPadding : 1; 
        unsigned int hasBottomPadding : 1; 
        unsigned int separatorStyle : 1; 
        unsigned int titleNoWrap : 1; 
        unsigned int titleWeight : 1; 
        unsigned int descriptionSize : 1; 
        unsigned int descriptionWeight : 1; 
        unsigned int descriptionExpand : 1; 
        unsigned int imageAlign : 1; 
        unsigned int textAlign : 1; 
    }  _has;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    _SFPBImage * _image;
    int  _imageAlign;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _subtitle;
    int  _textAlign;
    NSString * _title;
    bool  _titleNoWrap;
    int  _titleWeight;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBImage *attributionGlyph;
@property (nonatomic, copy) NSString *attributionText;
@property (nonatomic, retain) _SFPBURL *attributionURL;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool descriptionExpand;
@property (nonatomic) int descriptionSize;
@property (nonatomic, retain) _SFPBText *descriptionText;
@property (nonatomic) int descriptionWeight;
@property (nonatomic, copy) NSString *expandText;
@property (nonatomic, readonly) bool hasAttributionGlyph;
@property (nonatomic, readonly) bool hasAttributionText;
@property (nonatomic, readonly) bool hasAttributionURL;
@property (nonatomic, readonly) bool hasBackgroundColor;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic, readonly) bool hasCanBeHidden;
@property (nonatomic, readonly) bool hasDescriptionExpand;
@property (nonatomic, readonly) bool hasDescriptionSize;
@property (nonatomic, readonly) bool hasDescriptionText;
@property (nonatomic, readonly) bool hasDescriptionWeight;
@property (nonatomic, readonly) bool hasExpandText;
@property (nonatomic, readonly) bool hasHasBottomPadding;
@property (nonatomic, readonly) bool hasHasTopPadding;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasImageAlign;
@property (nonatomic, readonly) bool hasPunchoutPickerDismissText;
@property (nonatomic, readonly) bool hasPunchoutPickerTitle;
@property (nonatomic, readonly) bool hasSeparatorStyle;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTextAlign;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasTitleNoWrap;
@property (nonatomic, readonly) bool hasTitleWeight;
@property (nonatomic) bool hasTopPadding;
@property (nonatomic, readonly) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic) int textAlign;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool titleNoWrap;
@property (nonatomic) int titleWeight;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)attributionGlyph;
- (id)attributionText;
- (id)attributionURL;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (bool)descriptionExpand;
- (int)descriptionSize;
- (id)descriptionText;
- (int)descriptionWeight;
- (id)dictionaryRepresentation;
- (id)expandText;
- (bool)hasAttributionGlyph;
- (bool)hasAttributionText;
- (bool)hasAttributionURL;
- (bool)hasBackgroundColor;
- (bool)hasBottomPadding;
- (bool)hasCanBeHidden;
- (bool)hasDescriptionExpand;
- (bool)hasDescriptionSize;
- (bool)hasDescriptionText;
- (bool)hasDescriptionWeight;
- (bool)hasExpandText;
- (bool)hasHasBottomPadding;
- (bool)hasHasTopPadding;
- (bool)hasImage;
- (bool)hasImageAlign;
- (bool)hasPunchoutPickerDismissText;
- (bool)hasPunchoutPickerTitle;
- (bool)hasSeparatorStyle;
- (bool)hasSubtitle;
- (bool)hasTextAlign;
- (bool)hasTitle;
- (bool)hasTitleNoWrap;
- (bool)hasTitleWeight;
- (bool)hasTopPadding;
- (bool)hasType;
- (unsigned long long)hash;
- (id)image;
- (int)imageAlign;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setAttributionGlyph:(id)arg1;
- (void)setAttributionText:(id)arg1;
- (void)setAttributionURL:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setDescriptionExpand:(bool)arg1;
- (void)setDescriptionSize:(int)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setDescriptionWeight:(int)arg1;
- (void)setExpandText:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextAlign:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleNoWrap:(bool)arg1;
- (void)setTitleWeight:(int)arg1;
- (void)setType:(id)arg1;
- (id)subtitle;
- (int)textAlign;
- (id)title;
- (bool)titleNoWrap;
- (int)titleWeight;
- (id)type;
- (void)writeTo:(id)arg1;

@end