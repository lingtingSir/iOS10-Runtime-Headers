/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOVectorTile;

@interface VKLabelTile : VKTile  {
    int _tileType;
    struct shared_ptr<vk::LabelManager> { 
        struct LabelManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _labelManager;
    GEOVectorTile *_modelTile;
    struct set<std::__1::shared_ptr<vk::RoadLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::RoadLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::RoadLabelFeature> > > { 
        struct __tree<std::__1::shared_ptr<vk::RoadLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::RoadLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::RoadLabelFeature> > > { 
            struct __tree_node<std::__1::shared_ptr<vk::RoadLabelFeature>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, vk_allocator<std::__1::__tree_node<std::__1::shared_ptr<vk::RoadLabelFeature>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<std::__1::shared_ptr<vk::RoadLabelFeature> > > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _roadFeatures;
    struct set<std::__1::shared_ptr<vk::PointLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::PointLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::PointLabelFeature> > > { 
        struct __tree<std::__1::shared_ptr<vk::PointLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::PointLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::PointLabelFeature> > > { 
            struct __tree_node<std::__1::shared_ptr<vk::PointLabelFeature>, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, vk_allocator<std::__1::__tree_node<std::__1::shared_ptr<vk::PointLabelFeature>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<std::__1::shared_ptr<vk::PointLabelFeature> > > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } _pointFeatures;
}


- (const struct set<std::__1::shared_ptr<vk::PointLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::PointLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::PointLabelFeature> > > { struct __tree<std::__1::shared_ptr<vk::PointLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::PointLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::PointLabelFeature> > > { struct __tree_node<std::__1::shared_ptr<vk::PointLabelFeature>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, vk_allocator<std::__1::__tree_node<std::__1::shared_ptr<vk::PointLabelFeature>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<std::__1::shared_ptr<vk::PointLabelFeature> > > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)pointFeatures;
- (const struct set<std::__1::shared_ptr<vk::RoadLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::RoadLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::RoadLabelFeature> > > { struct __tree<std::__1::shared_ptr<vk::RoadLabelFeature>, std::__1::less<std::__1::shared_ptr<vk::RoadLabelFeature> >, vk_allocator<std::__1::shared_ptr<vk::RoadLabelFeature> > > { struct __tree_node<std::__1::shared_ptr<vk::RoadLabelFeature>, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, vk_allocator<std::__1::__tree_node<std::__1::shared_ptr<vk::RoadLabelFeature>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<std::__1::shared_ptr<vk::RoadLabelFeature> > > { unsigned long x_3_2_1; } x_1_1_3; } x1; }*)roadFeatures;
- (int)tileType;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 modelTile:(id)arg2 tileType:(int)arg3 labelManager:(const struct shared_ptr<vk::LabelManager> { struct LabelManager {} *x1; struct __shared_weak_count {} *x2; }*)arg4;
- (id)modelTile;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;

@end