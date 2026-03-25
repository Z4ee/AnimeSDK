#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_ADDNODE_OFFSET UNITYSDK_OFFSET(0x187B0740)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_FINDSEARCHNODE_OFFSET UNITYSDK_OFFSET(0x187B0860)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_1_OFFSET UNITYSDK_OFFSET(0x187B0900)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_OFFSET UNITYSDK_OFFSET(0x187B0870)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATEPOINT_OFFSET UNITYSDK_OFFSET(0x187B0970)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x187B0750)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187B0760)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x187B0730)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int AdvancingFront_TypeDefinitionIndex = 29780;

	class AdvancingFront : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Tail; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Head; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Search; // 0x20

		::System::Void _ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT__CTOR_OFFSET))(this, head, tail);
		}

		::System::Void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_ADDNODE_OFFSET))(this, node);
		}

		::System::Void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_REMOVENODE_OFFSET))(this, node);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* FindSearchNode(::System::Double x)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_FINDSEARCHNODE_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_OFFSET))(this, point);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode_1(::System::Double x)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_1_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocatePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATEPOINT_OFFSET))(this, point);
		}
	};
}
