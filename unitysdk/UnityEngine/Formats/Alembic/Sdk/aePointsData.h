#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x7A7FD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0xA4AEC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0x676BA0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x167D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x395BE80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_IDS_OFFSET UNITYSDK_OFFSET(0x38CBD50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0xA4B360)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x167B90)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aePointsData_TypeDefinitionIndex = 42464;

	struct alignas(8) aePointsData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _visibility_k__BackingField; // 0x10
		::System::IntPtr _positions_k__BackingField; // 0x18
		::System::IntPtr _velocities_k__BackingField; // 0x20
		::System::IntPtr _ids_k__BackingField; // 0x28
		::System::Int32 _count_k__BackingField; // 0x30

		::UnityEngine::Formats::Alembic::Sdk::Bool get_visibility()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::IntPtr get_positions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void set_positions(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_POSITIONS_OFFSET))(this, a1);
		}

		::System::IntPtr get_velocities()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VELOCITIES_OFFSET))(this);
		}

		::System::Void set_velocities(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VELOCITIES_OFFSET))(this, a1);
		}

		::System::IntPtr get_ids()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_IDS_OFFSET))(this);
		}

		::System::Void set_ids(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_IDS_OFFSET))(this, a1);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_COUNT_OFFSET))(this, a1);
		}
	};
}
