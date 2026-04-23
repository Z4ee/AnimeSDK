#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11222DE0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11222E50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET UNITYSDK_OFFSET(0x11222AD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET UNITYSDK_OFFSET(0x11213100)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE47_TypeDefinitionIndex = 46373;

	class InternalGlobals___GEN_DELEGATE47 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::RPG::GameCore::ActionDelayChangeReason reason)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET))(this, reason);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ActionDelayChangeReason reason, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET))(this, reason, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
