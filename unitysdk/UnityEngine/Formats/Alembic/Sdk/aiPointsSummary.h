#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_CONSTANTIDS_OFFSET UNITYSDK_OFFSET(0x888B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_CONSTANTPOINTS_OFFSET UNITYSDK_OFFSET(0x20D55F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_CONSTANTVELOCITIES_OFFSET UNITYSDK_OFFSET(0x20D5600)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_HASIDS_OFFSET UNITYSDK_OFFSET(0x20FB900)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_HASVELOCITIES_OFFSET UNITYSDK_OFFSET(0x29C50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_CONSTANTIDS_OFFSET UNITYSDK_OFFSET(0x888C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_CONSTANTPOINTS_OFFSET UNITYSDK_OFFSET(0x2105EC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_CONSTANTVELOCITIES_OFFSET UNITYSDK_OFFSET(0x2106990)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_HASIDS_OFFSET UNITYSDK_OFFSET(0x2105EB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_HASVELOCITIES_OFFSET UNITYSDK_OFFSET(0x791D0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPointsSummary_TypeDefinitionIndex = 34980;

	struct alignas(1) aiPointsSummary
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _hasVelocities_k__BackingField; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::Bool _hasIDs_k__BackingField; // 0x11
		::UnityEngine::Formats::Alembic::Sdk::Bool _constantPoints_k__BackingField; // 0x12
		::UnityEngine::Formats::Alembic::Sdk::Bool _constantVelocities_k__BackingField; // 0x13
		::UnityEngine::Formats::Alembic::Sdk::Bool _constantIDs_k__BackingField; // 0x14

		::UnityEngine::Formats::Alembic::Sdk::Bool get_hasVelocities()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_HASVELOCITIES_OFFSET))(this);
		}

		::System::Void set_hasVelocities(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_HASVELOCITIES_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_hasIDs()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_HASIDS_OFFSET))(this);
		}

		::System::Void set_hasIDs(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_HASIDS_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_constantPoints()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_CONSTANTPOINTS_OFFSET))(this);
		}

		::System::Void set_constantPoints(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_CONSTANTPOINTS_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_constantVelocities()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_CONSTANTVELOCITIES_OFFSET))(this);
		}

		::System::Void set_constantVelocities(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_CONSTANTVELOCITIES_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::Bool get_constantIDs()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_GET_CONSTANTIDS_OFFSET))(this);
		}

		::System::Void set_constantIDs(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTSSUMMARY_SET_CONSTANTIDS_OFFSET))(this, value);
		}
	};
}
