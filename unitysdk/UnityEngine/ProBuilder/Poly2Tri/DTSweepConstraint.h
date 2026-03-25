#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationConstraint.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x187B81C0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweepConstraint_TypeDefinitionIndex = 29784;

	class DTSweepConstraint : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint
	{
	public:
		::System::Void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEPCONSTRAINT__CTOR_OFFSET))(this, p1, p2);
		}
	};
}
