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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_BREAKFACEINTOTRIS_OFFSET UNITYSDK_OFFSET(0x1A2955B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMNORMALS_OFFSET UNITYSDK_OFFSET(0x1A296540)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMOPPOSITENORMAL_OFFSET UNITYSDK_OFFSET(0x1A269B00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_FLIPEDGE_OFFSET UNITYSDK_OFFSET(0x1A296040)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETCOMMONEDGEINWINDINGORDER_OFFSET UNITYSDK_OFFSET(0x1A296EF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGFLAGS_OFFSET UNITYSDK_OFFSET(0x1A296DA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_1_OFFSET UNITYSDK_OFFSET(0x1A295E90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_2_OFFSET UNITYSDK_OFFSET(0x1A295B60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_OFFSET UNITYSDK_OFFSET(0x1A295A20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_MATCHNORMAL_OFFSET UNITYSDK_OFFSET(0x1A297050)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_TOTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1A295000)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int SurfaceTopology_TypeDefinitionIndex = 40069;

	class SurfaceTopology : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* ToTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_TOTRIANGLES_OFFSET))(mesh, faces);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* BreakFaceIntoTris(::UnityEngine::ProBuilder::Face* face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*(*)(::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_BREAKFACEINTOTRIS_OFFSET))(face, vertices, lookup);
		}

		static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::UnityEngine::ProBuilder::WindingOrder(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_OFFSET))(mesh, face);
		}

		static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::ProBuilder::WindingOrder(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_1_OFFSET))(vertices, indexes);
		}

		static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder_2(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* points)
		{
			return ((::UnityEngine::ProBuilder::WindingOrder(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGORDER_2_OFFSET))(points);
		}

		static ::System::Boolean FlipEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_FLIPEDGE_OFFSET))(mesh, face);
		}

		static ::UnityEngine::ProBuilder::ActionResult* ConformNormals(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMNORMALS_OFFSET))(mesh, faces);
		}

		static ::System::Void GetWindingFlags(::UnityEngine::ProBuilder::WingedEdge* edge, ::System::Boolean flag, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Boolean>* flags)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETWINDINGFLAGS_OFFSET))(edge, flag, flags);
		}

		static ::UnityEngine::ProBuilder::ActionResult* ConformOppositeNormal(::UnityEngine::ProBuilder::WingedEdge* source)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_CONFORMOPPOSITENORMAL_OFFSET))(source);
		}

		static ::UnityEngine::ProBuilder::Edge GetCommonEdgeInWindingOrder(::UnityEngine::ProBuilder::WingedEdge* wing)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_GETCOMMONEDGEINWINDINGORDER_OFFSET))(wing);
		}

		static ::System::Void MatchNormal(::UnityEngine::ProBuilder::Face* source, ::UnityEngine::ProBuilder::Face* target, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_SURFACETOPOLOGY_MATCHNORMAL_OFFSET))(source, target, lookup);
		}
	};
}
