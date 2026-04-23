#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Vector3Mask.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_GETSNAPPINGMASKBASEDONNORMALVECTOR_OFFSET UNITYSDK_OFFSET(0x1A2B75F0)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_ISCARDINALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A2B6C60)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVALUEONRAY_OFFSET UNITYSDK_OFFSET(0x1A2B7680)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1A2B7190)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_1_OFFSET UNITYSDK_OFFSET(0x1A2B6EC0)
#define UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_OFFSET UNITYSDK_OFFSET(0x1A2B6DE0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ProBuilderSnapping_TypeDefinitionIndex = 39965;

	class ProBuilderSnapping : public ::System::Object
	{
	public:
		// static const ::System::Single k_MaxRaySnapDistance; // 0x0

		static ::System::Boolean IsCardinalDirection(::UnityEngine::Vector3 direction)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_ISCARDINALDIRECTION_OFFSET))(direction);
		}

		static ::System::Single Snap(::System::Single val, ::System::Single snap)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_OFFSET))(val, snap);
		}

		static ::UnityEngine::Vector3 Snap_1(::UnityEngine::Vector3 val, ::UnityEngine::Vector3 snap)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAP_1_OFFSET))(val, snap);
		}

		static ::System::Void SnapVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes, ::UnityEngine::Vector3 snap)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVERTICES_OFFSET))(mesh, indexes, snap);
		}

		static ::UnityEngine::Vector3 GetSnappingMaskBasedOnNormalVector(::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_GETSNAPPINGMASKBASEDONNORMALVECTOR_OFFSET))(normal);
		}

		static ::UnityEngine::Vector3 SnapValueOnRay(::UnityEngine::Ray ray, ::System::Single distance, ::System::Single snap, ::UnityEngine::ProBuilder::Vector3Mask mask)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Ray, ::System::Single, ::System::Single, ::UnityEngine::ProBuilder::Vector3Mask))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PROBUILDERSNAPPING_SNAPVALUEONRAY_OFFSET))(ray, distance, snap, mask);
		}
	};
}
