#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/NotImplementedException.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTONEDGEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D233310)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int PointOnEdgeException_TypeDefinitionIndex = 36591;

	class PointOnEdgeException : public ::System::NotImplementedException
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* C; // 0x88
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* B; // 0x90
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* A; // 0x98

		::System::Void _ctor(::System::String* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTONEDGEEXCEPTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
