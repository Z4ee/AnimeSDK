#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_CACHE_CACHE_GETPATH_OFFSET UNITYSDK_OFFSET(0x1ED0DB30)
#define UNITYENGINE_CACHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E960)
#define UNITYENGINE_CACHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB7CD0)
#define UNITYENGINE_CACHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_CACHE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x5F00)
#define UNITYENGINE_CACHE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x3BB7D30)

namespace UnityEngine
{
	inline static constexpr unsigned int Cache_TypeDefinitionIndex = 4036;

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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Cache a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Cache))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::String* get_path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GET_PATH_OFFSET))(this);
		}

		static ::System::String* Cache_GetPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_CACHE_GETPATH_OFFSET))(a1);
		}
	};
}
