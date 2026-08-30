#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPBASIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC71A0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweepBasin_TypeDefinitionIndex = 37444;

	class DTSweepBasin : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* rightNode; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* leftNode; // 0x18
		::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* bottomNode; // 0x20
		::System::Boolean leftHighest; // 0x28
		::System::Double width; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPBASIN__CTOR_OFFSET))(this);
		}
	};
}
