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
@import UIKit;
@import CoreGraphics;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UICollectionViewLayoutAttributes;
@class NSIndexPath;
@class NSCoder;

SWIFT_CLASS("_TtC6Chatto24ChatCollectionViewLayout")
@interface ChatCollectionViewLayout : UICollectionViewLayout
- (void)invalidateLayout;
- (void)prepareLayout;
- (CGSize)collectionViewContentSize;
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect;
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionView;
@class UIView;
@class NSBundle;

SWIFT_CLASS("_TtC6Chatto18ChatViewController")
@interface ChatViewController : UIViewController <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
@property (nonatomic, readonly, strong) UICollectionView * _Null_unspecified collectionView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, readonly, strong) UIView * _Nonnull inputAccessoryView;
@property (nonatomic) BOOL isFirstLayout;
- (void)viewDidLayoutSubviews;
- (UIView * _Nonnull)createChatInputView;
@property (nonatomic, readonly, strong) UICollectionViewLayout * _Nonnull createCollectionViewLayout;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerTransitionCoordinator;

@interface ChatViewController (SWIFT_EXTENSION(Chatto))
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@end

@class UIScrollView;

@interface ChatViewController (SWIFT_EXTENSION(Chatto))
- (BOOL)isScrolledAtBottom;
- (BOOL)isScrolledAtTop;
- (BOOL)isCloseToBottom;
- (BOOL)isCloseToTop;
- (CGRect)visibleRect;
- (void)scrollToBottomWithAnimated:(BOOL)animated;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (void)scrollViewDidScrollToTop:(UIScrollView * _Nonnull)scrollView;
- (void)autoLoadMoreContentIfNeeded;
@end

@class UICollectionViewCell;

@interface ChatViewController (SWIFT_EXTENSION(Chatto))
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didEndDisplayingCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)collectionView:(UICollectionView * _Nonnull)collectionView shouldShowMenuForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)collectionView:(UICollectionView * _Nonnull)collectionView canPerformAction:(SEL _Null_unspecified)action forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath withSender:(id _Nullable)sender;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView performAction:(SEL _Null_unspecified)action forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath withSender:(id _Nullable)sender;
@end


@interface ChatViewController (SWIFT_EXTENSION(Chatto))
- (void)enqueueMessageCountReductionIfNeeded;
@property (nonatomic, readonly) double focusPosition;
@end

#pragma clang diagnostic pop
