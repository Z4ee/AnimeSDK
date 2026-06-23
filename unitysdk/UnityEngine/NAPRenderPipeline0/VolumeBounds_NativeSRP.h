#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEBOUNDS_NATIVESRP_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1DA9A300)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEBOUNDS_NATIVESRP_START_OFFSET UNITYSDK_OFFSET(0x1DA9A2C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEBOUNDS_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9A420)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeBounds_NativeSRP_TypeDefinitionIndex = 6074;

	class VolumeBounds_NativeSRP : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 m_Center; // 0x18
		::UnityEngine::Vector3 m_Size; // 0x24
		::UnityEngine::Bounds m_Bounds; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEBOUNDS_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEBOUNDS_NATIVESRP_START_OFFSET))(this);
		}

		::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 targetPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEBOUNDS_NATIVESRP_CLOSESTPOINT_OFFSET))(this, targetPos);
		}
	};
}
