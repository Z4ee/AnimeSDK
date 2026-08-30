#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14B1A910)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14B1A980)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721_INVOKE_OFFSET UNITYSDK_OFFSET(0x14B1A900)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721__CTOR_OFFSET UNITYSDK_OFFSET(0x14B1A890)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_00D6A721_TypeDefinitionIndex = 50507;

	class InternalGlobals___GEN_DELEGATE_B00_00D6A721 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::GameCore::ActionDelayChangeReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::ActionDelayChangeReason a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_00D6A721_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
