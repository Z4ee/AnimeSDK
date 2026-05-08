#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AsyncInstantiateOperation; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_ASYNCINSTANTIATEOPERATIONHELPER_SETASYNCINSTANTIATEOPERATIONRESULT_OFFSET UNITYSDK_OFFSET(0x1B2EB650)
#define UNITYENGINE_ASYNCINSTANTIATEOPERATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2EB670)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncInstantiateOperationHelper_TypeDefinitionIndex = 5322;

	class AsyncInstantiateOperationHelper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATIONHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void SetAsyncInstantiateOperationResult(::UnityEngine::AsyncInstantiateOperation* op, ::Il2CppArray<::UnityEngine::Object*>* result)
		{
			return ((::System::Void(*)(::UnityEngine::AsyncInstantiateOperation*, ::Il2CppArray<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATIONHELPER_SETASYNCINSTANTIATEOPERATIONRESULT_OFFSET))(op, result);
		}
	};
}
