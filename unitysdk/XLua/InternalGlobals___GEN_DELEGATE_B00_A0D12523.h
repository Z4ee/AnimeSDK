#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB28F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB2920)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB28E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB27F0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_A0D12523_TypeDefinitionIndex = 50146;

	class InternalGlobals___GEN_DELEGATE_B00_A0D12523 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_A0D12523_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
