#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class PolygonPoint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1885F260)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__0_OFFSET UNITYSDK_OFFSET(0x1885F280)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__1_OFFSET UNITYSDK_OFFSET(0x1885F300)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Triangulation___c__DisplayClass7_0_TypeDefinitionIndex = 34253;

	class Triangulation___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Triangulate_b__0(::UnityEngine::Vector2 x)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__0_OFFSET))(this, x);
		}

		::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2 x)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS7_0__TRIANGULATE_B__1_OFFSET))(this, x);
		}
	};
}
