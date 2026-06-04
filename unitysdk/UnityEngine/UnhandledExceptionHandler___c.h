#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class UnhandledExceptionEventArgs; }
namespace System { class UnhandledExceptionEventHandler; }

#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2E36B0)
#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E36E0)
#define UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__REGISTERUECATCHER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1B2E36F0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnhandledExceptionHandler___c_TypeDefinitionIndex = 4341;

	class UnhandledExceptionHandler___c : public ::System::Object
	{
	public:
		static ::UnityEngine::UnhandledExceptionHandler___c** StaticGet___9()
		{
			return (::UnityEngine::UnhandledExceptionHandler___c**)Il2CppClass::FromTypeDefinitionIndex(UnhandledExceptionHandler___c_TypeDefinitionIndex)->GetStaticField(0x35C70);
		}
		static ::System::UnhandledExceptionEventHandler** StaticGet___9__0_0()
		{
			return (::System::UnhandledExceptionEventHandler**)Il2CppClass::FromTypeDefinitionIndex(UnhandledExceptionHandler___c_TypeDefinitionIndex)->GetStaticField(0x35C78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterUECatcher_b__0_0(::System::Object* a1, ::System::UnhandledExceptionEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::UnhandledExceptionEventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNHANDLEDEXCEPTIONHANDLER___C__REGISTERUECATCHER_B__0_0_OFFSET))(this, a1, a2);
		}
	};
}
