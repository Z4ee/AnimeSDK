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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_EDGERINGNEXT_OFFSET UNITYSDK_OFFSET(0x188411E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_1_OFFSET UNITYSDK_OFFSET(0x18844E80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_OFFSET UNITYSDK_OFFSET(0x18844BB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDNEXTEDGEINHOLE_OFFSET UNITYSDK_OFFSET(0x188456A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOODSELECTION_OFFSET UNITYSDK_OFFSET(0x18844010)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_1_OFFSET UNITYSDK_OFFSET(0x18843C10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_OFFSET UNITYSDK_OFFSET(0x18843B80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETCONNECTEDEDGES_OFFSET UNITYSDK_OFFSET(0x1883E780)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNALITERATIVE_OFFSET UNITYSDK_OFFSET(0x18842E00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNAL_OFFSET UNITYSDK_OFFSET(0x18842840)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPITERATIVE_OFFSET UNITYSDK_OFFSET(0x18842A20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOP_OFFSET UNITYSDK_OFFSET(0x18842350)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERINGITERATIVE_OFFSET UNITYSDK_OFFSET(0x18841B10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERING_OFFSET UNITYSDK_OFFSET(0x18841260)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_1_OFFSET UNITYSDK_OFFSET(0x18844680)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_OFFSET UNITYSDK_OFFSET(0x18844440)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACERINGANDLOOP_OFFSET UNITYSDK_OFFSET(0x18844940)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_1_OFFSET UNITYSDK_OFFSET(0x188228E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_2_OFFSET UNITYSDK_OFFSET(0x1883DDF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_OFFSET UNITYSDK_OFFSET(0x1883D9C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_1_OFFSET UNITYSDK_OFFSET(0x1883F820)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_OFFSET UNITYSDK_OFFSET(0x1883F0F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERFACES_OFFSET UNITYSDK_OFFSET(0x1883FE80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERVERTICES_OFFSET UNITYSDK_OFFSET(0x18840B90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETSPOKES_OFFSET UNITYSDK_OFFSET(0x18843140)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GROWSELECTION_OFFSET UNITYSDK_OFFSET(0x18843540)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_NEXTSPOKE_OFFSET UNITYSDK_OFFSET(0x188434C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x18845770)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection_TypeDefinitionIndex = 34229;

	class ElementSelection : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_Vector3_Zero()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ElementSelection_TypeDefinitionIndex)->GetStaticField(0xD5B0);
		}
		// static const ::System::Int32 k_MaxHoleIterations = 0x800; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION__CCTOR_OFFSET))();
		}

		static ::System::Void GetNeighborFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* neighborFaces)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_OFFSET))(mesh, edge, neighborFaces);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>* GetNeighborFaces_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge>>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_1_OFFSET))(mesh, edge);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* GetNeighborFaces_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETNEIGHBORFACES_2_OFFSET))(mesh, indexes);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* GetConnectedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETCONNECTEDEDGES_OFFSET))(mesh, indexes);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetPerimeterEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_OFFSET))(mesh, faces);
		}

		static ::Il2CppArray<::System::Int32>* GetPerimeterEdges_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETEREDGES_1_OFFSET))(mesh, edges);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* GetPerimeterFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERFACES_OFFSET))(mesh, faces);
		}

		static ::Il2CppArray<::System::Int32>* GetPerimeterVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* universal_edges_all)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETPERIMETERVERTICES_OFFSET))(mesh, indexes, universal_edges_all);
		}

		static ::UnityEngine::ProBuilder::WingedEdge* EdgeRingNext(::UnityEngine::ProBuilder::WingedEdge* edge)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_EDGERINGNEXT_OFFSET))(edge);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetEdgeRing(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERING_OFFSET))(pb, edges);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* GetEdgeRingIterative(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGERINGITERATIVE_OFFSET))(pb, edges);
		}

		static ::System::Boolean GetEdgeLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& loop)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOP_OFFSET))(mesh, edges, loop);
		}

		static ::System::Boolean GetEdgeLoopIterative(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& loop)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPITERATIVE_OFFSET))(mesh, edges, loop);
		}

		static ::System::Boolean GetEdgeLoopInternal(::UnityEngine::ProBuilder::WingedEdge* start, ::System::Int32 startIndex, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNAL_OFFSET))(start, startIndex, used);
		}

		static ::System::Void GetEdgeLoopInternalIterative(::UnityEngine::ProBuilder::WingedEdge* start, ::UnityEngine::ProBuilder::Edge edge, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>* used)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::EdgeLookup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETEDGELOOPINTERNALITERATIVE_OFFSET))(start, edge, used);
		}

		static ::UnityEngine::ProBuilder::WingedEdge* NextSpoke(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Int32 pivot, ::System::Boolean opp)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_NEXTSPOKE_OFFSET))(wing, pivot, opp);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetSpokes(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Int32 sharedIndex, ::System::Boolean allowHoles)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETSPOKES_OFFSET))(wing, sharedIndex, allowHoles);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GrowSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Single maxAngleDiff)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GROWSELECTION_OFFSET))(mesh, faces, maxAngleDiff);
		}

		static ::System::Void Flood(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_OFFSET))(wing, selection);
		}

		static ::System::Void Flood_1(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::ProBuilder::WingedEdge* wing, ::UnityEngine::Vector3 wingNrm, ::System::Single maxAngle, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* selection)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOOD_1_OFFSET))(pb, wing, wingNrm, maxAngle, selection);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* FloodSelection(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Single maxAngleDiff)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FLOODSELECTION_OFFSET))(mesh, faces, maxAngleDiff);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces, ::System::Boolean ring)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_OFFSET))(mesh, faces, ring);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceRingAndLoop(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACERINGANDLOOP_OFFSET))(mesh, faces);
		}

		static ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* GetFaceLoop_1(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::UnityEngine::ProBuilder::Face* face, ::System::Boolean ring)
		{
			return ((::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::UnityEngine::ProBuilder::Face*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_GETFACELOOP_1_OFFSET))(wings, face, ring);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>* FindHoles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_OFFSET))(mesh, indexes);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>* FindHoles_1(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings, ::System::Collections::Generic::HashSet_1<::System::Int32>* common)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDHOLES_1_OFFSET))(wings, common);
		}

		static ::UnityEngine::ProBuilder::WingedEdge* FindNextEdgeInHole(::UnityEngine::ProBuilder::WingedEdge* wing, ::System::Int32 common)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION_FINDNEXTEDGEINHOLE_OFFSET))(wing, common);
		}
	};
}
