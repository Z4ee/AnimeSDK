#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/WindingOrder.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class ActionResult; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_BREAKFACEINTOTRIS_OFFSET UNITYSDK_OFFSET(0xC0E4110)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMNORMALS_OFFSET UNITYSDK_OFFSET(0xC0E5390)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMOPPOSITENORMAL_OFFSET UNITYSDK_OFFSET(0xC0B7660)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_FLIPEDGE_OFFSET UNITYSDK_OFFSET(0xC0E5000)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETCOMMONEDGEINWINDINGORDER_OFFSET UNITYSDK_OFFSET(0xC0E5C80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0xC0E5B40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_1_OFFSET UNITYSDK_OFFSET(0xC0E4E30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_2_OFFSET UNITYSDK_OFFSET(0xC0E4970)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_OFFSET UNITYSDK_OFFSET(0xC0E4830)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_MATCHNORMAL_OFFSET UNITYSDK_OFFSET(0xC0E5DB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_TOTRIANGLES_OFFSET UNITYSDK_OFFSET(0xC0E39A0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int SurfaceTopology_TypeDefinitionIndex = 41711;

	class SurfaceTopology : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* ToTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_TOTRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* BreakFaceIntoTris(::UnityEngine::ProBuilder::Face* a1, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_BREAKFACEINTOTRIS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::UnityEngine::ProBuilder::WindingOrder(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::ProBuilder::WindingOrder(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* a1)
		{
			return ((::UnityEngine::ProBuilder::WindingOrder(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_2_OFFSET))(a1);
		}

		static ::System::Boolean FlipEdge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_FLIPEDGE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::ActionResult* ConformNormals(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMNORMALS_OFFSET))(a1, a2);
		}

		static ::System::Void GetWindingFlags(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Boolean a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGFLAGS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::ActionResult* ConformOppositeNormal(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMOPPOSITENORMAL_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::Edge GetCommonEdgeInWindingOrder(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETCOMMONEDGEINWINDINGORDER_OFFSET))(a1);
		}

		static ::System::Void MatchNormal(::UnityEngine::ProBuilder::Face* a1, ::UnityEngine::ProBuilder::Face* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_MATCHNORMAL_OFFSET))(a1, a2, a3);
		}
	};
}
