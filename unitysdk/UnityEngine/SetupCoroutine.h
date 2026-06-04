#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define UNITYENGINE_SETUPCOROUTINE_INVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B2D5BF0)
#define UNITYENGINE_SETUPCOROUTINE_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B2D5B00)

namespace UnityEngine
{
	inline static constexpr unsigned int SetupCoroutine_TypeDefinitionIndex = 4304;

	class SetupCoroutine : public ::System::Object
	{
	public:
		static ::System::Void InvokeMoveNext(::System::Collections::IEnumerator* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::System::Collections::IEnumerator*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_SETUPCOROUTINE_INVOKEMOVENEXT_OFFSET))(a1, a2);
		}

		static ::System::Object* InvokeMember(::System::Object* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_SETUPCOROUTINE_INVOKEMEMBER_OFFSET))(a1, a2, a3);
		}
	};
}
