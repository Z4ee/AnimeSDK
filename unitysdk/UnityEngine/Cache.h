#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_CACHE_CACHE_GETPATH_OFFSET UNITYSDK_OFFSET(0x189F3920)
#define UNITYENGINE_CACHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x29140)
#define UNITYENGINE_CACHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x2110410)
#define UNITYENGINE_CACHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_CACHE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_CACHE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x2110470)

namespace UnityEngine
{
	inline static constexpr unsigned int Cache_TypeDefinitionIndex = 3847;

	struct alignas(4) Cache
	{
		::System::Int32 m_Handle; // 0x10

		::System::Int32 get_handle()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GET_HANDLE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Cache other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Cache))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GET_PATH_OFFSET))(this);
		}

		static ::System::String* Cache_GetPath(::System::Int32 handle)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_CACHE_GETPATH_OFFSET))(handle);
		}
	};
}
