#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONTNODE_GET_HASNEXT_OFFSET UNITYSDK_OFFSET(0x1EF1F020)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONTNODE_GET_HASPREV_OFFSET UNITYSDK_OFFSET(0x1EF1F030)
#define UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF1EFF0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int AdvancingFrontNode_TypeDefinitionIndex = 37442;

	class AdvancingFrontNode : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Point; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Prev; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Next; // 0x20
		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* Triangle; // 0x28
		::System::Double Value; // 0x30

		::System::Void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONTNODE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_HasNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONTNODE_GET_HASNEXT_OFFSET))(this);
		}

		::System::Boolean get_HasPrev()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_ADVANCINGFRONTNODE_GET_HASPREV_OFFSET))(this);
		}
	};
}
