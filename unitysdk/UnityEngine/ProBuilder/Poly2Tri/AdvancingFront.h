#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1EABF450)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_FINDSEARCHNODE_OFFSET UNITYSDK_OFFSET(0x1EABF580)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_1_OFFSET UNITYSDK_OFFSET(0x1EABF620)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_OFFSET UNITYSDK_OFFSET(0x1EABF590)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATEPOINT_OFFSET UNITYSDK_OFFSET(0x1EABF690)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_REMOVENODE_OFFSET UNITYSDK_OFFSET(0x1EABF460)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EABF470)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EABF440)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int AdvancingFront_TypeDefinitionIndex = 37441;

	class AdvancingFront : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Head; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Search; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Tail; // 0x20

		::System::Void _ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_ADDNODE_OFFSET))(this, a1);
		}

		::System::Void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_REMOVENODE_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* FindSearchNode(::System::Double a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_FINDSEARCHNODE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode_1(::System::Double a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATENODE_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocatePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONT_LOCATEPOINT_OFFSET))(this, a1);
		}
	};
}
