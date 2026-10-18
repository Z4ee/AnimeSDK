#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class ItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9FD0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DAA000)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9FC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA9ED0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_F600647E_TypeDefinitionIndex = 50136;

	class InternalGlobals___GEN_DELEGATE_B00_F600647E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::ItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::ItemData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::ItemData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F600647E_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
