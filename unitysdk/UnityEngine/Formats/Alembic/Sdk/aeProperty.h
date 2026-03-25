#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITEARRAYSAMPLE_OFFSET UNITYSDK_OFFSET(0x2105280)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x2105390)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_2_OFFSET UNITYSDK_OFFSET(0x2105410)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_3_OFFSET UNITYSDK_OFFSET(0x2105490)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_4_OFFSET UNITYSDK_OFFSET(0x2105510)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_5_OFFSET UNITYSDK_OFFSET(0x2105590)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_6_OFFSET UNITYSDK_OFFSET(0x2105610)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_OFFSET UNITYSDK_OFFSET(0x2105310)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeProperty_TypeDefinitionIndex = 34956;

	struct alignas(8) aeProperty
	{
		::System::IntPtr self; // 0x10

		::System::Void _ctor(::System::IntPtr self)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY__CTOR_OFFSET))(this, self);
		}

		::System::Void WriteArraySample(::System::IntPtr data, ::System::Int32 numData)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITEARRAYSAMPLE_OFFSET))(this, data, numData);
		}

		::System::Void WriteScalarSample(::System::Single& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_OFFSET))(this, data);
		}

		::System::Void WriteScalarSample_1(::System::Int32& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_1_OFFSET))(this, data);
		}

		/*
		::System::Void WriteScalarSample_2(::UnityEngine::Formats::Alembic::Sdk::Bool& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_2_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void WriteScalarSample_3(::UnityEngine::Vector2& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_3_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void WriteScalarSample_4(::UnityEngine::Vector3& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_4_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void WriteScalarSample_5(::UnityEngine::Vector4& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_5_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void WriteScalarSample_6(::UnityEngine::Matrix4x4& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_6_OFFSET))(this, data);
		}
		*/
	};
}
