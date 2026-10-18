#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client::Pet { class IPet; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x14DA2B50)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x14DA2B80)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2_INVOKE_OFFSET UNITYSDK_OFFSET(0x14DA2B40)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA2A50)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0B70F9F2_TypeDefinitionIndex = 50155;

	class InternalGlobals___GEN_DELEGATE_B00_0B70F9F2 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::Pet::IPet* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::Pet::IPet* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::Pet::IPet*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0B70F9F2_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
