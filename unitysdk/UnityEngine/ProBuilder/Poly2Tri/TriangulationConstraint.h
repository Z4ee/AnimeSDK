#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x187B82A0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationConstraint_TypeDefinitionIndex = 29793;

	class TriangulationConstraint : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* Q; // 0x10
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* P; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONCONSTRAINT__CTOR_OFFSET))(this);
		}
	};
}
