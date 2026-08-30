#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::Formats::Alembic::Sdk { class AlembicExportOptions; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_ADDTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x3BAAD60)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_ADDTIME_OFFSET UNITYSDK_OFFSET(0x3BAADF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x1EAB5790)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0x3BAAB50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x3BAAAD0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_MARKFRAMEBEGIN_OFFSET UNITYSDK_OFFSET(0x3BAAE80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_MARKFRAMEEND_OFFSET UNITYSDK_OFFSET(0x3BAAF00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_OPENARCHIVE_OFFSET UNITYSDK_OFFSET(0x3BAACB0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x3BAABE0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeContext_TypeDefinitionIndex = 44650;

	struct alignas(8) aeContext
	{
		::System::IntPtr self; // 0x10

		/*
		::UnityEngine::Formats::Alembic::Sdk::aeObject get_topObject()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeObject(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_GET_TOPOBJECT_OFFSET))(this);
		}
		*/

		static ::UnityEngine::Formats::Alembic::Sdk::aeContext Create()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeContext(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_CREATE_OFFSET))();
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Void SetConfig(::UnityEngine::Formats::Alembic::Sdk::AlembicExportOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::AlembicExportOptions*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_SETCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean OpenArchive(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_OPENARCHIVE_OFFSET))(this, a1);
		}

		::System::Int32 AddTimeSampling(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_ADDTIMESAMPLING_OFFSET))(this, a1);
		}

		::System::Void AddTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_ADDTIME_OFFSET))(this, a1);
		}

		::System::Void MarkFrameBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_MARKFRAMEBEGIN_OFFSET))(this);
		}

		::System::Void MarkFrameEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECONTEXT_MARKFRAMEEND_OFFSET))(this);
		}
	};
}
