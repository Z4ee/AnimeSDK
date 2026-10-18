#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class PetInstanceItemData; }
namespace RPG::Client::Pet { class IPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB27B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB27E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB27A0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB2730)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_A03B9CD8_TypeDefinitionIndex = 50164;

	class InternalGlobals___GEN_DELEGATE_B00_A03B9CD8 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::IPet* Invoke(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID, ::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::PetInstanceItemData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::PetInstanceItemData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Pet::IPet* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::Pet::IPet*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A03B9CD8_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
