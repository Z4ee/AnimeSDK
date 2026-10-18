#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class InventoryModule; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA97F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9830)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA97E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA96F0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_E769753E_TypeDefinitionIndex = 50133;

	class InternalGlobals___GEN_DELEGATE_B00_E769753E : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ItemData* Invoke(::RPG::Client::InventoryModule* a1, ::RPG::Client::ItemDisplayData* a2)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::RPG::Client::InventoryModule*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::InventoryModule* a1, ::RPG::Client::ItemDisplayData* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::InventoryModule*, ::RPG::Client::ItemDisplayData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::ItemData* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E769753E_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
