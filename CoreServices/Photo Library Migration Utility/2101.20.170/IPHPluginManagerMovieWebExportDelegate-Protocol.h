//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol IPHPluginManagerProtocol;

@protocol IPHPluginManagerMovieWebExportDelegate
- (void)pluginManager:(id <IPHPluginManagerProtocol>)arg1 didFailExportingMovieRef:(struct NSObject *)arg2;
- (void)pluginManager:(id <IPHPluginManagerProtocol>)arg1 didFinishExportingMovieRef:(struct NSObject *)arg2 exportedRef:(struct NSObject *)arg3;
- (BOOL)pluginManager:(id <IPHPluginManagerProtocol>)arg1 shouldContinueExportingMovieRef:(struct NSObject *)arg2 withProgress:(double)arg3;
@end
