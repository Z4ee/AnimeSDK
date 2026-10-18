#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class PetInstanceItemData; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DAF3D0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DAF400)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DAF3C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAF350)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_29CD9372_TypeDefinitionIndex = 50165;

	class InternalGlobals___GEN_DELEGATE_B00_29CD9372 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Pet::IPetInstance* Invoke(::RPG::Client::PetInstanceItemData* a1)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID, ::RPG::Client::PetInstanceItemData*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::PetInstanceItemData* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::PetInstanceItemData*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Pet::IPetInstance* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::Pet::IPetInstance*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_29CD9372_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
