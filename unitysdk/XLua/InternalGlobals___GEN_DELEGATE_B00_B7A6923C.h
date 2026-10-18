#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet { class IPetInstance; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB38C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB38F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB38B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB37C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_B7A6923C_TypeDefinitionIndex = 50157;

	class InternalGlobals___GEN_DELEGATE_B00_B7A6923C : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::IPetInstance* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_B7A6923C_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
