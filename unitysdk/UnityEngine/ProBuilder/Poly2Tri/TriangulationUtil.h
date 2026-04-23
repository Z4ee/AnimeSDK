#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/Orientation.h"

namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_INSCANAREA_OFFSET UNITYSDK_OFFSET(0x1A1F05A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_ORIENT2D_OFFSET UNITYSDK_OFFSET(0x1A1ECF90)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_SMARTINCIRCLE_OFFSET UNITYSDK_OFFSET(0x1A1F1720)
#define UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1F4DD0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int TriangulationUtil_TypeDefinitionIndex = 35518;

	class TriangulationUtil : public ::System::Object
	{
	public:
		static ::System::Double* StaticGet_EPSILON()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(TriangulationUtil_TypeDefinitionIndex)->GetStaticField(0xEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL__CCTOR_OFFSET))();
		}

		static ::System::Boolean SmartIncircle(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_SMARTINCIRCLE_OFFSET))(pa, pb, pc, pd);
		}

		static ::System::Boolean InScanArea(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pd)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_INSCANAREA_OFFSET))(pa, pb, pc, pd);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::Orientation Orient2d(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* pc)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::Orientation(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_TRIANGULATIONUTIL_ORIENT2D_OFFSET))(pa, pb, pc);
		}
	};
}
