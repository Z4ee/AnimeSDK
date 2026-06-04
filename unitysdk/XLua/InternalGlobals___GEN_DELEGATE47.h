#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12E89C20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12E89C90)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET UNITYSDK_OFFSET(0x12E89C10)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89BA0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE47_TypeDefinitionIndex = 46963;

	class InternalGlobals___GEN_DELEGATE47 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::ActionDelayChangeReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ActionDelayChangeReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE47_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
