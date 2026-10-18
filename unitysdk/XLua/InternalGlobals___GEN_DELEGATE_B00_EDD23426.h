#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet::BlindBox { class IBlindBoxPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9D30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9D60)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9D20)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA9C30)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_EDD23426_TypeDefinitionIndex = 50147;

	class InternalGlobals___GEN_DELEGATE_B00_EDD23426 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::BlindBox::IBlindBoxPet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_EDD23426_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
