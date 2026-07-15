#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_EDGERINGNEXT_OFFSET UNITYSDK_OFFSET(0xC0CAA10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_1_OFFSET UNITYSDK_OFFSET(0xC0CECD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_OFFSET UNITYSDK_OFFSET(0xC0CE960)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDNEXTEDGEINHOLE_OFFSET UNITYSDK_OFFSET(0xC0CF690)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOODSELECTION_OFFSET UNITYSDK_OFFSET(0xC0CDD30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_1_OFFSET UNITYSDK_OFFSET(0xC0CD930)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_OFFSET UNITYSDK_OFFSET(0xC0CD8A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETCONNECTEDEDGES_OFFSET UNITYSDK_OFFSET(0xC0C7DB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNALITERATIVE_OFFSET UNITYSDK_OFFSET(0xC0CC960)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0xC0CC270)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPITERATIVE_OFFSET UNITYSDK_OFFSET(0xC0CC4B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOP_OFFSET UNITYSDK_OFFSET(0xC0CBC70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERINGITERATIVE_OFFSET UNITYSDK_OFFSET(0xC0CB3B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERING_OFFSET UNITYSDK_OFFSET(0xC0CAA90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_1_OFFSET UNITYSDK_OFFSET(0xC0CE430)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_OFFSET UNITYSDK_OFFSET(0xC0CE200)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACERINGANDLOOP_OFFSET UNITYSDK_OFFSET(0xC0CE700)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_1_OFFSET UNITYSDK_OFFSET(0xC0A90B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_2_OFFSET UNITYSDK_OFFSET(0xC0C7580)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_OFFSET UNITYSDK_OFFSET(0xC0C7180)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_1_OFFSET UNITYSDK_OFFSET(0xC0C9100)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_OFFSET UNITYSDK_OFFSET(0xC0C8850)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERFACES_OFFSET UNITYSDK_OFFSET(0xC0C9820)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERVERTICES_OFFSET UNITYSDK_OFFSET(0xC0CA3C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETSPOKES_OFFSET UNITYSDK_OFFSET(0xC0CCD30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GROWSELECTION_OFFSET UNITYSDK_OFFSET(0xC0CD210)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_NEXTSPOKE_OFFSET UNITYSDK_OFFSET(0xC0CD190)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0CF760)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection_TypeDefinitionIndex = 41690;

	class ElementSelection : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_Vector3_Zero()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ElementSelection_TypeDefinitionIndex)->GetStaticField(0xE600);
		}
		// static const ::System::Int32 k_MaxHoleIterations = 0x800; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION__CCTOR_OFFSET))();
		}

		static ::System::Void GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>* GetNeighborFaces_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_1_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* GetNeighborFaces_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_2_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* GetConnectedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETCONNECTEDEDGES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* GetPerimeterEdges_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_1_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* GetPerimeterFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERFACES_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Int32>* GetPerimeterVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a3)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::WingedEdge* EdgeRingNext(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_EDGERINGNEXT_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetEdgeRing(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERING_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetEdgeRingIterative(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERINGITERATIVE_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetEdgeLoop(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetEdgeLoopIterative(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPITERATIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean GetEdgeLoopInternal(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GetEdgeLoopInternalIterative(::UnityEngine::ProBuilder::WingedEdge* a1, ::UnityEngine::ProBuilder::Edge a2, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNALITERATIVE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::WingedEdge* NextSpoke(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_NEXTSPOKE_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetSpokes(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETSPOKES_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GrowSelection(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GROWSELECTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Flood(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_OFFSET))(a1, a2);
		}

		static ::System::Void Flood_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::WingedEdge* a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a5)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* FloodSelection(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOODSELECTION_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceLoop(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceRingAndLoop(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACERINGANDLOOP_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceLoop_1(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a1, ::UnityEngine::ProBuilder::Face* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::UnityEngine::ProBuilder::Face*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>* FindHoles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>* FindHoles_1(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::WingedEdge* FindNextEdgeInHole(::UnityEngine::ProBuilder::WingedEdge* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDNEXTEDGEINHOLE_OFFSET))(a1, a2);
		}
	};
}
