#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder::Poly2Tri { class PolygonPoint; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FCB40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS8_0__TRIANGULATE_B__0_OFFSET UNITYSDK_OFFSET(0x1B0FCC50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS8_0__TRIANGULATE_B__1_OFFSET UNITYSDK_OFFSET(0x1B0FCCD0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Triangulation___c__DisplayClass8_0_TypeDefinitionIndex = 40900;

	class Triangulation___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* __9__1; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__0(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS8_0__TRIANGULATE_B__0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_TRIANGULATION___C__DISPLAYCLASS8_0__TRIANGULATE_B__1_OFFSET))(this, a1);
		}
	};
}
