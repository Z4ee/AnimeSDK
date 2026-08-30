#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/Orientation.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_INSCANAREA_OFFSET UNITYSDK_OFFSET(0x1EF24AE0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_ORIENT2D_OFFSET UNITYSDK_OFFSET(0x1EF211F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_SMARTINCIRCLE_OFFSET UNITYSDK_OFFSET(0x1EF25CC0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF29D80)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationUtil_TypeDefinitionIndex = 37459;

	class TriangulationUtil : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_EPSILON()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TriangulationUtil_TypeDefinitionIndex)->GetStaticField(0x720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL__CCTOR_OFFSET))();
		}

		static ::System::Boolean SmartIncircle(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_SMARTINCIRCLE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean InScanArea(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_INSCANAREA_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::Orientation Orient2d(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::Orientation(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_ORIENT2D_OFFSET))(a1, a2, a3);
		}
	};
}
