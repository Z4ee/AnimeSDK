#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xFF58920)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xFF58990)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44_INVOKE_OFFSET UNITYSDK_OFFSET(0xFF58610)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE44__CTOR_OFFSET UNITYSDK_OFFSET(0xFF49ED0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE44_TypeDefinitionIndex = 40461;

	class InternalGlobals___GEN_DELEGATE44 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::ActionDelayChangeReason reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44_INVOKE_OFFSET))(this, reason);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ActionDelayChangeReason reason, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44_BEGININVOKE_OFFSET))(this, reason, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE44_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
