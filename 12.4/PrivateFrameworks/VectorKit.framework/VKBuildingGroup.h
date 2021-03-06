//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKPolygonalItemGroup.h>

__attribute__((visibility("hidden")))
@interface VKBuildingGroup : VKPolygonalItemGroup
{
    struct optional<md::MeshSet<ggl::BuildingFlatStroke::BuildingFlatStrokeMesh, ggl::BuildingFlatStroke::DefaultVbo>> _strokeMeshInfo;
    struct optional<md::MeshSet<ggl::PolygonBase::CompressedMeshMesh, ggl::PolygonBase::CompressedVbo>> _fillMeshInfoForPointyRoofs;
    vector_4080291d _strokeMeshes;
    vector_74364602 _fillMeshesForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingFacade::BuildingMesh>>> _extrusionFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _extrusionFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _extrusionStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _fillCullingGroupsForPointyRoofs;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _pointyRoofFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>, std::__1::allocator<std::__1::vector<FeatureRange, std::__1::allocator<FeatureRange>>>>>> _pointyRoofStrokeCullingGroups;
    vector_b346fa92 _styleQueries;
    vector_b346fa92 _flatRoofStyleQueries;
    vector_b346fa92 _selectedStyleQueries;
    vector_b346fa92 _selectedFlatRoofStyleQueries;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithStyleManager:(const shared_ptr_a3c46825 *)arg1;
- (_Bool)addPointyRoofForBuilding:(CDStruct_4bb03b42 *)arg1 buildingModel:(unsigned char)arg2 scaleThreshold:(float)arg3 styleIndex:(float)arg4;
- (_Bool)canConstructPointyRoofForPolygon:(CDStruct_64195c06 *)arg1 building:(CDStruct_4bb03b42 *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;
- (void)addExtrusionForBuilding:(CDStruct_4bb03b42 *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 triangulator:(id)arg4;
- (void)addBuilding:(CDStruct_4bb03b42 *)arg1 index:(unsigned long long)arg2 ofTotal:(unsigned long long)arg3 accessor:(struct ResourceAccessor *)arg4 triangulator:(id)arg5 prepareExtrusion:(_Bool)arg6 forRoofStyle:(unsigned char)arg7 scaleThreshold:(float)arg8;
- (void)didFinishAddingData;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)prepareForBuilding:(CDStruct_4bb03b42 *)arg1 forRoofStyle:(unsigned char)arg2 scaleThreshold:(float)arg3;
- (const MultiRange_4bdc93a8 *)commitRangesToPointyRoofStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_d674753c)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToPointyRoofFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_d674753c)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToPointyRoofTopRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_d674753c)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToExtrusionStrokeRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_d674753c)arg4;
- (const MultiRange_4bdc93a8 *)commitRangesToExtrusionFillRenderItemBatcher:(struct Batcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3 featureIdPredicate:(function_d674753c)arg4;
- (vector_b346fa92 *)styleQueriesForPointyRoofs:(_Bool)arg1 selected:(_Bool)arg2;
- (unsigned char)maxAttributeSetsPerGroup;
- (const MeshVendor_b901c95c *)pointyRoofStrokeMeshVendor;
- (const MeshVendor_96ac8e76 *)pointyRoofFillMeshVendor;
- (vector_74364602 *)fillMeshesForPointyRoofs;
- (const MeshVendor_b901c95c *)extrusionStrokeMeshVendor;
- (const MeshVendor_04441547 *)extrusionFillMeshVendor;
- (vector_4080291d *)strokeMeshes;
- (id)initWithStyleQuery:(shared_ptr_c5d816ee *)arg1 tileZoom:(float)arg2 fixedAroundCentroid:(const Matrix_8746f91e *)arg3 contentScale:(float)arg4;

@end

