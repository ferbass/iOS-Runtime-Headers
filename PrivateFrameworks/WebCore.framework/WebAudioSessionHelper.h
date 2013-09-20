/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebAudioSessionHelper : NSObject {
    struct AudioSession { struct OwnPtr<WebCore::AudioSessionPrivate> { struct AudioSessionPrivate {} *x_1_1_1; } x1; struct HashSet<WebCore::AudioSessionListener *, WTF::PtrHash<WebCore::AudioSessionListener *>, WTF::HashTraits<WebCore::AudioSessionListener *> > { struct HashTable<WebCore::AudioSessionListener *, WebCore::AudioSessionListener *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::AudioSessionListener *>, WTF::HashTraits<WebCore::AudioSessionListener *>, WTF::HashTraits<WebCore::AudioSessionListener *> > { struct AudioSessionListener {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; } *_callback;
}

- (void)dealloc;
- (id)initWithCallback:(struct AudioSession { struct OwnPtr<WebCore::AudioSessionPrivate> { struct AudioSessionPrivate {} *x_1_1_1; } x1; struct HashSet<WebCore::AudioSessionListener *, WTF::PtrHash<WebCore::AudioSessionListener *>, WTF::HashTraits<WebCore::AudioSessionListener *> > { struct HashTable<WebCore::AudioSessionListener *, WebCore::AudioSessionListener *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::AudioSessionListener *>, WTF::HashTraits<WebCore::AudioSessionListener *>, WTF::HashTraits<WebCore::AudioSessionListener *> > { struct AudioSessionListener {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; }*)arg1;
- (void)interruption:(id)arg1;

@end