#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define UNITYENGINE_SETUPCOROUTINE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x18A4D890)
#define UNITYENGINE_SETUPCOROUTINE_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x18A4D7B0)

namespace UnityEngine
{
	inline static constexpr unsigned int SetupCoroutine_TypeDefinitionIndex = 4128;

	class SetupCoroutine : public ::System::Object
	{
	public:
		static ::System::Void InvokeMoveNext(::System::Collections::IEnumerator* enumerator, ::System::IntPtr returnValueAddress)
		{
			return ((::System::Void(*)(::System::Collections::IEnumerator*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SETUPCOROUTINE_INVOKEMOVENEXT_OFFSET))(enumerator, returnValueAddress);
		}

		static ::System::Object* InvokeMember(::System::Object* behaviour, ::System::String* name, ::System::Object* variable)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SETUPCOROUTINE_INVOKEMEMBER_OFFSET))(behaviour, name, variable);
		}
	};
}
