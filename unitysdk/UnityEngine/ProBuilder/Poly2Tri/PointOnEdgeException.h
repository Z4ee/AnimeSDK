#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/NotImplementedException.h"

namespace System { class String; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_POINTONEDGEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1EFD70)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int PointOnEdgeException_TypeDefinitionIndex = 35509;

	class PointOnEdgeException : public ::System::NotImplementedException
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* C; // 0x88
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* A; // 0x90
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* B; // 0x98

		::System::Void _ctor(::System::String* message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_POINTONEDGEEXCEPTION__CTOR_OFFSET))(this, message, a, b, c);
		}
	};
}
