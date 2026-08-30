#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITEARRAYSAMPLE_OFFSET UNITYSDK_OFFSET(0x3BB99A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_1_OFFSET UNITYSDK_OFFSET(0x3BB9AB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_2_OFFSET UNITYSDK_OFFSET(0x3BB9B30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_3_OFFSET UNITYSDK_OFFSET(0x3BB9BB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_4_OFFSET UNITYSDK_OFFSET(0x3BB9C30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_5_OFFSET UNITYSDK_OFFSET(0x3BB9CB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_6_OFFSET UNITYSDK_OFFSET(0x3BB9D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_OFFSET UNITYSDK_OFFSET(0x3BB9A30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x16050)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeProperty_TypeDefinitionIndex = 44652;

	struct alignas(8) aeProperty
	{
		::System::IntPtr self; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void WriteArraySample(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITEARRAYSAMPLE_OFFSET))(this, a1, a2);
		}

		::System::Void WriteScalarSample(::System::Single& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_OFFSET))(this, a1);
		}

		::System::Void WriteScalarSample_1(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_1_OFFSET))(this, a1);
		}

		/*
		::System::Void WriteScalarSample_2(::UnityEngine::Formats::Alembic::Sdk::Bool& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_2_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void WriteScalarSample_3(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_3_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void WriteScalarSample_4(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_4_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void WriteScalarSample_5(::UnityEngine::Vector4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_5_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void WriteScalarSample_6(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPROPERTY_WRITESCALARSAMPLE_6_OFFSET))(this, a1);
		}
		*/
	};
}
