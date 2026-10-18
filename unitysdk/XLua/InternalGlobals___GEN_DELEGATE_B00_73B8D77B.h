#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class PetInstanceItemData; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB19F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB1A20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB19E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB1970)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_73B8D77B_TypeDefinitionIndex = 50169;

	class InternalGlobals___GEN_DELEGATE_B00_73B8D77B : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::PetInstanceItemData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::PetInstanceItemData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_73B8D77B_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
