#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace RPG::Client { class IRogueMiracleInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x12B206C0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x12B20720)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B206B0)
#define XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102__CTOR_OFFSET UNITYSDK_OFFSET(0x12B205C0)

namespace XLua
{
	inline static constexpr unsigned int InternalGlobals___GEN_DELEGATE_B00_0C4B9102_TypeDefinitionIndex = 50479;

	class InternalGlobals___GEN_DELEGATE_B00_0C4B9102 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::RPG::Client::IRogueMiracleInfo* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IRogueMiracleInfo* a1, ::System::UInt32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IRogueMiracleInfo*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + XLUA_INTERNALGLOBALS___GEN_DELEGATE_B00_0C4B9102_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
