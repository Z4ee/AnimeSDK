#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aePropertyType.h"

namespace System { class String; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_ADDFACESET_OFFSET UNITYSDK_OFFSET(0x22D7BF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_MARKFORCEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x22D7DC0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWCAMERA_OFFSET UNITYSDK_OFFSET(0x22D7860)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOINTS_OFFSET UNITYSDK_OFFSET(0x22D7910)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOLYMESH_OFFSET UNITYSDK_OFFSET(0x22D79C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPROPERTY_OFFSET UNITYSDK_OFFSET(0x22D7D10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWXFORM_OFFSET UNITYSDK_OFFSET(0x22D77B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_SANITIZENAME_OFFSET UNITYSDK_OFFSET(0x1A1E0940)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_1_OFFSET UNITYSDK_OFFSET(0x22D7AF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_2_OFFSET UNITYSDK_OFFSET(0x22D7B70)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_3_OFFSET UNITYSDK_OFFSET(0x22D7C90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_OFFSET UNITYSDK_OFFSET(0x22D7A70)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeObject_TypeDefinitionIndex = 40783;

	struct alignas(8) aeObject
	{
		::System::IntPtr self; // 0x10

		::System::Void _ctor(::System::IntPtr self)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT__CTOR_OFFSET))(this, self);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewXform(::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWXFORM_OFFSET))(this, name, tsi);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewCamera(::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWCAMERA_OFFSET))(this, name, tsi);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewPoints(::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOINTS_OFFSET))(this, name, tsi);
		}

		::UnityEngine::Formats::Alembic::Sdk::aeObject NewPolyMesh(::System::String* name, ::System::Int32 tsi)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPOLYMESH_OFFSET))(this, name, tsi);
		}

		/*
		::System::Void WriteSample(::UnityEngine::Formats::Alembic::Sdk::aeXformData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aeXformData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void WriteSample_1(::UnityEngine::Formats::Alembic::Sdk::CameraData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_1_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void WriteSample_2(::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aePolyMeshData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_2_OFFSET))(this, data);
		}
		*/

		::System::Void AddFaceSet(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_ADDFACESET_OFFSET))(this, name);
		}

		/*
		::System::Void WriteSample_3(::UnityEngine::Formats::Alembic::Sdk::aePointsData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aePointsData&))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_WRITESAMPLE_3_OFFSET))(this, data);
		}
		*/

		/*
		::UnityEngine::Formats::Alembic::Sdk::aeProperty NewProperty(::System::String* name, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType type)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeProperty(*)(::PVOID, ::System::String*, ::UnityEngine::Formats::Alembic::Sdk::aePropertyType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_NEWPROPERTY_OFFSET))(this, name, type);
		}
		*/

		::System::Void MarkForceInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_MARKFORCEINVISIBLE_OFFSET))(this);
		}

		static ::System::String* SanitizeName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AEOBJECT_SANITIZENAME_OFFSET))(name);
		}
	};
}
