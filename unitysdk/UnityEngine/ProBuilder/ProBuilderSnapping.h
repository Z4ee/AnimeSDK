#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Vector3Mask.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_GETSNAPPINGMASKBASEDONNORMALVECTOR_OFFSET UNITYSDK_OFFSET(0x1B119B50)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_ISCARDINALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B119200)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVALUEONRAY_OFFSET UNITYSDK_OFFSET(0x1B119BE0)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B119730)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_1_OFFSET UNITYSDK_OFFSET(0x1B119460)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_OFFSET UNITYSDK_OFFSET(0x1B119380)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderSnapping_TypeDefinitionIndex = 40792;

	class ProBuilderSnapping : public ::System::Object
	{
	public:
		// static const ::System::Single k_MaxRaySnapDistance; // 0x0

		static ::System::Boolean IsCardinalDirection(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_ISCARDINALDIRECTION_OFFSET))(a1);
		}

		static ::System::Single Snap(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 Snap_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_1_OFFSET))(a1, a2);
		}

		static ::System::Void SnapVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetSnappingMaskBasedOnNormalVector(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_GETSNAPPINGMASKBASEDONNORMALVECTOR_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 SnapValueOnRay(::UnityEngine::Ray a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::ProBuilder::Vector3Mask a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Ray, ::System::Single, ::System::Single, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVALUEONRAY_OFFSET))(a1, a2, a3, a4);
		}
	};
}
