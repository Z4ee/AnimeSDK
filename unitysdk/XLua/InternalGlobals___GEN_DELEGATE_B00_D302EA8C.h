#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4240)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4270)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4230)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4140)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_D302EA8C_TypeDefinitionIndex = 50149;

	class InternalGlobals___GEN_DELEGATE_B00_D302EA8C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 Invoke(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_D302EA8C_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
