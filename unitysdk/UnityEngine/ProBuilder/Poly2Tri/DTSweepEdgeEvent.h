#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepConstraint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPEDGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D235CC0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweepEdgeEvent_TypeDefinitionIndex = 36589;

	class DTSweepEdgeEvent : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* ConstrainedEdge; // 0x10
		::System::Boolean Right; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPEDGEEVENT__CTOR_OFFSET))(this);
		}
	};
}
