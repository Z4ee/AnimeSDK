#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationContext.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFront; }
namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepBasin; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepEdgeEvent; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepPointComparator; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class Triangulatable; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationConstraint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1A1ED600)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A1F24F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_CREATEADVANCINGFRONT_OFFSET UNITYSDK_OFFSET(0x1A1EAA40)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_FINALIZETRIANGULATION_OFFSET UNITYSDK_OFFSET(0x1A1ECE30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_GET_HEAD_OFFSET UNITYSDK_OFFSET(0x1A1F22E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_GET_ISDEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x1A1EBCA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_GET_TAIL_OFFSET UNITYSDK_OFFSET(0x1A1F2300)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_LOCATENODE_OFFSET UNITYSDK_OFFSET(0x1A1ED350)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_MAPTRIANGLETONODES_OFFSET UNITYSDK_OFFSET(0x1A1EC8E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_MESHCLEANREQ_OFFSET UNITYSDK_OFFSET(0x1A1F2570)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_MESHCLEAN_OFFSET UNITYSDK_OFFSET(0x1A1ED340)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_NEWCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1A1F2C50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_PREPARETRIANGULATION_OFFSET UNITYSDK_OFFSET(0x1A1F27E0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_REMOVEFROMLIST_OFFSET UNITYSDK_OFFSET(0x1A1ECA30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1A1F1600)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_SET_HEAD_OFFSET UNITYSDK_OFFSET(0x1A1F22F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_SET_TAIL_OFFSET UNITYSDK_OFFSET(0x1A1F2310)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F2320)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweepContext_TypeDefinitionIndex = 35505;

	class DTSweepContext : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent* EdgeEvent; // 0x40
		::UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin* Basin; // 0x48
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* Front; // 0x50
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Head_k__BackingField; // 0x58
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Tail_k__BackingField; // 0x60
		::UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator* _comparator; // 0x68
		::System::Single ALPHA; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Head()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_GET_HEAD_OFFSET))(this);
		}

		::System::Void set_Head(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_SET_HEAD_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* get_Tail()
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_GET_TAIL_OFFSET))(this);
		}

		::System::Void set_Tail(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_SET_TAIL_OFFSET))(this, value);
		}

		::System::Boolean get_IsDebugEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_GET_ISDEBUGENABLED_OFFSET))(this);
		}

		::System::Void RemoveFromList(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_REMOVEFROMLIST_OFFSET))(this, triangle);
		}

		::System::Void MeshClean(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_MESHCLEAN_OFFSET))(this, triangle);
		}

		::System::Void MeshCleanReq(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_MESHCLEANREQ_OFFSET))(this, triangle);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_CLEAR_OFFSET))(this);
		}

		::System::Void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_ADDNODE_OFFSET))(this, node);
		}

		::System::Void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_REMOVENODE_OFFSET))(this, node);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_LOCATENODE_OFFSET))(this, point);
		}

		::System::Void CreateAdvancingFront()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_CREATEADVANCINGFRONT_OFFSET))(this);
		}

		::System::Void MapTriangleToNodes(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_MAPTRIANGLETONODES_OFFSET))(this, t);
		}

		::System::Void PrepareTriangulation(::UnityEngine::ProBuilder::Poly2Tri::Triangulatable* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_PREPARETRIANGULATION_OFFSET))(this, t);
		}

		::System::Void FinalizeTriangulation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_FINALIZETRIANGULATION_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint* NewConstraint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONTEXT_NEWCONSTRAINT_OFFSET))(this, a, b);
		}
	};
}
