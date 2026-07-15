#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x691EF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x676DC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x167D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0x38C6D30)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x7BE220)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_VISIBILITY_OFFSET UNITYSDK_OFFSET(0x167B90)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aePolyMeshData_TypeDefinitionIndex = 42466;

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

		::System::Void set_visibility(::UnityEngine::Formats::Alembic::Sdk::Bool a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::Bool))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_VISIBILITY_OFFSET))(this, a1);
		}

		::System::IntPtr get_points()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTS_OFFSET))(this, a1);
		}

		::System::Int32 get_pointCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_GET_POINTCOUNT_OFFSET))(this);
		}

		::System::Void set_pointCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEPOLYMESHDATA_SET_POINTCOUNT_OFFSET))(this, a1);
		}
	};
}
