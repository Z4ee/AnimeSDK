#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.h"

#define UNITYENGINE_PROBUILDER_POLY2TRI_POLYGONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F4D20)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int PolygonPoint_TypeDefinitionIndex = 35498;

	class PolygonPoint : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint
	{
	public:
		::System::Void _ctor(::System::Double x, ::System::Double y, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POLYGONPOINT__CTOR_OFFSET))(this, x, y, index);
		}
	};
}
