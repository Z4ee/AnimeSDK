#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FOCALLENGTH_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_LENSSHIFT_OFFSET UNITYSDK_OFFSET(0x14410)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x2D2B640)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x60D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x2D770)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x3872DE0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FOCALLENGTH_OFFSET UNITYSDK_OFFSET(0xD500)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_LENSSHIFT_OFFSET UNITYSDK_OFFSET(0xB7C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x75120)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_SENSORSIZE_OFFSET UNITYSDK_OFFSET(0x95B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x13CFF0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int CameraData_TypeDefinitionIndex = 41660;

	struct alignas(4) CameraData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _visibility_k__BackingField; // 0x10
		::System::Single _focalLength_k__BackingField; // 0x14
		::UnityEngine::Vector2 _sensorSize_k__BackingField; // 0x18
		::UnityEngine::Vector2 _lensShift_k__BackingField; // 0x20
		::System::Single _nearClipPlane_k__BackingField; // 0x28
		::System::Single _farClipPlane_k__BackingField; // 0x2C

		::UnityEngine::Formats::Alembic::Sdk::Bool get_visibility()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::Single get_focalLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FOCALLENGTH_OFFSET))(this);
		}

		::System::Void set_focalLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FOCALLENGTH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_sensorSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_SENSORSIZE_OFFSET))(this);
		}

		::System::Void set_sensorSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_SENSORSIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_lensShift()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_LENSSHIFT_OFFSET))(this);
		}

		::System::Void set_lensShift(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_LENSSHIFT_OFFSET))(this, a1);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_NEARCLIPPLANE_OFFSET))(this, a1);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_CAMERADATA_SET_FARCLIPPLANE_OFFSET))(this, a1);
		}
	};
}
