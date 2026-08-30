#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDB6CB0)
#define UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x3BCE7A0)
#define UNITYENGINE_CONTACTFILTER2D_CREATELEGACYFILTER_OFFSET UNITYSDK_OFFSET(0x1EDB6CF0)
#define UNITYENGINE_CONTACTFILTER2D_NOFILTER_OFFSET UNITYSDK_OFFSET(0x3BCE750)
#define UNITYENGINE_CONTACTFILTER2D_SETDEPTH_OFFSET UNITYSDK_OFFSET(0x3BCE7C0)
#define UNITYENGINE_CONTACTFILTER2D_SETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x3BCE7B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ContactFilter2D_TypeDefinitionIndex = 5800;

	struct alignas(4) ContactFilter2D
	{
		::System::Boolean useTriggers; // 0x10
		::System::Boolean useLayerMask; // 0x11
		::System::Boolean useDepth; // 0x12
		::System::Boolean useOutsideDepth; // 0x13
		::System::Boolean useNormalAngle; // 0x14
		::System::Boolean useOutsideNormalAngle; // 0x15
		::UnityEngine::LayerMask layerMask; // 0x18
		::System::Single minDepth; // 0x1C
		::System::Single maxDepth; // 0x20
		::System::Single minNormalAngle; // 0x24
		::System::Single maxNormalAngle; // 0x28

		::UnityEngine::ContactFilter2D NoFilter()
		{
			return ((::UnityEngine::ContactFilter2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_NOFILTER_OFFSET))(this);
		}

		::System::Void CheckConsistency()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_OFFSET))(this);
		}

		::System::Void SetLayerMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_SETLAYERMASK_OFFSET))(this, a1);
		}

		::System::Void SetDepth(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_SETDEPTH_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::ContactFilter2D CreateLegacyFilter(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::ContactFilter2D(*)(::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CREATELEGACYFILTER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CheckConsistency_Injected(::UnityEngine::ContactFilter2D& a1)
		{
			return ((::System::Void(*)(::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTFILTER2D_CHECKCONSISTENCY_INJECTED_OFFSET))(a1);
		}
	};
}
