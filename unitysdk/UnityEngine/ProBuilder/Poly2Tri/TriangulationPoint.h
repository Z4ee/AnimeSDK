#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepConstraint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_ADDEDGE_OFFSET UNITYSDK_OFFSET(0x1D235AC0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x1D238D10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_GET_HASEDGES_OFFSET UNITYSDK_OFFSET(0x1D22F0C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_SET_EDGES_OFFSET UNITYSDK_OFFSET(0x1D238D20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D236D10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D236620)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationPoint_TypeDefinitionIndex = 36599;

	class TriangulationPoint : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* _Edges_k__BackingField; // 0x10
		::System::Int32 Index; // 0x18
		::System::Double Y; // 0x20
		::System::Double X; // 0x28

		::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* get_Edges()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_GET_EDGES_OFFSET))(this);
		}

		::System::Void set_Edges(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_SET_EDGES_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_TOSTRING_OFFSET))(this);
		}

		::System::Void AddEdge(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_ADDEDGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEdges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONPOINT_GET_HASEDGES_OFFSET))(this);
		}
	};
}
