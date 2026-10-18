#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::BlindBox::Pool { class IBlindBoxPool; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9690)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA96C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA9680)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA9590)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_E2E73A25_TypeDefinitionIndex = 50102;

	class InternalGlobals___GEN_DELEGATE_B00_E2E73A25 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::BlindBox::Pool::IBlindBoxPool* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::BlindBox::Pool::IBlindBoxPool*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_E2E73A25_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
