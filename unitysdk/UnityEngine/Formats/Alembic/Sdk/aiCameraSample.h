#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERASAMPLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x22D8350)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERASAMPLE_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A1E1690)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERASAMPLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A1E1680)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiCameraSample_TypeDefinitionIndex = 40828;

	struct alignas(8) aiCameraSample
	{
		::System::IntPtr self; // 0x10

		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiCameraSample v)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiCameraSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERASAMPLE_OP_IMPLICIT_OFFSET))(v);
		}

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSample op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiCameraSample v)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSample(*)(::UnityEngine::Formats::Alembic::Sdk::aiCameraSample))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERASAMPLE_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		::System::Void GetData(::UnityEngine::Formats::Alembic::Sdk::CameraData& dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICAMERASAMPLE_GETDATA_OFFSET))(this, dst);
		}
		*/
	};
}
