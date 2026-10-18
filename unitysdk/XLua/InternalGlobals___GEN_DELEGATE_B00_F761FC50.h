#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet { class IPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DB5A00)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DB5A30)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DB59F0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB5900)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_F761FC50_TypeDefinitionIndex = 50152;

	class InternalGlobals___GEN_DELEGATE_B00_F761FC50 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::IPet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::IPet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_F761FC50_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
