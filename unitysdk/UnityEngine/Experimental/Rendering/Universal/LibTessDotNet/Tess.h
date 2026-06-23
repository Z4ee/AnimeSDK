#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/ContourOrientation.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/ContourVertex.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/ElementType.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/Vec3.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/LibTessDotNet/WindingRule.h"

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class CombineCallback; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class Mesh; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Edge; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Face; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class MeshUtils_Vertex; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { class Tess_ActiveRegion; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class Dict_1; }
namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet { template <typename T> class PriorityQueue_1; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_1_OFFSET UNITYSDK_OFFSET(0x1B862E40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET UNITYSDK_OFFSET(0x1B862DE0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET UNITYSDK_OFFSET(0x1B85B6C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET UNITYSDK_OFFSET(0x1B85BC70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET UNITYSDK_OFFSET(0x1B85F290)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET UNITYSDK_OFFSET(0x1B85D560)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET UNITYSDK_OFFSET(0x1B85D1B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET UNITYSDK_OFFSET(0x1B85C020)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET UNITYSDK_OFFSET(0x1B860E60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET UNITYSDK_OFFSET(0x1B85FC50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET UNITYSDK_OFFSET(0x1B85FFF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET UNITYSDK_OFFSET(0x1B85B7C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET UNITYSDK_OFFSET(0x1B85EA00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET UNITYSDK_OFFSET(0x1B85EE00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET UNITYSDK_OFFSET(0x1B85E3F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET UNITYSDK_OFFSET(0x1B85B140)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET UNITYSDK_OFFSET(0x1B861E70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET UNITYSDK_OFFSET(0x1B85F540)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET UNITYSDK_OFFSET(0x1B85FB20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET UNITYSDK_OFFSET(0x1B85AF00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET UNITYSDK_OFFSET(0x1B85B930)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET UNITYSDK_OFFSET(0x1B85B8B0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET UNITYSDK_OFFSET(0x1B85B1F0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET UNITYSDK_OFFSET(0x1B85CD40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET UNITYSDK_OFFSET(0x1B862090)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1B85FF80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x1B85FF70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1B85FF20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B85FF60)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1B85FF50)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET UNITYSDK_OFFSET(0x1B85F430)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET UNITYSDK_OFFSET(0x1B85F930)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET UNITYSDK_OFFSET(0x1B862A00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET UNITYSDK_OFFSET(0x1B862110)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET UNITYSDK_OFFSET(0x1B861050)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET UNITYSDK_OFFSET(0x1B85AE90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET UNITYSDK_OFFSET(0x1B85AE20)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET UNITYSDK_OFFSET(0x1B85F670)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET UNITYSDK_OFFSET(0x1B85FB70)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET UNITYSDK_OFFSET(0x1B861F10)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1B85FF40)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET UNITYSDK_OFFSET(0x1B862CF0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET UNITYSDK_OFFSET(0x1B85CA90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET UNITYSDK_OFFSET(0x1B85EC80)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET UNITYSDK_OFFSET(0x1B861DD0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET UNITYSDK_OFFSET(0x1B861640)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_1_OFFSET UNITYSDK_OFFSET(0x1B863130)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET UNITYSDK_OFFSET(0x1B8630C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET UNITYSDK_OFFSET(0x1B85B280)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET UNITYSDK_OFFSET(0x1B85B560)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1B85CB00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET UNITYSDK_OFFSET(0x1B85C4C0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B85FF90)

namespace UnityEngine::Experimental::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Tess_TypeDefinitionIndex = 27154;

	class Tess : public ::System::Object
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::CombineCallback* _combineCallback; // 0x10
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*>* _pq; // 0x18
		::Il2CppArray<::System::Int32>* _elements; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*>* _dict; // 0x28
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* _event; // 0x30
		::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>* _vertices; // 0x38
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Mesh* _mesh; // 0x40
		::System::Single SUnitX; // 0x48
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule _windingRule; // 0x4C
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 _sUnit; // 0x50
		::System::Single _bminY; // 0x5C
		::System::Boolean UsePooling; // 0x60
		::System::Boolean NoEmptyPolygons; // 0x61
		::System::Int32 _vertexCount; // 0x64
		::System::Single _bmaxY; // 0x68
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 _normal; // 0x6C
		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 _tUnit; // 0x78
		::System::Single _bmaxX; // 0x84
		::System::Single SUnitY; // 0x88
		::System::Single _bminX; // 0x8C
		::System::Int32 _elementCount; // 0x90
		::System::Single SentinelCoord; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* RegionBelow(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET))(this, reg);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* RegionAbove(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET))(this, reg);
		}

		::System::Boolean EdgeLeq(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg1, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET))(this, reg1, reg2);
		}

		::System::Void DeleteRegion(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET))(this, reg);
		}

		::System::Void FixUpperEdge(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* newEdge)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET))(this, reg, newEdge);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* TopLeftRegion(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET))(this, reg);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* TopRightRegion(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET))(this, reg);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* AddRegionBelow(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regAbove, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eNewUp)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET))(this, regAbove, eNewUp);
		}

		::System::Void ComputeWinding(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET))(this, reg);
		}

		::System::Void FinishRegion(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* reg)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET))(this, reg);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* FinishLeftRegions(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regFirst, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regLast)
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET))(this, regFirst, regLast);
		}

		::System::Void AddRightEdges(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eFirst, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eLast, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eTopLeft, ::System::Boolean cleanUp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET))(this, regUp, eFirst, eLast, eTopLeft, cleanUp);
		}

		::System::Void SpliceMergeVertices(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* e1, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* e2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET))(this, e1, e2);
		}

		::System::Void VertexWeights(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* isect, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* org, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* dst, ::System::Single& w0, ::System::Single& w1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET))(this, isect, org, dst, w0, w1);
		}

		::System::Void GetIntersectData(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* isect, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* orgUp, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* dstUp, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* orgLo, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* dstLo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET))(this, isect, orgUp, dstUp, orgLo, dstLo);
		}

		::System::Boolean CheckForRightSplice(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET))(this, regUp);
		}

		::System::Boolean CheckForLeftSplice(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET))(this, regUp);
		}

		::System::Boolean CheckForIntersect(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET))(this, regUp);
		}

		::System::Void WalkDirtyRegions(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET))(this, regUp);
		}

		::System::Void ConnectRightVertex(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* eBottomLeft)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET))(this, regUp, eBottomLeft);
		}

		::System::Void ConnectLeftDegenerate(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion* regUp, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Tess_ActiveRegion*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET))(this, regUp, vEvent);
		}

		::System::Void ConnectLeftVertex(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET))(this, vEvent);
		}

		::System::Void SweepEvent(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex* vEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET))(this, vEvent);
		}

		::System::Void AddSentinel(::System::Single smin, ::System::Single smax, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET))(this, smin, smax, t);
		}

		::System::Void InitEdgeDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET))(this);
		}

		::System::Void DoneEdgeDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET))(this);
		}

		::System::Void RemoveDegenerateEdges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET))(this);
		}

		::System::Void InitPriorityQ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET))(this);
		}

		::System::Void DonePriorityQ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET))(this);
		}

		::System::Void RemoveDegenerateFaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET))(this);
		}

		::System::Void ComputeInterior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET))(this);
		}

		::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 get_Normal()
		{
			return ((::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_Normal(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>* get_Vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Elements()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET))(this);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET))(this);
		}

		::System::Void ComputeNormal(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3& norm)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::Vec3&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET))(this, norm);
		}

		::System::Void CheckOrientation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET))(this);
		}

		::System::Void ProjectPolygon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET))(this);
		}

		::System::Void TessellateMonoRegion(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face* face)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET))(this, face);
		}

		::System::Void TessellateInterior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET))(this);
		}

		::System::Void DiscardExterior()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET))(this);
		}

		::System::Void SetWindingNumber(::System::Int32 value, ::System::Boolean keepOnlyBoundary)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET))(this, value, keepOnlyBoundary);
		}

		::System::Int32 GetNeighbourFace(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge* edge)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET))(this, edge);
		}

		::System::Void OutputPolymesh(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ElementType elementType, ::System::Int32 polySize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ElementType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET))(this, elementType, polySize);
		}

		::System::Void OutputContours()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET))(this);
		}

		::System::Single SignedArea(::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>* vertices)
		{
			return ((::System::Single(*)(::PVOID, ::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET))(this, vertices);
		}

		::System::Void AddContour(::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET))(this, vertices);
		}

		::System::Void AddContour_1(::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>* vertices, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourOrientation forceOrientation)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourVertex>*, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ContourOrientation))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_1_OFFSET))(this, vertices, forceOrientation);
		}

		::System::Void Tessellate(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule windingRule, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ElementType elementType, ::System::Int32 polySize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ElementType, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET))(this, windingRule, elementType, polySize);
		}

		::System::Void Tessellate_1(::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule windingRule, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ElementType elementType, ::System::Int32 polySize, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::CombineCallback* combineCallback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::WindingRule, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::ElementType, ::System::Int32, ::UnityEngine::Experimental::Rendering::Universal::LibTessDotNet::CombineCallback*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_1_OFFSET))(this, windingRule, elementType, polySize, combineCallback);
		}
	};
}
