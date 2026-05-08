#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B2D98F0)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B2D9920)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B2D9650)
#define UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2D9640)

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoopSystem_UpdateFunction_TypeDefinitionIndex = 5520;

	class PlayerLoopSystem_UpdateFunction : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWLEVEL_PLAYERLOOPSYSTEM_UPDATEFUNCTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
