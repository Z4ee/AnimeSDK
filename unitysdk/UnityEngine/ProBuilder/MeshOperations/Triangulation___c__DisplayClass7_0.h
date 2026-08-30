#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class PolygonPoint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB75700)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__0_OFFSET UNITYSDK_OFFSET(0x1EB75720)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__1_OFFSET UNITYSDK_OFFSET(0x1EB757A0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Triangulation___c__DisplayClass7_0_TypeDefinitionIndex = 43325;

	class Triangulation___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Triangulate_b__0(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__1_OFFSET))(this, a1);
		}
	};
}
