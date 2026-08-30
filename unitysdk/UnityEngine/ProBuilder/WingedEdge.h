#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_WINGEDEDGE_COUNT_OFFSET UNITYSDK_OFFSET(0x1EBD2180)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBD20A0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBD2060)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETADJACENTEDGEWITHCOMMONINDEX_OFFSET UNITYSDK_OFFSET(0x1EBD2BB0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBD2150)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETSPOKES_OFFSET UNITYSDK_OFFSET(0x1EBD2E90)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_1_OFFSET UNITYSDK_OFFSET(0x1EBC1FC0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_OFFSET UNITYSDK_OFFSET(0x1EB9B390)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_EDGE_OFFSET UNITYSDK_OFFSET(0x1EBD1FB0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_FACE_OFFSET UNITYSDK_OFFSET(0x1EBD1FD0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1EBD1FF0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x1EBD2030)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1EBD2010)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_MAKEQUAD_OFFSET UNITYSDK_OFFSET(0x1EBD2430)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_EDGE_OFFSET UNITYSDK_OFFSET(0x1EBD1FC0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_FACE_OFFSET UNITYSDK_OFFSET(0x1EBD1FE0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1EBD2000)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x1EBD2040)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_PREVIOUS_OFFSET UNITYSDK_OFFSET(0x1EBD2020)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTCOMMONINDEXESBYADJACENCY_OFFSET UNITYSDK_OFFSET(0x1EBD34B0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_1_OFFSET UNITYSDK_OFFSET(0x1EBD2CD0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_OFFSET UNITYSDK_OFFSET(0x1EBD2C00)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBD21B0)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBD3830)
#define UNITYENGINE_PROBUILDER_WINGEDEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD2050)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int WingedEdge_TypeDefinitionIndex = 43262;

	class WingedEdge : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>** StaticGet_k_OppositeEdgeDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>**)Il2CppClass::FromTypeDefinitionIndex(WingedEdge_TypeDefinitionIndex)->GetStaticField(0x60D70);
		}
		::UnityEngine::ProBuilder::WingedEdge* _next_k__BackingField; // 0x10
		::UnityEngine::ProBuilder::WingedEdge* _opposite_k__BackingField; // 0x18
		::UnityEngine::ProBuilder::Face* _face_k__BackingField; // 0x20
		::UnityEngine::ProBuilder::WingedEdge* _previous_k__BackingField; // 0x28
		::UnityEngine::ProBuilder::EdgeLookup _edge_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE__CCTOR_OFFSET))();
		}

		::UnityEngine::ProBuilder::EdgeLookup get_edge()
		{
			return ((::UnityEngine::ProBuilder::EdgeLookup(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_EDGE_OFFSET))(this);
		}

		::System::Void set_edge(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_EDGE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* get_face()
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_FACE_OFFSET))(this);
		}

		::System::Void set_face(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_FACE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_next()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_next(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_NEXT_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_previous()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_PREVIOUS_OFFSET))(this);
		}

		::System::Void set_previous(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_PREVIOUS_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::WingedEdge* get_opposite()
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GET_OPPOSITE_OFFSET))(this);
		}

		::System::Void set_opposite(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SET_OPPOSITE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_COUNT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_TOSTRING_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* MakeQuad(::UnityEngine::ProBuilder::WingedEdge* a1, ::UnityEngine::ProBuilder::WingedEdge* a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_MAKEQUAD_OFFSET))(a1, a2);
		}

		::UnityEngine::ProBuilder::WingedEdge* GetAdjacentEdgeWithCommonIndex(::System::Int32 a1)
		{
			return ((::UnityEngine::ProBuilder::WingedEdge*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETADJACENTEDGEWITHCOMMONINDEX_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* SortEdgesByAdjacency(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_OFFSET))(a1);
		}

		static ::System::Void SortEdgesByAdjacency_1(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTEDGESBYADJACENCY_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>* GetSpokes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETSPOKES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* SortCommonIndexesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_SORTCOMMONINDEXESBYADJACENCY_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* GetWingedEdges_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_WINGEDEDGE_GETWINGEDEDGES_1_OFFSET))(a1, a2, a3);
		}
	};
}
