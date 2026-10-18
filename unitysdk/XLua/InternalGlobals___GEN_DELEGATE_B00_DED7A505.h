#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetAppearance; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4CC0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4CF0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB4CB0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB4BC0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_DED7A505_TypeDefinitionIndex = 50150;

	class InternalGlobals___GEN_DELEGATE_B00_DED7A505 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetAppearance*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_DED7A505_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
