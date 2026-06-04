#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORMSAMPLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x3875730)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORMSAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B046B90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORMSAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B046B80)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiXformSample_TypeDefinitionIndex = 41653;

	struct alignas(8) aiXformSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiXformSample a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiXformSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORMSAMPLE_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiXformSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiXformSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORMSAMPLE_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		::System::Void GetData(::UnityEngine::Formats::Alembic::Sdk::aiXformData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIXFORMSAMPLE_GETDATA_OFFSET))(this, a1);
		}
		*/
	};
}
