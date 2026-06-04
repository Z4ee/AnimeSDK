#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePropertyType.h"

namespace System { class String; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_ADDFACESET_OFFSET UNITYSDK_OFFSET(0x3873700)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_MARKFORCEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x38738D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWCAMERA_OFFSET UNITYSDK_OFFSET(0x3873370)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOINTS_OFFSET UNITYSDK_OFFSET(0x3873420)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOLYMESH_OFFSET UNITYSDK_OFFSET(0x38734D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPROPERTY_OFFSET UNITYSDK_OFFSET(0x3873820)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWXFORM_OFFSET UNITYSDK_OFFSET(0x38732C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_SANITIZENAME_OFFSET UNITYSDK_OFFSET(0x1B045040)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_1_OFFSET UNITYSDK_OFFSET(0x3873600)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_2_OFFSET UNITYSDK_OFFSET(0x3873680)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_3_OFFSET UNITYSDK_OFFSET(0x38737A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x3873580)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeObject_TypeDefinitionIndex = 41609;

	struct alignas(8) aeObject
	{
		::System::IntPtr self; // 0x10

		::System::Void _ctor(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT__CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewXform(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWXFORM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewCamera(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWCAMERA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewPoints(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOINTS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewPolyMesh(::System::String* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOLYMESH_OFFSET))(this, a1, a2);
		}

		/*
		::System::Void WriteSample(::UnityEngine::Formats::Alembic::Sdk::aeXformData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void WriteSample_1(::UnityEngine::Formats::Alembic::Sdk::CameraData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_1_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void WriteSample_2(::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_2_OFFSET))(this, a1);
		}
		*/

		::System::Void AddFaceSet(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_ADDFACESET_OFFSET))(this, a1);
		}

		/*
		::System::Void WriteSample_3(::UnityEngine::Formats::Alembic::Sdk::aePointsData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aePointsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_3_OFFSET))(this, a1);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aeProperty NewProperty(::System::String* a1, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType a2)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeProperty(*)(::PVOID, ::System::String*, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPROPERTY_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void MarkForceInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_MARKFORCEINVISIBLE_OFFSET))(this);
		}

		static ::System::String* SanitizeName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_SANITIZENAME_OFFSET))(a1);
		}
	};
}
