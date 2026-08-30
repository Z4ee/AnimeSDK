#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.h"

#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EACA4B0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int PolygonPoint_TypeDefinitionIndex = 37439;

	class PolygonPoint : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint
	{
	public:
		::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGONPOINT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
