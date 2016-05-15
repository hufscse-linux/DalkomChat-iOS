// Generated by Apple Swift version 2.2 (swiftlang-703.0.18.8 clang-703.0.31)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if defined(__has_feature) && __has_feature(modules)
@import QuartzCore;
@import CoreFoundation;
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface CABasicAnimation (SWIFT_EXTENSION(ChattoAdditions))
+ (CABasicAnimation * _Nonnull)bma_fadeInAnimationWithDuration:(CFTimeInterval)duration;
@end

@class NSCoder;

SWIFT_CLASS("_TtC15ChattoAdditions15ReusableXibView")
@interface ReusableXibView : UIView
- (id _Nullable)awakeAfterUsingCoder:(NSCoder * _Nonnull)aDecoder;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC15ChattoAdditions12ChatInputBar")
@interface ChatInputBar : ReusableXibView
+ (ChatInputBar * _Nonnull)loadNib;
- (void)awakeFromNib;
- (void)updateConstraints;
@property (nonatomic) BOOL showsTextView;
@property (nonatomic) BOOL showsSendButton;
- (void)layoutSubviews;
- (void)becomeFirstResponderWithInputView:(UIView * _Nullable)inputView;
@property (nonatomic, copy) NSString * _Nonnull inputText;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ChatInputBar (SWIFT_EXTENSION(ChattoAdditions))
@end


@interface ChatInputBar (SWIFT_EXTENSION(ChattoAdditions))
@end

@class UITextView;

@interface ChatInputBar (SWIFT_EXTENSION(ChattoAdditions)) <UITextViewDelegate, UIScrollViewDelegate>
- (void)textViewDidEndEditing:(UITextView * _Nonnull)textView;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (void)textViewDidChange:(UITextView * _Nonnull)textView;
@end


@interface ChatInputBar (SWIFT_EXTENSION(ChattoAdditions))
@property (nonatomic) CGFloat tabBarInterItemSpacing;
@property (nonatomic) UIEdgeInsets tabBarContentInsets;
@end


SWIFT_CLASS("_TtC15ChattoAdditions21ChatInputBarPresenter")
@interface ChatInputBarPresenter : NSObject
@end


@interface ChatInputBarPresenter (SWIFT_EXTENSION(ChattoAdditions))
- (void)inputBarDidEndEditing:(ChatInputBar * _Nonnull)inputBar;
- (void)inputBarDidBeginEditing:(ChatInputBar * _Nonnull)inputBar;
@end

@class UIColor;
@class UIFont;

SWIFT_CLASS("_TtC15ChattoAdditions18ExpandableTextView")
@interface ExpandableTextView : UITextView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) CGSize contentSize;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
@property (nonatomic, copy) NSString * _Null_unspecified text;
@property (nonatomic) UIEdgeInsets textContainerInset;
@property (nonatomic) NSTextAlignment textAlignment;
- (void)setTextPlaceholder:(NSString * _Nonnull)textPlaceholder;
- (void)setTextPlaceholderColor:(UIColor * _Nonnull)color;
- (void)setTextPlaceholderFont:(UIFont * _Nonnull)font;
@end


SWIFT_CLASS("_TtC15ChattoAdditions15PhotoBubbleView")
@interface PhotoBubbleView : UIView
@property (nonatomic) CFTimeInterval animationDuration;
@property (nonatomic) CGFloat preferredMaxLayoutWidth;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL isUpdating;
- (void)performBatchUpdates:(void (^ _Nonnull)(void))updateClosure animated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (CGSize)sizeThatFits:(CGSize)size;
- (void)layoutSubviews;
@property (nonatomic, readonly) BOOL canCalculateSizeInBackground;
@end

@class UIImage;
@class UIViewController;

SWIFT_CLASS("_TtC15ChattoAdditions19PhotosChatInputItem")
@interface PhotosChatInputItem : NSObject
@property (nonatomic, copy) void (^ _Nullable photoInputHandler)(UIImage * _Nonnull);
@property (nonatomic, weak) UIViewController * _Nullable presentingController;
- (nonnull instancetype)initWithPresentingController:(UIViewController * _Nullable)presentingController OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic) BOOL selected;
@end


@interface PhotosChatInputItem (SWIFT_EXTENSION(ChattoAdditions))
@end


@interface PhotosChatInputItem (SWIFT_EXTENSION(ChattoAdditions))
@property (nonatomic, readonly) BOOL showsSendButton;
@property (nonatomic, readonly, strong) UIView * _Nullable inputView;
@property (nonatomic, readonly, strong) UIView * _Nonnull tabView;
- (void)handleInput:(id _Nonnull)input;
@end


@class NSCache;

SWIFT_CLASS("_TtC15ChattoAdditions14TextBubbleView")
@interface TextBubbleView : UIView
@property (nonatomic) CGFloat preferredMaxLayoutWidth;
@property (nonatomic) CFTimeInterval animationDuration;
@property (nonatomic) BOOL selected;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL isUpdating;
- (void)performBatchUpdates:(void (^ _Nonnull)(void))updateClosure animated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (CGSize)sizeThatFits:(CGSize)size;
- (void)layoutSubviews;
@property (nonatomic, strong) NSCache * _Null_unspecified layoutCache;
@property (nonatomic, readonly) BOOL canCalculateSizeInBackground;
@end


SWIFT_CLASS("_TtC15ChattoAdditions17TextChatInputItem")
@interface TextChatInputItem : NSObject
@property (nonatomic, copy) void (^ _Nullable textInputHandler)(NSString * _Nonnull);
@property (nonatomic) BOOL selected;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface TextChatInputItem (SWIFT_EXTENSION(ChattoAdditions))
@property (nonatomic, readonly) BOOL showsSendButton;
@property (nonatomic, readonly, strong) UIView * _Nullable inputView;
@property (nonatomic, readonly, strong) UIView * _Nonnull tabView;
- (void)handleInput:(id _Nonnull)input;
@end


@interface UIColor (SWIFT_EXTENSION(ChattoAdditions))
+ (UIColor * _Nonnull)bma_colorWithRgb:(NSInteger)rgb;
- (UIColor * _Nonnull)bma_blendWithColor:(UIColor * _Nonnull)color;
@end


@interface UIImage (SWIFT_EXTENSION(ChattoAdditions))
- (UIImage * _Nonnull)bma_tintWithColor:(UIColor * _Nonnull)color;
- (UIImage * _Nonnull)bma_blendWithColor:(UIColor * _Nonnull)color;
+ (UIImage * _Nonnull)bma_imageWithColor:(UIColor * _Nonnull)color size:(CGSize)size;
@end


@interface UIView (SWIFT_EXTENSION(ChattoAdditions))
@property (nonatomic) CGRect bma_rect;
@end

#pragma clang diagnostic pop
