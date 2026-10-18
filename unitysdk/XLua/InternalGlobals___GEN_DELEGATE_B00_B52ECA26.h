#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace RPG::Client::BlindBox::Pool { class IBlindBoxPoolRepository; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB35F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB3620)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB35E0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB34F0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_B52ECA26_TypeDefinitionIndex = 50105;

	class InternalGlobals___GEN_DELEGATE_B00_B52ECA26 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BlindBox::Pool::IBlindBoxPool* Invoke(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxPool*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPoolRepository*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::BlindBox::Pool::IBlindBoxPool* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::RPG::Client::BlindBox::Pool::IBlindBoxPool*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B52ECA26_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
