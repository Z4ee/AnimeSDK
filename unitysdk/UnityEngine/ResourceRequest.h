#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_RESOURCEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1ED62140)
#define UNITYENGINE_RESOURCEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED62170)

namespace UnityEngine
{
	inline static constexpr unsigned int ResourceRequest_TypeDefinitionIndex = 4273;

	class ResourceRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::String* m_Path; // 0x28
		::System::Type* m_Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEREQUEST_GET_ASSET_OFFSET))(this);
		}
	};
}
