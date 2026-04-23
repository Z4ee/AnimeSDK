#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x2A500)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x26F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x8D10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0xD87E0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aePolyMeshData_TypeDefinitionIndex = 40780;

	struct alignas(8) aePolyMeshData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool _visibility_k__BackingField; // 0x10
		::System::IntPtr _points_k__BackingField; // 0x18
		::System::Int32 _pointCount_k__BackingField; // 0x20
		::System::IntPtr normals; // 0x28
		::System::IntPtr uv0; // 0x30
		::System::IntPtr uv1; // 0x38
		::System::IntPtr colors; // 0x40
		::System::IntPtr submeshes; // 0x48
		::System::Int32 submeshCount; // 0x50

		::UnityEngine::Formats::Alembic::Sdk::Bool get_visibility()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::Bool(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_VISIBILITY_OFFSET))(this);
		}

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_VISIBILITY_OFFSET))(this, value);
		}

		::System::IntPtr get_points()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTS_OFFSET))(this, value);
		}

		::System::Int32 get_pointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTCOUNT_OFFSET))(this);
		}

		::System::Void set_pointCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTCOUNT_OFFSET))(this, value);
		}
	};
}
