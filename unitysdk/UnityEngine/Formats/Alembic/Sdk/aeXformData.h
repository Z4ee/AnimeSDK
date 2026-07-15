#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_INHERITS_OFFSET UNITYSDK_OFFSET(0x3A21420)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x691E00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x3A213F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x38F4340)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x167D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_INHERITS_OFFSET UNITYSDK_OFFSET(0x3A21430)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x39E7A80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x3A21410)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_TRANSLATION_OFFSET UNITYSDK_OFFSET(0x3A213E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x167B90)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeXformData_TypeDefinitionIndex = 42463;

	struct alignas(4) aeXformData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _visibility_k__BackingField; // 0x10
		::UnityEngine::Vector3 _translation_k__BackingField; // 0x14
		::UnityEngine::Quaternion _rotation_k__BackingField; // 0x20
		::UnityEngine::Vector3 _scale_k__BackingField; // 0x30
		::UnityEngine::Formats::Alembic::Sdk::Bool _inherits_k__BackingField; // 0x3C

		::UnityEngine::Formats::Alembic::Sdk::Bool get_visibility()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_translation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_TRANSLATION_OFFSET))(this);
		}

		::System::Void set_translation(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_TRANSLATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_scale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_SCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_inherits()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_GET_INHERITS_OFFSET))(this);
		}

		::System::Void set_inherits(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEXFORMDATA_SET_INHERITS_OFFSET))(this, a1);
		}
	};
}
