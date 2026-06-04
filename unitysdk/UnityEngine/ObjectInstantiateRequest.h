#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_OBJECTINSTANTIATEREQUEST_ABORT_OFFSET UNITYSDK_OFFSET(0x1B2B3E50)
#define UNITYENGINE_OBJECTINSTANTIATEREQUEST_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B2B3E20)
#define UNITYENGINE_OBJECTINSTANTIATEREQUEST_GET_ORIGINAL_OFFSET UNITYSDK_OFFSET(0x1B2B3E40)
#define UNITYENGINE_OBJECTINSTANTIATEREQUEST_SET_ORIGINAL_OFFSET UNITYSDK_OFFSET(0x1B2B3E30)
#define UNITYENGINE_OBJECTINSTANTIATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B3E60)

namespace UnityEngine
{
	inline static constexpr unsigned int ObjectInstantiateRequest_TypeDefinitionIndex = 4311;

	class ObjectInstantiateRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::UnityEngine::Object* _Original_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANTIATEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_Instance()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANTIATEREQUEST_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Original(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANTIATEREQUEST_SET_ORIGINAL_OFFSET))(this, a1);
		}

		::UnityEngine::Object* get_Original()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANTIATEREQUEST_GET_ORIGINAL_OFFSET))(this);
		}

		::System::Boolean Abort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OBJECTINSTANTIATEREQUEST_ABORT_OFFSET))(this);
		}
	};
}
