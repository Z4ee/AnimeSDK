#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPPOINTCOMPARATOR_COMPARE_OFFSET UNITYSDK_OFFSET(0x187B8EA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPPOINTCOMPARATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x187B84D0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweepPointComparator_TypeDefinitionIndex = 29788;

	class DTSweepPointComparator : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPPOINTCOMPARATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPPOINTCOMPARATOR_COMPARE_OFFSET))(this, p1, p2);
		}
	};
}
