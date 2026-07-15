#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CCC8A00)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CCC8A30)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CCC89F0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC8980)

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoopSystem_UpdateFunction_TypeDefinitionIndex = 4527;

	class PlayerLoopSystem_UpdateFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
