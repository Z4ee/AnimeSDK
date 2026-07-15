#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B19D900)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1B19D910)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x1B19D920)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1B19D8F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B19D8E0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSample_TypeDefinitionIndex = 42512;

	struct alignas(8) aiSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiSample a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiXformSample op_Explicit(::UnityEngine::Formats::Alembic::Sdk::aiSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXformSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCameraSample op_Explicit_1(::UnityEngine::Formats::Alembic::Sdk::aiSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCameraSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample op_Explicit_2(::UnityEngine::Formats::Alembic::Sdk::aiSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_2_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPointsSample op_Explicit_3(::UnityEngine::Formats::Alembic::Sdk::aiSample a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPointsSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISAMPLE_OP_EXPLICIT_3_OFFSET))(a1);
		}
		*/
	};
}
