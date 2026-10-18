#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet { class IPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DAF230)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DAF260)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DAF220)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAF130)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_248B71BF_TypeDefinitionIndex = 50153;

	class InternalGlobals___GEN_DELEGATE_B00_248B71BF : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::IPet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::IPet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_248B71BF_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
