/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

@interface UIAccessibilityLoader : NSObject

+ (void)__loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(bool)arg3;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityLoadExtendedBundles;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (long long)_accessibilityLoadingPriorityForBundle:(id)arg1;
+ (void)_accessibilityReenabled;
+ (bool)_accessibilityServerStarted;
+ (bool)_accessibilityShouldSortBundlesBeforeLoading;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_accessibilityStopServer;
+ (bool)_accessibilityUIKitBundleLoaded;
+ (id)_axBundleForBundle:(id)arg1;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 forceLoad:(bool)arg3 loadSubbundles:(bool)arg4 loadAllAccessibilityInfo:(bool)arg5;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)initialize;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 force:(bool)arg3 loadAllAccessibilityInfo:(bool)arg4;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(id /* block */)arg2 loadSubbundles:(bool)arg3;

@end
