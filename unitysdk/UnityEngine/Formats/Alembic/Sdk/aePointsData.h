#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CCC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_IDS_OFFSET UNITYSDK_OFFSET(0x28E30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0x13C40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x29C50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0xAC20)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_IDS_OFFSET UNITYSDK_OFFSET(0x28E40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VELOCITIES_OFFSET UNITYSDK_OFFSET(0xAF80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x791D0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aePointsData_TypeDefinitionIndex = 34950;

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

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VISIBILITY_OFFSET))(this, value);
		}

		::System::IntPtr get_positions()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_POSITIONS_OFFSET))(this);
		}

		::System::Void set_positions(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_POSITIONS_OFFSET))(this, value);
		}

		::System::IntPtr get_velocities()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_VELOCITIES_OFFSET))(this);
		}

		::System::Void set_velocities(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_VELOCITIES_OFFSET))(this, value);
		}

		::System::IntPtr get_ids()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_IDS_OFFSET))(this);
		}

		::System::Void set_ids(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_IDS_OFFSET))(this, value);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOINTSDATA_SET_COUNT_OFFSET))(this, value);
		}
	};
}
