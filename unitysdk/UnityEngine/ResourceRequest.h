#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_RESOURCEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A483370)

namespace UnityEngine
{
	inline static constexpr unsigned int ResourceRequest_TypeDefinitionIndex = 4084;

	class ResourceRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::String* m_Path; // 0x28
		::System::Type* m_Type; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEREQUEST__CTOR_OFFSET))(this);
		}
	};
}
